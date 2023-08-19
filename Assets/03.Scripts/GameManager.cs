using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using Photon.Pun;

// GameManager 스크립트
// 1. 게임 플레이 씬의 리스폰 지역에서 브롤러 생성
// 2. 게임 승리 조건 : 팀 총합 보석을 10개 이상 얻고 카운트다운이 종료될 때까지 버틴 팀이 승리합니다. 

// 게임 승리 조건 : 팀 총합 보석을 10개 이상 얻고 카운트다운이 종료될 때까지 버틴 팀이 승리합니다. 
// 1. 팀원들이 모은 총 보석이 10개 이상. (상대 팀보다 더 많은 수의 보석을 보유해야 함)
// 2. 만약에 팀원과 상대팀원이 10개 이상 보유한 상태에서도 동일하면 카운트 다운 시작하지 않음. 
// 3. 균형이 무너지는 순간 카운트 다운 실행. 

public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    // 게임 종료 여부 
    private bool isGameOver;

    // 승리 카운트 15초 
    private float winerTimer = 15f;
    private float winnerCurrentTimer;

    // 스폰 지역 Manager 
    private GameObject spawnManager;

    // 플레이어의 인원
    int PlayerLength;

    // 플레이어 이름 List 선언 및 초기화. 
    public static List<string> PlayerName = new List<string>() { "ElprimoController", "LeonController", "NitaController", "ShellyController" };

    // 팀 클래스 변수
    MyTeam myTeam;
    EnemyTeam enemyTeam;

    public class Player
    {
        private string PlayerName;
        private Vector3 PlayerPos;
        private Quaternion PlayerRot;
        public Player(string name, Vector3 pos, Quaternion rot)
        {
            this.PlayerName = name;
            this.PlayerPos = pos;
            this.PlayerRot = rot;
        }
    }

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
       
        public void SetMyMebers(int number, Vector3 pos) 
        {
            myMembers.Add(new Player(PlayerName[number], pos, Quaternion.identity));
        }
    
    }

    public class EnemyTeam
    { 
        // 잼 점수표 : 상대팀
        public int EnemyTeamScore = 0;
        // 팀원 
        private List<Player> enemyMembers;

        public EnemyTeam()
        {
            enemyMembers = new List<Player>();
        }

        public void SetMyMebers(int number, Vector3 pos)
        {
            enemyMembers.Add(new Player(PlayerName[number], pos, Quaternion.identity));
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
        // OnPhotonSerializeView 호출 빈도. 
        PhotonNetwork.SerializationRate = 30;

        // spawnManager를 생성한다. 
        Instantiate(spawnManager);

        // 참여한 플레이어의 인원 초기화. 
        // PlayerLength = spawnManager.transform.childCount;
        PlayerLength = 4; 

        // CreateSpawn() 메소드를 통해 팀과 멤버를 구성하고
        // 각 Player의 spawnManager의 SpawnTransform에 플레이어를 생성한다.  
        CreateSpawn();

        // 마우스 포인터를 비 활성화.
        Cursor.visible = false; 


    }

    private void CreateSpawn()
    {
        // 팀을 생성한다.
        myTeam = new MyTeam();
        enemyTeam = new EnemyTeam(); 

        // 리스폰 Length와 플레이어의 Length 동일하다는 가정.
        for (int i = 0; i < PlayerLength; i++)
        {
            // Player를 생성할 리스폰 위치. 
            Vector3 pos = spawnManager.transform.GetChild(i).transform.position;

            if(i >= 0 && i <= 1)
            {
                // 우리팀을 구성한다. : myTeam
                // SetMyMebers메소드는 Player 클래스를 생성하여 우리 팀원을 3명을 구성한다. 
                myTeam.SetMyMebers(i, pos);

                // 팀원 2명 Player를 생성한다. ( 이름 : String, 위치 : Vector3, 회전 : Quarterion) 
                PhotonNetwork.Instantiate(PlayerName[i], pos, Quaternion.identity);
            }
            else
            {
                // 상대팀을 구성한다. :enemyTeam;
                // SetMyMebers메소드는 Player 클래스를 생성하여 상대 팀원을 3명을 구성한다. 
                enemyTeam.SetMyMebers(i, pos); 

                // 팀원 2명 Player를 생성한다. ( 이름 : String, 위치 : Vector3, 회전 : Quarterion) 
                PhotonNetwork.Instantiate(PlayerName[i], pos, Quaternion.identity);
            }

        }
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
