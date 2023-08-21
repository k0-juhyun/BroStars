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
        // ConnectionUI�� Text�� ���� ������ �÷��̾��� �� ǥ��.

        curText.text = currentPlayer.ToString();
        maxText.text = maxPlayer.ToString();

        // currentPlay > MaxPlayer 
        if (currentPlayer >= maxPlayer)
        {
            // Loding Scene���� �̵�.( ���� ��Ʈ��ũ�� �̿��Ͽ� �� ��ȯ)
            PhotonNetwork.LoadLevel("BDH");
        }
    }





}
