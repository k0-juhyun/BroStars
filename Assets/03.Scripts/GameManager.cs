using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System;
using static GameManager;

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
    public List<Vector3> spawnPos;

    GameObject player;

    // �÷��̾��� �ο�
    int PlayerLength;

    // ���� �÷��̾��� �ε���
    public int index;

    // �÷��̾� �̸� List ���� �� �ʱ�ȭ. 
    public static List<string> PlayerName = new List<string>() { "ShellyController", "NitaController", "ReverseElprimoController", "ReverseLeonController",  };

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

        public void CalculateScore()
        {
            for (int i = 0; i < myMembers.Count; i++)
            {
                int score = myMembers[i].player.GetComponentInChildren<GemHandler>().gem;
                myTeamScore += score;
            }

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
        public void CalculateScore()
        {
            for (int i = 0; i < enemyMembers.Count; i++)
            {
                int score = enemyMembers[i].player.GetComponentInChildren<GemHandler>().gem;
                EnemyTeamScore += score;
            }

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
        index = ProjectManager.instance.myPosIndex - 1;// PhotonNetwork.CurrentRoom.PlayerCount - 1;
      
        // �� Player�� spawnManager�� ������ ��ġ�� �����Ѵ�. 
        CreateSpawn();

        // spawnManager�� ������ ��ġ�� ��ѷ� ĳ���� �����Ѵ�. 
        //player = PhotonNetwork.Instantiate(PlayerName[index], spawnPos[index], Quaternion.identity);
        player = PhotonNetwork.Instantiate(PlayerName[ProjectManager.instance.myBrawlerIndex], spawnPos[index], Quaternion.identity);
        // �����ϸ� ���� ����Ʈ ���

        if (player.gameObject.name.Contains("Reverse"))
        {
            player.transform.rotation = new Quaternion(0, 180, 0, 0);
        }

        // ���콺 �����͸� �� Ȱ��ȭ.
        Cursor.visible = false;

    }

    public List<PhotonView> allPlayer = new List<PhotonView>();

    // ���� �÷��̾� ���� �Ŵ������� AddPlayer�޼ҵ带 ���ؼ� PhotonView�� �߰�.
    public void AddPlayer(PhotonView pv)
    {
        allPlayer.Add(pv);

        // �������� �÷��̾ RPC ����.
        if (PhotonNetwork.IsMasterClient)
        {
            pv.RPC("SetMyTeamIdx", RpcTarget.AllBuffered, (allPlayer.Count - 1) / 2 + 1);
        }

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
        for (int i = 0; i < allPlayer.Count; i++)
        {
            if (allPlayer[i].ViewID == viewId)
            {

                th = allPlayer[i].GetComponent<TargetHandler>();
                print("th.teamIdx " + th.teamIdx);
                if (myTeamIdx == th.teamIdx)
                {
                    // �÷��̾��� ������ ���� index�� 2�� ���� �̸� ���� ��.
                    myTeam.SetMyMebers(allPlayer[i].gameObject, index, spawnPos[index]);
                }
                else
                {
                    // �÷��̾��� ������ ���� index�� 2�� �̻� �̸� �ٸ� ��.
                    enemyTeam.SetMyMebers(allPlayer[i].gameObject, index, spawnPos[index]);
                }
                break;

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

    private void CheckWinner()
    {

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
                if (isGameOver == true)
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