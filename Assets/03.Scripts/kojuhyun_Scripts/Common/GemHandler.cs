using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class GemHandler : MonoBehaviourPun
{
    // �� �÷��̾ ������ �ִ� ���� ���� ���� 
    public int gem;

    public void PlusGem()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            photonView.RPC(nameof(PlusGemRPC), RpcTarget.All);
            // GameManger CheckPlayWinner�޼ҵ� ȣ��.
            GameManager.instance.CheckPlayWinner(GameManager.instance.myTeam.myTeamScore, GameManager.instance.enemyTeam.EnemyTeamScore);
        }

        
    }

    [PunRPC]
    void PlusGemRPC()
    {
        gem++;

        
    }


    void Start()
    {
        
    }

    void Update()
    {
        
    }
}
