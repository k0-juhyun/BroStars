using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System;
using static GameManager;

// GameManager 스크립트
// 1. 게임 플레이 씬의 리스폰 지역에서 브롤러 생성
// 2. 게임 승리 조건 : 팀 총합 보석을 10개 이상 얻고 카운트다운이 종료될 때까지 버틴 팀이 승리합니다. 

// 게임 승리 조건 : 팀 총합 보석을 10개 이상 얻고 카운트다운이 종료될 때까지 버틴 팀이 승리합니다. 
// 1. 팀원들이 모은 총 보석이 10개 이상. (상대 팀보다 더 많은 수의 보석을 보유해야 함)
// 2. 만약에 팀원과 상대팀원이 10개 이상 보유한 상태에서도 동일하면 카운트 다운 시작하지 않음. 
// 3. 균형이 무너지는 순간 카운트 다운 실행. 

public class GameManager : MonoBehaviourPunCallbacks
{
    public static GameManager instance;

    // 게임 종료 여부 
    private bool isGameOver;

    // 승리 카운트 15초 
    private float winerTimer = 15f;
    private float winnerCurrentTimer;

    // 스폰 지역 Manager 
    private GameObject spawnManager;

    // 스폰 Pos
    private List<Vector3> spawnPos;

    GameObject player;

    // 플레이어의 인원
    int PlayerLength;

    // 나의 플레이어의 인덱스
    int index;

    // 플레이어 이름 List 선언 및 초기화. 
    public static List<string> PlayerName = new List<string>() { "ShellyController", "LeonController", "NitaController", "ElprimoController" };

    // 팀 클래스 변수
    public MyTeam myTeam;
    public EnemyTeam enemyTeam;

    [Serializable]
    public class Player
    {
        public GameObject player;
        public string PlayerName;
        public Vector3 ResawnPos;
       
        public Player(GameObject gameobject ,string name, Vector3 pos)
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

        public void show()
        {
            print("우리팀 리스트를 보여준다.");
            for (int i = 0; i < myMembers.Count; i++)
            {
                print(myMembers[i].player.name);
                print(myMembers[i].PlayerName);
                print(myMembers[i].ResawnPos);

            }
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

        public void show()
        {
            print("상대팀 리스트를 보여준다.");
            for(int i = 0; i < enemyMembers.Count; i++)
            {
                print(enemyMembers[i].player.name);
                print(enemyMembers[i].PlayerName);
                print(enemyMembers[i].ResawnPos);

            }
        }
    }

    private void Awake()
    {
       

        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(this.gameObject);

        }

        spawnManager = Resources.Load<GameObject>("Prefabs/SpawnManager");

        DontDestroyOnLoad(gameObject);

    }


    private void Start()
    {
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
        index = PhotonNetwork.CurrentRoom.PlayerCount - 1; 

        // 각 Player의 spawnManager의 리스폰 위치를 생성한다. 
        CreateSpawn();

        // 나의 Player 생성
        player = PhotonNetwork.Instantiate(PlayerName[index], spawnPos[index], Quaternion.identity);

        // MasterClient만 팀 클래스를 생성한다. 

        // RPC를 통해서 RpcTarget.other를 통해 팀 클래스에 나의 Player를 추가. 

        // RPC를 통해서 RpcTarget.MasterClient 호출. 
        //BuildTeam(player, index, spawnPos[index]);

        // 마우스 포인터를 비 활성화.
        Cursor.visible = false; 

    }

    public List<PhotonView> allPlayer = new List<PhotonView>();
    public void AddPlayer(PhotonView pv)
    {
        allPlayer.Add(pv);
        
        if(PhotonNetwork.IsMasterClient)
        {
            pv.RPC("SetMyTeamIdx", RpcTarget.AllBuffered, (allPlayer.Count - 1) / 2 + 1);
        }

        //if(allPlayer.Count == 4)
        //{
        //    if (PhotonNetwork.IsMasterClient)
        //    {
        //        StartCoroutine(AAA());
        //    }
        //}
    }

    public int myTeamIdx;
    public void SetTeamInfo()
    {
        if (PhotonNetwork.IsMasterClient == false) return;
        if (allPlayer.Count < 4) return;

        StartCoroutine(AAA());
    }

    IEnumerator AAA()
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
        for(int i = 0; i < allPlayer.Count; i++)
        {
            if (allPlayer[i].ViewID == viewId)
            {
                
                th = allPlayer[i].GetComponent<TargetHandler>();
                print("th.teamIdx " + th.teamIdx);
                if (myTeamIdx == th.teamIdx)
                {
                    myTeam.SetMyMebers(allPlayer[i].gameObject, index, spawnPos[index]);
                }
                else
                {
                    enemyTeam.SetMyMebers(allPlayer[i].gameObject, index, spawnPos[index]);
                }
                break;
                
            }
        }
    }

    private void BuildTeam(GameObject gameobject, int index, Vector3 pos)
    {

        // 플레이어의 참여한 순서 index가 2명 이하 이면 같은 팀.
        if (index <= 1) 
        {
            myTeam.SetMyMebers(gameobject, index, pos);
        }
        else // 플레이어의 참여한 순서 index가 2명 이상 이면 다른 팀.
        {
            enemyTeam.SetMyMebers(gameobject, index, pos);
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

    private void Update()
    {
        myTeam.show();
        //enemyTeam.show();
    }



    // 새로운 인원이 방에 들어왔을 때 호출되는 함수
    public override void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
    {
        base.OnPlayerEnteredRoom(newPlayer);
      

    }

    // 기존 인원이 방에 나갔을 때 호출되는 함수
    public override void OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
    {
        base.OnPlayerLeftRoom(otherPlayer);
       
    }



    //public int myTeam
    //{
    //    get
    //    {
    //        return myTeamScore;
    //    }
    //    set
    //    {
    //        myTeamScore = value;

    //        if(myTeamScore >= 10 && myTeamScore != EnemyTeamScore)
    //        {
    //            // 우리팀 보석을 10개 이상 획득. 
    //            isGameOver = true;

    //            // 우리팀 승리 카운드 15초 시작. 
    //            StartCoroutine(WinerTeamTimer());
    //        }
    //    }
    //}

    //public int EnemyTeam
    //{
    //    get
    //    {
    //        return EnemyTeamScore;
    //    }

    //    set
    //    {
    //        EnemyTeamScore = value;

    //        if(EnemyTeamScore >= 10 && myTeamScore != EnemyTeamScore)
    //        {
    //            // 상대팀 보석을 10개 이상 획득. 
    //            isGameOver = false;

    //            // 상대팀 승리 카운트 다운 시작. 
    //            StartCoroutine(WinerTeamTimer());
    //        }
    //    }
    //}


    IEnumerator WinerTeamTimer()
    {
        winnerCurrentTimer = winerTimer;

        while (winnerCurrentTimer > 0)
        {
            winnerCurrentTimer -= Time.deltaTime;
            
            yield return null;

            if (winnerCurrentTimer <= 0)
            {
                if(isGameOver == true)
                {
                    // 우리 팀 승리.!! 

                }
                else
                {
                    // 상태 팀 승리.!! 
                }

              
                winnerCurrentTimer = 0;
                yield break;
            }
        }
    }


}
