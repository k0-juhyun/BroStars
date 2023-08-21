using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class StartSceneManager : MonoBehaviourPunCallbacks
{
    // NickName Input Field
    public InputField inputNickName;

    // Connect Button
    public Button btnConnect;

    int currentPlayer;
    int maxPlayer;

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

    // ������ ���� ���� �Ϸ�. 
    public override void OnConnectedToMaster()
    {
        base.OnConnectedToMaster();
        print(nameof(OnConnectedToMaster));

        // �г��� ����
        PhotonNetwork.NickName = inputNickName.text;

        // �κ� ���� ��û.
        PhotonNetwork.JoinLobby();
    }

    // �κ� ���� �Ϸ�.
    public override void OnJoinedLobby()
    {
        base.OnJoinedLobby();
        print(nameof(OnJoinedLobby));

        //�� ���� or ����
        RoomOptions roomOption = new RoomOptions();

        // �ִ� �뿡 ������ �� �ִ� �÷��̾� ����. 
        roomOption.MaxPlayers = 4;

        // ConnectionUI�� Text�� �ִ� �÷��̾� ���� �� ǥ��.
        maxPlayer = (int)roomOption.MaxPlayers;
        print("���� ������ �ִ� ���� �ο� : " + maxPlayer);

        PhotonNetwork.JoinOrCreateRoom("broStars", roomOption, TypedLobby.Default);

        
    }

    // �� ���� �Ϸ�� ȣ��Ǵ� �Լ�
    public override void OnCreatedRoom()
    {
        base.OnCreatedRoom();
        print(nameof(OnCreatedRoom));
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        base.OnCreateRoomFailed(returnCode, message);
        print(nameof(OnCreateRoomFailed));
        // �� ���� ���� ������ �����ִ� �˾� ����. -> message 
    }

    // �� ���� ������ ȣ��Ǵ� �Լ�
    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        print(nameof(OnJoinedRoom));

        // ���� ������ �÷��̾��� ��
        int currentPlayer = PhotonNetwork.CurrentRoom.PlayerCount;
        print("���� ������ �÷��̾��� �� : "+ currentPlayer);

        // ���� ������ �̵� 02_MainScene
        PhotonNetwork.LoadLevel("02_MainScene");

    }


}
