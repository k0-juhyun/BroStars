using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

// GameManager ��ũ��Ʈ
// 1. ���� �÷��� ���� ������ �������� ��ѷ� ����
// 2. ���� �¸� ���� : �� ���� ������ 10�� �̻� ��� ī��Ʈ�ٿ��� ����� ������ ��ƾ ���� �¸��մϴ�. 

// ���� �¸� ���� : �� ���� ������ 10�� �̻� ��� ī��Ʈ�ٿ��� ����� ������ ��ƾ ���� �¸��մϴ�. 
// 1. �������� ���� �� ������ 10�� �̻�. (��� ������ �� ���� ���� ������ �����ؾ� ��)
// 2. ���࿡ ������ ��������� 10�� �̻� ������ ���¿����� �����ϸ� ī��Ʈ �ٿ� �������� ����. 
// 3. ������ �������� ���� ī��Ʈ �ٿ� ����. 

public class GameManager : MonoBehaviourPunCallbacks
{
    public static GameManager instance;

    // ���� ���� ���� 
    private bool isGameOver;

    // �¸� ī��Ʈ 15�� 
    private float winerTimer = 15f;
    private float winnerCurrentTimer;

    // ���� ���� Manager 
    private GameObject spawnManager;

    // ���� Pos
    private List<Vector3> spawnPos;

    GameObject player;

    // �÷��̾��� �ο�
    int PlayerLength;

    // ���� �÷��̾��� �ε���
    int index;

    // �÷��̾� �̸� List ���� �� �ʱ�ȭ. 
    public static List<string> PlayerName = new List<string>() { "ElprimoController", "LeonController", "NitaController", "ShellyController"};

    // �� Ŭ���� ����
    MyTeam myTeam;
    EnemyTeam enemyTeam;

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

    public class MyTeam
    {
        // �� ����ǥ : �츮��
        public int myTeamScore = 0;
        // ���� ����Ʈ 
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
            print("�츮�� ����Ʈ�� �����ش�.");
            for (int i = 0; i < myMembers.Count; i++)
            {
                print(myMembers[i].player.name);
                print(myMembers[i].PlayerName);
                print(myMembers[i].ResawnPos);

            }
        }

    }

    public class EnemyTeam
    { 
        // �� ����ǥ : �����
        public int EnemyTeamScore = 0;
        // ���� 
        private List<Player> enemyMembers;

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
            print("����� ����Ʈ�� �����ش�.");
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

        // RPC ȣ�� �� 
        PhotonNetwork.SendRate = 30;

        // OnPhotonSerializeView ȣ�� ��. 
        PhotonNetwork.SerializationRate = 30;

        // spawnManager�� �����Ѵ�. 
        Instantiate(spawnManager);

        // ������ �÷��̾��� �ο� �ʱ�ȭ. 
        PlayerLength = PhotonNetwork.CurrentRoom.PlayerCount;

        // ���� ��ġ�ؾ� �ϴ� index.
        index = PhotonNetwork.CurrentRoom.PlayerCount - 1; 

        // �� Player�� spawnManager�� ������ ��ġ�� �����Ѵ�. 
        CreateSpawn();

        // ���� Player ����
        player = PhotonNetwork.Instantiate(PlayerName[index], spawnPos[index], Quaternion.identity);

        // MasterClient�� �� Ŭ������ �����Ѵ�. 

        // RPC�� ���ؼ� RpcTarget.other�� ���� �� Ŭ������ ���� Player�� �߰�. 

        // RPC�� ���ؼ� RpcTarget.MasterClient ȣ��. 
        BuildTeam(player, index, spawnPos[index]);

        // ���콺 �����͸� �� Ȱ��ȭ.
        Cursor.visible = false; 


    }

    private void BuildTeam(GameObject gameobject, int index, Vector3 pos)
    {

        // �÷��̾��� ������ ���� index�� 2�� ���� �̸� ���� ��.
        if (index <= 1) 
        {
            myTeam.SetMyMebers(gameobject, index, pos);
        }
        else // �÷��̾��� ������ ���� index�� 2�� �̻� �̸� �ٸ� ��.
        {
            enemyTeam.SetMyMebers(gameobject, index, pos);
        }

    }

    private void CreateSpawn()
    {
        // spawnPos ����Ʈ
        spawnPos = new List<Vector3>();
        
        // ������ ����. : 4
        for (int i = 0; i < 4; i++)
        {
            // Player�� ������ ������ ��ġ. 
            Vector3 pos = spawnManager.transform.GetChild(i).transform.position;
            spawnPos.Add(pos);
        }

    }

    private void Update()
    {
        myTeam.show();
        //enemyTeam.show();
    }



    // ���ο� �ο��� �濡 ������ �� ȣ��Ǵ� �Լ�
    public override void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
    {
        base.OnPlayerEnteredRoom(newPlayer);
      

    }

    // ���� �ο��� �濡 ������ �� ȣ��Ǵ� �Լ�
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
    //            // �츮�� ������ 10�� �̻� ȹ��. 
    //            isGameOver = true;

    //            // �츮�� �¸� ī��� 15�� ����. 
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
    //            // ����� ������ 10�� �̻� ȹ��. 
    //            isGameOver = false;

    //            // ����� �¸� ī��Ʈ �ٿ� ����. 
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
                    // �츮 �� �¸�.!! 

                }
                else
                {
                    // ���� �� �¸�.!! 
                }

              
                winnerCurrentTimer = 0;
                yield break;
            }
        }
    }


}
