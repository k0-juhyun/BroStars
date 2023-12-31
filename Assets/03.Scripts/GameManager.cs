using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System;
using static GameManager;
using Photon.Realtime;

// GameManager 스크립트
// 1. 게임 플레이 씬의 리스폰 지역에서 브롤러 생성
// 2. 게임 승리 조건 : 팀 총합 보석을 10개 이상 얻고 카운트다운이 종료될 때까지 버틴 팀이 승리합니다. 


public class GameManager : MonoBehaviourPunCallbacks
{
    public static GameManager instance;

    // 승리 카운트 15초 
    public float winerTimer = 15f;
    private float winnerCurrentTimer;

    // 스폰 지역 Manager 
    private GameObject spawnManager;

    // 스폰 Pos
    public List<Vector3> spawnPos;

    GameObject player;

    // 플레이어의 인원
    int PlayerLength;

    // 나의 플레이어의 인덱스
    public int index;

    // 플레이어 이름 List 선언 및 초기화. 
    public static List<string> PlayerName = new List<string>() { "ShellyController", "NitaController", "ElprimoController", "LeonController", };

    // 팀 클래스 변수
    public MyTeam myTeam;
    public EnemyTeam enemyTeam;


    [Serializable]
    public class Player
    {
        public GameObject player;
        public string PlayerName;
        public Vector3 ResawnPos;

        public Player(GameObject gameobject, string name, Vector3 pos)
        {
            this.player = gameobject;
            this.PlayerName = name;
            this.ResawnPos = pos;
        }
    }

    [Serializable]
    public class MyTeam
    {
        // 잼 점수표 : 우리팀
        public int myTeamScore = 0;

        // 팀원 리스트 
        public List<Player> myMembers;

        public MyTeam()
        {
            myMembers = new List<Player>();
        }

        public void SetMyMebers(GameObject gameobject, int index, Vector3 respawnPos)
        {
            myMembers.Add(new Player(gameobject, PlayerName[index], respawnPos));
        }
    }

    [Serializable]
    public class EnemyTeam
    {
        // 잼 점수표 : 상대팀
        public int EnemyTeamScore = 0;
        // 팀원 
        public List<Player> enemyMembers;

        public EnemyTeam()
        {
            enemyMembers = new List<Player>();
        }

