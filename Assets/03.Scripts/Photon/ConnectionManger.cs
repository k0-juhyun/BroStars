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
        // Photon 환경설정을 기반으로 접속 시도. 
        PhotonNetwork.ConnectUsingSettings();
    }

    // 마스터 서버 접속 완료. 
    public override void OnConnectedToMaster()
    {
        base.OnConnectedToMaster();
        print(nameof(OnConnectedToMaster));

        // 로비 진입 
        JoinLobby();
    }

    void JoinLobby()
    {
        // 닉네임 설정
        PhotonNetwork.NickName = "변동환";
        // 기본 Lobby 입장
        PhotonNetwork.JoinLobby();
    }

    public override void OnJoinedLobby()
    {
        base.OnJoinedLobby();
        print(nameof(OnJoinedLobby));
        //방 생성 or 참여

        RoomOptions roomOption = new RoomOptions();

        // 최대 룸에 참여할 수 있는 플레이어 제한. 
        roomOption.MaxPlayers = 6;

        // ConnectionUI의 Text에 최대 플레이어 제한 수 표시.
        maxPlayer = (int)roomOption.MaxPlayers; 

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
        int currentPlayer = PhotonNetwork.CurrentRoom.PlayerCount;

        // ConnectionUI의 Text에 현재 참여한 플레이어의 수 표시.

        // currentPlay < MaxPlayer 
        if(currentPlayer <= maxPlayer)
        {
            // Loding Scene으로 이동.( 포톤 네트워크를 이용하여 씬 전환)
            PhotonNetwork.LoadLevel("BDH");
        }
       

    }
}
