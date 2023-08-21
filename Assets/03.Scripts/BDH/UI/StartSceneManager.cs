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
        // 서버 접속 요청 
        PhotonNetwork.ConnectUsingSettings();
        print(nameof(OnClickConnect));
    }

    // 마스터 서버 접속 완료. 
    public override void OnConnectedToMaster()
    {
        base.OnConnectedToMaster();
        print(nameof(OnConnectedToMaster));

        // 닉네임 설정
        PhotonNetwork.NickName = inputNickName.text;

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
        roomOption.MaxPlayers = 4;

        // ConnectionUI의 Text에 최대 플레이어 제한 수 표시.
        maxPlayer = (int)roomOption.MaxPlayers;
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
        int currentPlayer = PhotonNetwork.CurrentRoom.PlayerCount;
        print("현재 참여한 플레이어의 수 : "+ currentPlayer);

        // 메인 씬으로 이동 02_MainScene
        PhotonNetwork.LoadLevel("02_MainScene");

    }


}
