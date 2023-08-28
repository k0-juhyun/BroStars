using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using System;

public class ConnectionManger : MonoBehaviourPunCallbacks
{
    int currentPlayer;
    int maxPlayerCount = 2;

    public Text curText;
    public Text maxText;
    public Button exitBtn;

    private bool isConnection;

    // Start is called before the first frame update
    void Start()
    {
        // ���� ���� ��û 
        PhotonNetwork.ConnectUsingSettings();

        // ���� ��ư Ŭ�� �� ���� Room���� ������ ���� MainScene���� �̵�.
        exitBtn.onClick.AddListener(OnClickExit);
    }

    private void Update()
    {

        // ���� ������ �÷��̾��� �� ������Ʈ
        if (currentPlayer > 0 && PhotonNetwork.CurrentRoom != null)
        {
            currentPlayer = PhotonNetwork.CurrentRoom.PlayerCount;

            if (currentPlayer >= maxPlayerCount && isConnection)
            {
                // Loding Scene���� �̵�.( ���� ��Ʈ��ũ�� �̿��Ͽ� �� ��ȯ)
                PhotonNetwork.LoadLevel("04_LodingScene");
                
                isConnection = false;
            }

        }

        // ConnectionUI�� Text�� ���� ������ �÷��̾��� �� ǥ��  .
        curText.text = currentPlayer.ToString();
        maxText.text = maxPlayerCount.ToString();
    }

    private void OnClickExit()
    {
        // PhotonNetwork ���� ������ Room���� ������. 
        PhotonNetwork.Disconnect();
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        base.OnDisconnected(cause);
        PhotonNetwork.LoadLevel("02_MainScene");
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
        roomOption.MaxPlayers = maxPlayerCount;

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

        // ���� ���� �ε����� ProjectManager�� myPosIndex ����.
        ProjectManager.instance.myPosIndex = currentPlayer;

        // isConnection ���� ���� ����.
        isConnection = true;

        ProjectManager.instance.teamIdx = (PhotonNetwork.CurrentRoom.PlayerCount - 1) / 2 + 1;

        print("teamIdx: " + ProjectManager.instance.teamIdx);

    }

    // ���ο� �ο��� �濡 ������ �� ȣ��Ǵ� �Լ�
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        base.OnPlayerEnteredRoom(newPlayer);

        print(PhotonNetwork.NickName + " ��ѷ����� �����Ͽ����ϴ�.");
    }



}
