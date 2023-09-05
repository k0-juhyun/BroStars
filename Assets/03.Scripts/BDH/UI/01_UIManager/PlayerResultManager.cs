using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;


// 필요한 정보 : 구별된 팀의 정보, 스타 플레이어 브롤러의 정보

// 1. GameManager에서 구별된 팀의 정보를 가져온다. 및 승리한 팀에서 스타 플레이어 브롤러의 정보를 가져온다.
// 2. 가져온 팀의 정보에서 승리한 팀 or 패배한 팀을 판별한다.
// 3. 승리한 팀 or 패배한 팀으로 UI에 Resources/Prefabs/brawls -> Resources.Load() 호출하여 브롤러를 배치한다. 
// 4. 승리한 팀 or 패배한 팀에 맞게 애니메이션을 적용한다. 
// 5. 승리한 팀에서 스타 플레이어 브롤러의 정보에 맞게 UI를 SetActive(true)를 한다. 

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

        // 팀의 정보를 _checkWinIdx를 확인하여 승리 : true, 패배 : false 여부
        SettingWinnerTeam();

        // Resources/Prefabs/PlayerResultBrawls -> Resources.Load() 브롤러 호출.
        //playerResultBrawls = Resources.Load<GameObject>("Prefabs/PlayerResultBrawls");

        // 다음 버튼 클릭 리스러 생성. - > 다음 버튼 효과음(ulti_button_press_01) 
        SceneChangeBtn.onClick.AddListener(MoveScene);


       
    }

    private void MoveScene()
    {
        // 메인 씬으로 이동. 
        // 02_MainScene 이동. 
        PhotonNetwork.LoadLevel("02_MainScene");

    } 

    private void SettingWinnerTeam()
    {
        print(GameManager.instance.myTeam._checkWinIdx);
        print(GameManager.instance.enemyTeam._checkWinIdx);

        //// 승리한 팀 리스트의 길이.
        //int length = GameManager.instance.myTeam.myMembers.Count;
   

        //// 우리팀 브롤러를 셋팅. 
        //for (int i = 0; i < length; i++)
        //{
          
        //    //  GameManager의 myMemebers 리스트의 Player -> PlayerName의 String 값을 가져온다. 
        //    string brwalName = GameManager.instance.myTeam.myMembers[i].PlayerName;
        //    //  ex) String 값이 "ShellyController" 이면  "Shelly에 맞는 오브젝트를 Switch 문으로 소환한다. 
           
        //    // Switch문으로 각 Player의 PlayerName에 맞는 Resource 오브젝트를 배치한다. 
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
        //            print("이걸 못 찾아,,,? ");

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
                // 배치할 위치를 지정한다. 
                child.transform.position = brawlsSpawnPos[i].position;
                //승리 애니메이션을 실행한다.

                // 만약에 스타 플레이어이면, UI를 표시한다. 


                return child;
            }

        }
        return null; 
    }


   
}
