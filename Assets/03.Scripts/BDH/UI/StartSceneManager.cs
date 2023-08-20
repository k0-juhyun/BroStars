using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class StartSceneManager : MonoBehaviourPunCallbacks
{
    // NickName Input Field
    public InputField inputNickName;

    // Connect Button
    public Button btnConnect; 

    // Start is called before the first frame update
    void Start()
    {

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
        // ���� ���� ��û 
        PhotonNetwork.ConnectUsingSettings();
        print(nameof(OnClickConnect));
    }

    public override void OnConnectedToMaster()
    {
        base.OnConnectedToMaster();
        print(nameof(OnConnectedToMaster));

        // �г��� ����
        PhotonNetwork.NickName = inputNickName.text;

        // �κ� ���� ��û.
        PhotonNetwork.JoinLobby();
    }

    public override void OnJoinedLobby()
    {
        base.OnJoinedLobby();
        print(nameof(OnJoinedLobby));
        // ���� ������ �̵� 02_MainScene
        PhotonNetwork.LoadLevel("02_MainScene");
    }


}
