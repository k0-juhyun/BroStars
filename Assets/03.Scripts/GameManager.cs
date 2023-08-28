using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System;
using static GameManager;
using Photon.Realtime;

// GameManager ��ũ��Ʈ
// 1. ���� �÷��� ���� ������ �������� ��ѷ� ����
// 2. ���� �¸� ���� : �� ���� ������ 10�� �̻� ��� ī��Ʈ�ٿ��� ����� ������ ��ƾ ���� �¸��մϴ�. 


public class GameManager : MonoBehaviourPunCallbacks
{
    public static GameManager instance;

    // �¸� ī��Ʈ 15�� 
    public float winerTimer = 15f;
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
    public bool counting = false;
    private bool HandleCountSfx = false;
    public int _winTeamIdx;

    public GameObject GameTimer;
    private void Update()
    {
        // counting�� true�� �� ���� ����
        if (counting)
        {
            if (myTeam.myTeamScore >= 10 || enemyTeam.EnemyTeamScore >= 10)
            {
                HandleCountSfx = true;
                // ������ �����ϸ� 15�� ī��Ʈ �ٿ�. 
                winerTimer -= Time.deltaTime;
                // �ð� ī��Ʈ �ٿ� �Ҹ�(clock_01)
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
                // ���� �������� �Ǵ�. 
                if (myTeam.myTeamScore > enemyTeam.EnemyTeamScore)
                {
                    // �츮�� �¸�.
                    print("�츮�� �¸�.");
                    _winTeamIdx = 1;
                    OnGameExit();
                }
                else
                {
                    // ����� �¸�.
                    print("����� �¸�.");
                    _winTeamIdx = 2;
                    OnGameExit();
                }
            }
        }


    }

    private void OnGameExit()
    {
        // PhotonNetwork ���� ������ Room���� ������. 
        PhotonNetwork.Disconnect();
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        base.OnDisconnected(cause);

        // 05_PlayerResultScene���� �̵�. 
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