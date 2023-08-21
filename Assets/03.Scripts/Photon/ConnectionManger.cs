using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 
using Photon.Pun;


public class ConnectionManger : MonoBehaviourPunCallbacks
{
    int currentPlayer;
    int maxPlayer;

    public Text curText;
    public Text maxText; 

    // Start is called before the first frame update
    void Start()
    {
        currentPlayer = PhotonNetwork.CurrentRoom.PlayerCount;
        //maxPlayer = PhotonNetwork.CurrentRoom.MaxPlayers;
        maxPlayer = 4; 
        print(currentPlayer);
        print(maxPlayer); 

    }

    private void Update()
    {
        // ConnectionUI의 Text에 현재 참여한 플레이어의 수 표시.

        curText.text = currentPlayer.ToString();
        maxText.text = maxPlayer.ToString();

        // currentPlay > MaxPlayer 
        if (currentPlayer >= maxPlayer)
        {
            // Loding Scene으로 이동.( 포톤 네트워크를 이용하여 씬 전환)
            PhotonNetwork.LoadLevel("BDH");
        }
    }





}
