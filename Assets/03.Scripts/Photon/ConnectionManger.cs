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
        // 서버 접속 요청 
        PhotonNetwork.ConnectUsingSettings();

        //maxPlayer = PhotonNetwork.CurrentRoom.MaxPlayers;
        maxPlayer = 4; 
    }

    private void Update()
    {
        // ConnectionUI의 Text에 현재 참여한 플레이어의 수 표시.

        //curText.text = currentPlayer.ToString();
        //maxText.text = maxPlayer.ToString();

        //// currentPlay > MaxPlayer 
        //if (currentPlayer >= maxPlayer)
        //{
        //    // Loding Scene으로 이동.( 포톤 네트워크를 이용하여 씬 전환)
        //    PhotonNetwork.LoadLevel("BDH");
        //}
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
        roomOption.MaxPlayers = maxPlayer;

        // ConnectionUI의 Text에 최대 플레이어 제한 수 표시.
        //maxPlayer = (int)roomOption.MaxPlayers;
        print("입장 가능한 최대 가능 인원 : " + maxPlayer);

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
        ProjectManager.instance.myFirstPosIndex = currentPlayer;
        print("현재 참여한 플레이어의 수 : " + currentPlayer);

        // 로딩 씬으로 이동 04_LodingScene
        PhotonNetwork.LoadLevel("04_LodingScene");
    }
}
