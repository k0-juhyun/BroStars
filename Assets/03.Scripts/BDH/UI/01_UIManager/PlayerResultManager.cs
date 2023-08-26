using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

// ���� ���� : ProjectManager.instance.myBrawlerIndex, ProjectManager.instance.teamIdx
// �ʿ��� ���� : ������ ���� ����, ��Ÿ �÷��̾� ��ѷ��� ����

// 1. GameManager���� ������ ���� ������ �����´�. �� �¸��� ������ ��Ÿ �÷��̾� ��ѷ��� ������ �����´�.
// 2. ������ ���� �������� �¸��� �� or �й��� ���� �Ǻ��Ѵ�.

// 3. �¸��� �� or �й��� ������ UI�� Resources/Prefabs/brawls -> Resources.Load() ȣ���Ͽ� ��ѷ��� ��ġ�Ѵ�. 
// 4. �¸��� �� or �й��� ���� �°� �ִϸ��̼��� �����Ѵ�. 

// 5. �¸��� ������ ��Ÿ �÷��̾� ��ѷ��� ������ �°� UI�� SetActive(true)�� �Ѵ�. 

public class PlayerResultManager : MonoBehaviourPun
{

   
    private GameObject playerResultBrawls;
    public Transform Quad; 
    public Transform[] brawlsSpawnPos; 

    // Start is called before the first frame update
    void Start()
    {
        // Resources/Prefabs/PlayerResultBrawls -> Resources.Load() ��ѷ� ȣ��.
        playerResultBrawls = Resources.Load<GameObject>("Prefabs/PlayerResultBrawls");
        
      
        if (PhotonNetwork.IsMasterClient)
        {
            photonView.RPC(nameof(SetWinnerTeam), RpcTarget.All);
        }
     
       
       
    }

    [PunRPC]
    private void SetWinnerTeam()
    {
        // �¸��� �� ����Ʈ�� ����.
        //int length = GameManager.instance.myTeam.myMembers.Count;
       
        // �¸��� �� ����� ��ü���� ProjectManager.myBrawlerIndex �� �����´�. (���� ��ѷ�)
        int myBrawlerIdx = ProjectManager.instance.myBrawlerIndex; 
        
        // �츮�� ��ѷ��� ����. 

        //  GameManager�� myMemebers ����Ʈ�� Player -> PlayerName�� String ���� �����´�. 
        string brwalName = GameManager.PlayerName[myBrawlerIdx];
      
        //  ex) String ���� "ShellyController" �̸�  "Shelly�� �´� ������Ʈ�� Switch ������ ��ȯ�Ѵ�. 

        // Switch������ �� Player�� PlayerName�� �´� Resource ������Ʈ�� ��ġ�Ѵ�. 
        switch (brwalName)
        {
            case "ShellyController":
                FindBrawlerObject("Shelly");
              
                break;

            case "NitaController":
                print("����,");
                FindBrawlerObject("Nita");
             
                break;
            case "ElprimoController":
                FindBrawlerObject("primo_geo");
               
                break;
            case "LeonController":
                FindBrawlerObject("leon_sally_geo");
               
                break;
            default:
                print("�̰� �� ã��,,,? ");

                break;

        }
    }

    GameObject FindBrawlerObject(string findBrawler)
    {
       
        for(int i = 0; i < playerResultBrawls.transform.childCount; i++)
        {
            GameObject child = Instantiate(playerResultBrawls.transform.GetChild(i).gameObject, Quad);


            if (child.name == findBrawler)
            {
                print("��ġ��");
                // ��ġ�� ��ġ�� �����Ѵ�. 
                child.transform.position = brawlsSpawnPos[i].position;
                //�¸� �ִϸ��̼��� �����Ѵ�.

                // ���࿡ ��Ÿ �÷��̾��̸�, UI�� ǥ���Ѵ�. 


                return child;
            }

        }
        return null; 
    }


   
}