        public void SetMyMebers(GameObject gameobject, int index, Vector3 respawnPos)
        {
            enemyMembers.Add(new Player(gameobject, PlayerName[index], respawnPos));
        }
    }


    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(this.gameObject);

        }

        spawnManager = Resources.Load<GameObject>("Prefabs/SpawnManager");



    }


    private void Start()
    {
        // 팀 인스턴스를 생성한다. 
        myTeam = new MyTeam();
        enemyTeam = new EnemyTeam();

        // RPC 호출 빈도 
        PhotonNetwork.SendRate = 30;

        // OnPhotonSerializeView 호출 빈도. 
        PhotonNetwork.SerializationRate = 30;

        // spawnManager를 생성한다. 
        Instantiate(spawnManager);

        // 참여한 플레이어의 인원 초기화. 
        PlayerLength = PhotonNetwork.CurrentRoom.PlayerCount;

        // 내가 위치해야 하는 index.
        index = ProjectManager.instance.myPosIndex - 1;

        // 각 Player의 spawnManager의 리스폰 위치를 생성한다. 
        CreateSpawn();

        // spawnManager의 리스폰 위치에 브롤러 캐릭터 생성한다. 
        player = PhotonNetwork.Instantiate(PlayerName[ProjectManager.instance.myBrawlerIndex], spawnPos[index], Quaternion.identity);



        Cursor.visible = false;

    }


    public List<PhotonView> allPlayer = new List<PhotonView>();
    public Dictionary<int, PhotonView> allPhotonView = new Dictionary<int, PhotonView>();

    // 각자 플레이어 게임 매니저에서 AddPlayer메소드를 통해서 PhotonView를 추가.
    public void AddPlayer(PhotonView pv)
    {
        allPlayer.Add(pv);
        allPhotonView[pv.ViewID] = pv;
    }

    public int myTeamIdx;
    public void SetTeamInfo()
    {
        if (PhotonNetwork.IsMasterClient)
        {

            if (photonView.IsMine && PhotonNetwork.IsMasterClient)
            {
                StartCoroutine(Delay());
            }
        }
    }



    IEnumerator Delay()
    {
        yield return new WaitForSeconds(3);


        for (int i = 0; i < allPlayer.Count; i++)
        {

            photonView.RPC(nameof(RpcSetMyMebers), RpcTarget.AllBuffered, allPlayer[i].ViewID, i);
        }
    }


    [PunRPC]
    public void RpcSetMyMebers(int viewId, int index)
    {
        TargetHandler th;
        for (int i = 0; i < allPlayer.Count; i++)
        {

            if (allPlayer[i].ViewID == viewId)
            {

                th = allPlayer[i].GetComponent<TargetHandler>();

                if (myTeamIdx == th.teamIdx)
                {
                    // 플레이어의 참여한 순서 index가 2명 이하 이면 같은 팀.
                    myTeam.SetMyMebers(allPlayer[i].gameObject, index, spawnPos[index]);
                    break;
                }
                else
                {
                    // 플레이어의 참여한 순서 index가 2명 이상 이면 다른 팀.
                    enemyTeam.SetMyMebers(allPlayer[i].gameObject, index, spawnPos[index]);
                    break;
                }
            }
        }
    }

    private void CreateSpawn()
    {
        // spawnPos 리스트
        spawnPos = new List<Vector3>();

        // 리스폰 갯수. : 4
        for (int i = 0; i < 4; i++)
        {
            // Player를 생성할 리스폰 위치. 
            Vector3 pos = spawnManager.transform.GetChild(i).transform.position;
            spawnPos.Add(pos);
        }

    }

    // 게임 승리 조건 : 팀 총합 보석을 10개 이상 얻고 카운트다운이 종료될 때까지 버틴 팀이 승리합니다. 
    // 1. 팀원들이 모은 총 보석이 10개 이상. (상대 팀보다 더 많은 수의 보석을 보유해야 함)
    // 2. 만약에 팀원과 상대팀원이 10개 이상 보유한 상태에서도 동일하면 카운트 다운 시작하지 않음. 
    // 3. 균형이 무너지는 순간 카운트 다운 실행. 
    public bool counting = false;
    private bool HandleCountSfx = false;
    public int _winTeamIdx;

    public GameObject GameTimer;
    private void Update()
    {
        // counting이 true일 때 로직 실행
        if (counting)
        {
            if (myTeam.myTeamScore >= 10 || enemyTeam.EnemyTeamScore >= 10)
            {
                HandleCountSfx = true;
                // 조건을 만족하면 15초 카운트 다운. 
                winerTimer -= Time.deltaTime;
                // 시계 카운트 다운 소리(clock_01)
                if (HandleCountSfx)
                {
                    GameTimer.SetActive(true);
                }
            }
            else
            {
                HandleCountSfx = false;
                GameTimer.SetActive(false);
            }

            if (winerTimer <= 0)
            {
                ResetCountDown();
                // 누가 승자인지 판단. 
                if (myTeam.myTeamScore > enemyTeam.EnemyTeamScore)
                {
                    // 우리팀 승리.
                    print("우리팀 승리.");
                    _winTeamIdx = 1;
                    OnGameExit();
                }
                else
                {
                    // 상대팀 승리.
                    print("상대팀 승리.");
                    _winTeamIdx = 2;
                    OnGameExit();
                }
            }
        }
    }

    private void OnGameExit()
    {
        // PhotonNetwork 현재 참여한 Room에서 나간다. 
        PhotonNetwork.Disconnect();
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        base.OnDisconnected(cause);

        // 05_PlayerResultScene으로 이동. 
        PhotonNetwork.LoadLevel("05_PlayerResultScene");
    }


    public void StartCountDown()
    {
        counting = true;
        winerTimer = 10f;
    }

    private void ResetCountDown()
    {
        counting = false;
        winerTimer = 0f;
    }
}