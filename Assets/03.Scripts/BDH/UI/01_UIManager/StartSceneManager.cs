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
        // StartScene BGM ����.
        SoundManager_01.instance.PlayBGM(SoundManager_01.EBgm.BGM_StartScene);

        // ��ư�� OnCick Ŭ�� ������ �Լ� ��� -> OnClickConnect
        btnConnect.onClick.AddListener(OnClickConnect);

        // inputNickName�� ������ ����� �� ȣ��Ǵ� �Լ� ���
        inputNickName.onValueChanged.AddListener(
            (string s) =>
            {
                btnConnect.interactable = s.Length > 0;

                // �˾����� �г����� �Է����ּ��� . �˸�.! 
            }
            );

        // inputNickName���� ���͸� ���� �� ȣ��Ǵ� �Լ� ���
        inputNickName.onSubmit.AddListener(
            (string s) =>
            {

                // ��ư�� Ȱ��ȭ �Ǿ��ִٸ�
                if (btnConnect.interactable)
                {
                    // OnClickConnect ȣ���Ѵ�. 
                    OnClickConnect();
                }

            }
            );

        // interactable ��ư�� ��Ȱ��ȭ
        btnConnect.interactable = false; 
    }

    public void OnClickConnect()
    {

        // ĳ���� ���� ��ư ȿ���� (ulti_button_press_01)
        SoundManager_01.instance.PlaySFX(SoundManager_01.ESfx.Main_SFX_Change_Btn);

        // �г��� ����
        PhotonNetwork.NickName = inputNickName.text;

        // ProjectManager�� �г��� ������ ����.
        ProjectManager.instance.myNickName = inputNickName.text;

        // MainScene���� �̵�. 
        PhotonNetwork.LoadLevel("02_MainScene");


    }



  


}
