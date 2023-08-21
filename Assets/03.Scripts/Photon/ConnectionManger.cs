using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 
using Photon.Pun;
using Photon.Realtime;

public class ConnectionManger : MonoBehaviourPunCallbacks
{
    int currentPlayer;
    int maxPlayer;

    public Text curText;
    public Text maxText;
    

    // Start is called before the first frame update
    void Start()
    {
        // ���� ���� ��û 
        PhotonNetwork.ConnectUsingSettings();

        //maxPlayer = PhotonNetwork.CurrentRoom.MaxPlayers;
        maxPlayer = 4; 
    }

    private void Update()
    {
        // ConnectionUI�� Text�� ���� ������ �÷��̾��� �� ǥ��.

        //curText.text = currentPlayer.ToString();
        //maxText.text = maxPlayer.ToString();

        //// currentPlay > MaxPlayer 
        //if (currentPlayer >= maxPlayer)
        //{
        //    // Loding Scene���� �̵�.( ���� ��Ʈ��ũ�� �̿��Ͽ� �� ��ȯ)
        //    PhotonNetwork.LoadLevel("BDH");
        //}
    }

    // ������ ���� ���� �Ϸ�. 
    public override void OnConnectedToMaster()
    {
        base.OnConnectedToMaster();
        print(nameof(OnConnectedToMaster));


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
        roomOption.MaxPlayers = maxPlayer;

        // ConnectionUI�� Text�� �ִ� �÷��̾� ���� �� ǥ��.
        //maxPlayer = (int)roomOption.MaxPlayers;
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
        currentPlayer = PhotonNetwork.CurrentRoom.PlayerCount;
        ProjectManager.instance.myFirstPosIndex = currentPlayer;
        print("���� ������ �÷��̾��� �� : " + currentPlayer);

        // �ε� ������ �̵� 04_LodingScene
        PhotonNetwork.LoadLevel("04_LodingScene");
    }
}
