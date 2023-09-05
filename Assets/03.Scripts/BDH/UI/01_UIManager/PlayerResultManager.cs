using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;


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
    public Button SceneChangeBtn; 
    public Transform[] brawlsSpawnPos; 

    // Start is called before the first frame update
    void Start()
    {
        // BGM(mvp_jingle_01)
        SoundManager_01.instance.PlayBGM(SoundManager_01.EBgm.BGM_PlayerResultScene);

        // ���� ������ _checkWinIdx�� Ȯ���Ͽ� �¸� : true, �й� : false ����
        SettingWinnerTeam();

        // Resources/Prefabs/PlayerResultBrawls -> Resources.Load() ��ѷ� ȣ��.
        //playerResultBrawls = Resources.Load<GameObject>("Prefabs/PlayerResultBrawls");

        // ���� ��ư Ŭ�� ������ ����. - > ���� ��ư ȿ����(ulti_button_press_01) 
        SceneChangeBtn.onClick.AddListener(MoveScene);


       
    }

    private void MoveScene()
    {
        // ���� ������ �̵�. 
        // 02_MainScene �̵�. 
        PhotonNetwork.LoadLevel("02_MainScene");

    } 

    private void SettingWinnerTeam()
    {
        print(GameManager.instance.myTeam._checkWinIdx);
        print(GameManager.instance.enemyTeam._checkWinIdx);

        //// �¸��� �� ����Ʈ�� ����.
        //int length = GameManager.instance.myTeam.myMembers.Count;
   

        //// �츮�� ��ѷ��� ����. 
        //for (int i = 0; i < length; i++)
        //{
          
        //    //  GameManager�� myMemebers ����Ʈ�� Player -> PlayerName�� String ���� �����´�. 
        //    string brwalName = GameManager.instance.myTeam.myMembers[i].PlayerName;
        //    //  ex) String ���� "ShellyController" �̸�  "Shelly�� �´� ������Ʈ�� Switch ������ ��ȯ�Ѵ�. 
           
        //    // Switch������ �� Player�� PlayerName�� �´� Resource ������Ʈ�� ��ġ�Ѵ�. 
        //    switch (brwalName)
        //    {
        //        case "ShellyController":
        //            FindBrawlerObject("Shelly");
        //            break;

        //        case "NitaController":
        //            FindBrawlerObject("Nita");
        //            break;
        //        case "ElprimoController":
        //            FindBrawlerObject("primo_geo");
        //            break;
        //        case "LeonController":
        //            FindBrawlerObject("leon_sally_geo");
        //            break;
        //       default:
        //            print("�̰� �� ã��,,,? ");

        //            break; 

        //    }
           
        //}
    }


    GameObject FindBrawlerObject(string findBrawler)
    {
        for(int i = 0; i < playerResultBrawls.transform.childCount; i++)
        {
            GameObject child = Instantiate(playerResultBrawls.transform.GetChild(i).gameObject, Quad);

            if(child.name == findBrawler)
            {
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
