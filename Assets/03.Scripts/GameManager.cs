using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System;
using static GameManager;

// GameManager ��ũ��Ʈ
// 1. ���� �÷��� ���� ������ �������� ��ѷ� ����
// 2. ���� �¸� ���� : �� ���� ������ 10�� �̻� ��� ī��Ʈ�ٿ��� ����� ������ ��ƾ ���� �¸��մϴ�. 


public class GameManager : MonoBehaviourPunCallbacks
{
    public static GameManager instance;



    // �¸� ī��Ʈ 15�� 
    private float winerTimer = 15f;
    private float winnerCurrentTimer;

    // ���� ���� Manager 
    private GameObject spawnManager;

    // ���� Pos
    public List<Vector3> spawnPos;

    GameObject player;

    // �÷��̾��� �ο�
    int PlayerLength;

    // ���� �÷��̾��� �ε���
    public int index;

    // �÷��̾� �̸� List ���� �� �ʱ�ȭ. 
    public static List<string> PlayerName = new List<string>() { "ShellyController", "NitaController", "ElprimoController", "LeonController", };

    // �� Ŭ���� ����
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
    }

    [Serializable]
    public class EnemyTeam
    {
        // �� ����ǥ : �����
        public int EnemyTeamScore = 0;
        // ���� 
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
        }
        else
        {
            Destroy(this.gameObject);

        }

        spawnManager = Resources.Load<GameObject>("Prefabs/SpawnManager");

        DontDestroyOnLoad(gameObject);

    }


    private void Start()
    {
        // �� �ν��Ͻ��� �����Ѵ�. 
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
        index = ProjectManager.instance.myPosIndex - 1;

        // �� Player�� spawnManager�� ������ ��ġ�� �����Ѵ�. 
        CreateSpawn();

        // spawnManager�� ������ ��ġ�� ��ѷ� ĳ���� �����Ѵ�. 
        player = PhotonNetwork.Instantiate(PlayerName[ProjectManager.instance.myBrawlerIndex], spawnPos[index], Quaternion.identity);



        Cursor.visible = false;

    }


    public List<PhotonView> allPlayer = new List<PhotonView>();
    public Dictionary<int, PhotonView> allPhotonView = new Dictionary<int, PhotonView>();

    // ���� �÷��̾� ���� �Ŵ������� AddPlayer�޼ҵ带 ���ؼ� PhotonView�� �߰�.
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
                    // �÷��̾��� ������ ���� index�� 2�� ���� �̸� ���� ��.
                    myTeam.SetMyMebers(allPlayer[i].gameObject, index, spawnPos[index]);
                    break;
                }
                else
                {
                    // �÷��̾��� ������ ���� index�� 2�� �̻� �̸� �ٸ� ��.
                    enemyTeam.SetMyMebers(allPlayer[i].gameObject, index, spawnPos[index]);
                    break;
                }
            }
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

    // ���� �¸� ���� : �� ���� ������ 10�� �̻� ��� ī��Ʈ�ٿ��� ����� ������ ��ƾ ���� �¸��մϴ�. 
    // 1. �������� ���� �� ������ 10�� �̻�. (��� ������ �� ���� ���� ������ �����ؾ� ��)
    // 2. ���࿡ ������ ��������� 10�� �̻� ������ ���¿����� �����ϸ� ī��Ʈ �ٿ� �������� ����. 
    // 3. ������ �������� ���� ī��Ʈ �ٿ� ����. 

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            myTeam.myTeamScore -= 1;
        }
    }


    public void CheckPlayWinner(int myScore, int enemyScore)
    {
        // ���� ���� ī��Ʈ ���� 
        bool isGameOverCount = false;

        print("�츮 �� ���ھ� �ù߾� " + myTeam.myTeamScore);
        print("��� �� ���ھ� �ù߾� " + enemyTeam.EnemyTeamScore);

        if (myScore >= 10 || enemyScore >= 10)
        {
            print("1_10���̻��� �Ѿ���. ī��Ʈ �غ�");
            if (myScore != enemyScore)
            {
                if (!isGameOverCount)
                {
                    print("2_���� ���� ������ �ڷ�ƾ ����.");
                    // ī��Ʈ �ٿ� �ڷ�ƾ ����. 
                    isGameOverCount = true;
                    StartCoroutine(WinerTeamTimer());
                }



            }

        }
        else
        {
            isGameOverCount = false;
            print("�¸� ���� �����ϴ��ڷ�ƾ ����. ");
            StopCoroutine(WinerTeamTimer());

        }



    }


    IEnumerator WinerTeamTimer()
    {

        winnerCurrentTimer = winerTimer;
        print("3_�¸� �ڷ�ƾ ����");

        while (winnerCurrentTimer > 0)
        {
            winnerCurrentTimer -= Time.deltaTime;



            // ���⼭ �ѹ� �� �Ǵ�. 
            if (myTeam.myTeamScore < 10)
            {
                print(" �츮�� -> 10�� �̸���. ");
                CheckPlayWinner(myTeam.myTeamScore, enemyTeam.EnemyTeamScore);
                break;
            }

            if (enemyTeam.EnemyTeamScore < 10)
            {
                print("����� -> 10�� �̸���.");
                // ���⼭ ������ �Ͼ. 

            }


            yield return null;


            if (winnerCurrentTimer <= 0)
            {
                print("15�� �¸� ī��Ʈ ���� -> ���� ���� ������,");

                // ���� �������� �Ǵ�. 
                winnerCurrentTimer = 0;
                yield break;

            }

        }
    }
}