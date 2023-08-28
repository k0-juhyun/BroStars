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
        // 서버 접속 요청 
        PhotonNetwork.ConnectUsingSettings();

        // 종료 버튼 클릭 시 현재 Room에서 나가고 메인 MainScene으로 이동.
        exitBtn.onClick.AddListener(OnClickExit);
    }

    private void Update()
    {

        // 현재 참여한 플레이어의 수 업데이트
        if (currentPlayer > 0 && PhotonNetwork.CurrentRoom != null)
        {
            currentPlayer = PhotonNetwork.CurrentRoom.PlayerCount;

            if (currentPlayer >= maxPlayerCount && isConnection)
            {
                // Loding Scene으로 이동.( 포톤 네트워크를 이용하여 씬 전환)
                PhotonNetwork.LoadLevel("04_LodingScene");
                
                isConnection = false;
            }

        }

        // ConnectionUI의 Text에 현재 참여한 플레이어의 수 표시  .
        curText.text = currentPlayer.ToString();
        maxText.text = maxPlayerCount.ToString();
    }

    private void OnClickExit()
    {
        // PhotonNetwork 현재 참여한 Room에서 나간다. 
        PhotonNetwork.Disconnect();
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        base.OnDisconnected(cause);
        PhotonNetwork.LoadLevel("02_MainScene");
    }



    // 마스터 서버 접속 완료. 
    public override void OnConnectedToMaster()
    {
        base.OnConnectedToMaster();
        print(nameof(OnConnectedToMaster));


        // 로비 진입 요청.
        PhotonNetwork.JoinLobby();
    }

    // 로비 진입 완료.
    public override void OnJoinedLobby()
    {
        base.OnJoinedLobby();
        print(nameof(OnJoinedLobby));

        //방 생성 or 참여
        RoomOptions roomOption = new RoomOptions();

        // 최대 룸에 참여할 수 있는 플레이어 제한. 
        roomOption.MaxPlayers = maxPlayerCount;

        PhotonNetwork.JoinOrCreateRoom("broStars", roomOption, TypedLobby.Default);


    }

    // 방 생성 완료시 호출되는 함수
    public override void OnCreatedRoom()
    {
        base.OnCreatedRoom();
        print(nameof(OnCreatedRoom));
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        base.OnCreateRoomFailed(returnCode, message);
        print(nameof(OnCreateRoomFailed));
        // 방 생성 실패 원인을 보여주는 팝업 띄우기. -> message 
    }

    // 방 참여 성공시 호출되는 함수
    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        print(nameof(OnJoinedRoom));

        // 현재 참여한 플레이어의 수
        currentPlayer = PhotonNetwork.CurrentRoom.PlayerCount;

        // 현재 나의 인덱스를 ProjectManager에 myPosIndex 저장.
        ProjectManager.instance.myPosIndex = currentPlayer;

        // isConnection 으로 연결 가능.
        isConnection = true;

        ProjectManager.instance.teamIdx = (PhotonNetwork.CurrentRoom.PlayerCount - 1) / 2 + 1;

        print("teamIdx: " + ProjectManager.instance.teamIdx);

    }

    // 새로운 인원이 방에 들어왔을 때 호출되는 함수
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        base.OnPlayerEnteredRoom(newPlayer);

        print(PhotonNetwork.NickName + " 브롤러님이 입장하였습니다.");
    }



}
