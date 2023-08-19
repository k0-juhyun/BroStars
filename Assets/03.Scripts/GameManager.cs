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

public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    // ���� ���� ���� 
    private bool isGameOver;

    // �¸� ī��Ʈ 15�� 
    private float winerTimer = 15f;
    private float winnerCurrentTimer;

    // ���� ���� Manager 
    private GameObject spawnManager;

    // �÷��̾��� �ο�
    int PlayerLength;

    // �÷��̾� �̸� List ���� �� �ʱ�ȭ. 
    public static List<string> PlayerName = new List<string>() { "ElprimoController", "LeonController", "NitaController", "ShellyController" };

    // �� Ŭ���� ����
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
        // �� ����ǥ : �츮��
        public int myTeamScore = 0;
        // ���� ����Ʈ 
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
        // �� ����ǥ : �����
        public int EnemyTeamScore = 0;
        // ���� 
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
        // OnPhotonSerializeView ȣ�� ��. 
        PhotonNetwork.SerializationRate = 30;

        // spawnManager�� �����Ѵ�. 
        Instantiate(spawnManager);

        // ������ �÷��̾��� �ο� �ʱ�ȭ. 
        // PlayerLength = spawnManager.transform.childCount;
        PlayerLength = 4; 

        // CreateSpawn() �޼ҵ带 ���� ���� ����� �����ϰ�
        // �� Player�� spawnManager�� SpawnTransform�� �÷��̾ �����Ѵ�.  
        CreateSpawn();

        // ���콺 �����͸� �� Ȱ��ȭ.
        Cursor.visible = false; 


    }

    private void CreateSpawn()
    {
        // ���� �����Ѵ�.
        myTeam = new MyTeam();
        enemyTeam = new EnemyTeam(); 

        // ������ Length�� �÷��̾��� Length �����ϴٴ� ����.
        for (int i = 0; i < PlayerLength; i++)
        {
            // Player�� ������ ������ ��ġ. 
            Vector3 pos = spawnManager.transform.GetChild(i).transform.position;

            if(i >= 0 && i <= 1)
            {
                // �츮���� �����Ѵ�. : myTeam
                // SetMyMebers�޼ҵ�� Player Ŭ������ �����Ͽ� �츮 ������ 3���� �����Ѵ�. 
                myTeam.SetMyMebers(i, pos);

                // ���� 2�� Player�� �����Ѵ�. ( �̸� : String, ��ġ : Vector3, ȸ�� : Quarterion) 
                PhotonNetwork.Instantiate(PlayerName[i], pos, Quaternion.identity);
            }
            else
            {
                // ������� �����Ѵ�. :enemyTeam;
                // SetMyMebers�޼ҵ�� Player Ŭ������ �����Ͽ� ��� ������ 3���� �����Ѵ�. 
                enemyTeam.SetMyMebers(i, pos); 

                // ���� 2�� Player�� �����Ѵ�. ( �̸� : String, ��ġ : Vector3, ȸ�� : Quarterion) 
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
