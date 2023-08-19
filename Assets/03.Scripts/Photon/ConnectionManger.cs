using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime; 

public class ConnectionManger : MonoBehaviourPunCallbacks
{
    int currentPlayer;
    int maxPlayer; 

    // Start is called before the first frame update
    void Start()
    {
        // Photon ȯ�漳���� ������� ���� �õ�. 
        PhotonNetwork.ConnectUsingSettings();
    }

    // ������ ���� ���� �Ϸ�. 
    public override void OnConnectedToMaster()
    {
        base.OnConnectedToMaster();
        print(nameof(OnConnectedToMaster));

        // �κ� ���� 
        JoinLobby();
    }

    void JoinLobby()
    {
        // �г��� ����
        PhotonNetwork.NickName = "����ȯ";
        // �⺻ Lobby ����
        PhotonNetwork.JoinLobby();
    }

    public override void OnJoinedLobby()
    {
        base.OnJoinedLobby();
        print(nameof(OnJoinedLobby));
        //�� ���� or ����

        RoomOptions roomOption = new RoomOptions();

        // �ִ� �뿡 ������ �� �ִ� �÷��̾� ����. 
        roomOption.MaxPlayers = 6;

        // ConnectionUI�� Text�� �ִ� �÷��̾� ���� �� ǥ��.
        maxPlayer = (int)roomOption.MaxPlayers; 

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

        // ConnectionUI�� Text�� ���� ������ �÷��̾��� �� ǥ��.

        // currentPlay < MaxPlayer 
        if(currentPlayer <= maxPlayer)
        {
            // Loding Scene���� �̵�.( ���� ��Ʈ��ũ�� �̿��Ͽ� �� ��ȯ)
            PhotonNetwork.LoadLevel("BDH");
        }
       

    }
}
