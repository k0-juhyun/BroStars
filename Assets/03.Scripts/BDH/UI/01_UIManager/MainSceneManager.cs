using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using System;


// 1. 플레이어의 이름을 StartScene에서 설정한 닉네임으로 Text 변경. (0)
// 2. 플레이 버튼을 누를경우 ConnectionScene으로 이동. (0)
// 3. 사용자 플레이어 선택에 따른 플레이어 정보를 설정. (0) 

public class MainSceneManager : MonoBehaviour
{
    public Text PlayerNickName;
    public Button btnPlay;
    public Button leftBtn;
    public Button rightBtn;

    // 브롤러 리스트
    public List<GameObject> brawlList;

    // 인덱스 전역변수
    private int index = 0;
    private int max_length;


    // Start is called before the first frame update
    void Start()
    {
        // MainScene BGM 실행.
        SoundManager_01.instance.PlayBGM(SoundManager_01.EBgm.BGM_MainScene);
        
        max_length = brawlList.Count;

        // 사용자가 입력한 닉네임으로 TEXT UI 표시. 
        PlayerNickName.text = PhotonNetwork.NickName;

        btnPlay.onClick.AddListener(OnClickConnect);
        leftBtn.onClick.AddListener(OnClickLeftConnect);
        rightBtn.onClick.AddListener(OnClickRightConnect);
    }

    private void OnClickRightConnect()
    {
        // 캐릭터 변경 버튼 효과음 (ulti_button_press_01)
       
        // 기존의 GameObject는 비활성화
        brawlList[index].SetActive(false);
    
        // 인덱스 업데이트 
        index = (index + 1 ) % max_length;
    
        // 해당 인덱스 GameObject 활성화
        brawlList[index].SetActive(true);

    }

    private void OnClickLeftConnect()
    {
        // 캐릭터 변경 버튼 효과음 (ulti_button_press_01)

        // 기존의 GameObject는 비활성화
        brawlList[index].SetActive(false);

        // 인덱스 업데이트 
        index = (index - 1) % max_length;
       
        if (index == -1)
        {
            index = max_length - 1;
        }
        
        // 해당 인덱스 GameObject 활성화
        brawlList[index].SetActive(true);

    }

    public void OnClickConnect()
    {
        // 플레이 버튼 효과음 (ulti_ready_01) 
  
        // 저장한 브롤러 Index 정보를 ProjectManager에 저장.
        ProjectManager.instance.myBrawlerIndex = index;
        
          
        // 03_ConnectionScene으로 이동.
        PhotonNetwork.LoadLevel("03_ConnectionScene");
    }
}
