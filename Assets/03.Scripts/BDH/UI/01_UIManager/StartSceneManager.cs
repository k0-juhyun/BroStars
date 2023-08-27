using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;


public class StartSceneManager : MonoBehaviourPun
{
    // NickName Input Field
    public InputField inputNickName;

    // Connect Button
    public Button btnConnect;

    // Start is called before the first frame update
    void Start()
    {
        // StartScene BGM 실행.
        SoundManager_01.instance.PlayBGM(SoundManager_01.EBgm.BGM_StartScene);

        // 버튼에 OnCick 클릭 리스너 함수 사용 -> OnClickConnect
        btnConnect.onClick.AddListener(OnClickConnect);

        // inputNickName의 내용이 변경될 때 호출되는 함수 등록
        inputNickName.onValueChanged.AddListener(
            (string s) =>
            {
                btnConnect.interactable = s.Length > 0;

                // 팝업으로 닉네임을 입력해주세요 . 알림.! 
            }
            );

        // inputNickName에서 엔터를 쳤을 때 호출되는 함수 등록
        inputNickName.onSubmit.AddListener(
            (string s) =>
            {

                // 버튼이 활성화 되어있다면
                if (btnConnect.interactable)
                {
                    // OnClickConnect 호출한다. 
                    OnClickConnect();
                }

            }
            );

        // interactable 버튼을 비활성화
        btnConnect.interactable = false; 
    }

    public void OnClickConnect()
    {

        // 캐릭터 변경 버튼 효과음 (ulti_button_press_01)
        SoundManager_01.instance.PlaySFX(SoundManager_01.ESfx.Main_SFX_Change_Btn);

        // 닉네임 설정
        PhotonNetwork.NickName = inputNickName.text;

        // ProjectManager에 닉네임 정보를 저장.
        ProjectManager.instance.myNickName = inputNickName.text;

        // MainScene으로 이동. 
        PhotonNetwork.LoadLevel("02_MainScene");


    }



  


}
