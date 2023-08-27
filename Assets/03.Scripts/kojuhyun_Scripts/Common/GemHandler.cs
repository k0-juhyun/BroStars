using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class GemHandler : MonoBehaviourPun
{
    // 각 플레이어가 가지고 있는 잼의 갯수 변수 
    public int gem;

    public void PlusGem()
    {
        photonView.RPC(nameof(PlusGemRPC), RpcTarget.All);
    }

    public void MinusGem()
    {
        photonView.RPC(nameof(MinusGemRPC), RpcTarget.All);
    }

    public void PlusMyTeamGem()
    {
        photonView.RPC(nameof(PlusMyTeamGemRPC),RpcTarget.All);
    }

    public void MinusMyTeamGem(int count)
    {
        photonView.RPC(nameof(MinusMyTeamGemRPC), RpcTarget.All, count);
    }

    public void PlusEnemyTeamGem()
    {
        photonView.RPC(nameof(PlusEnemyTeamGemRPC), RpcTarget.All);
    }

    public void MinusEnemyTeamGem(int count)
    {
        photonView.RPC(nameof(MinusEnemyTeamGemRPC), RpcTarget.All, count);
    }

    [PunRPC]
    private void PlusGemRPC()
    {
        gem++;
    }

    [PunRPC]
    private void MinusGemRPC(int count)
    {
        gem -= count;
    }


    [PunRPC]
    private void PlusMyTeamGemRPC()
    {
        GameManager.instance.myTeam.myTeamScore++;
    }

    [PunRPC]
    private void PlusEnemyTeamGemRPC()
    {
        GameManager.instance.enemyTeam.EnemyTeamScore++;
    }

    [PunRPC]
    private void MinusMyTeamGemRPC(int count)
    {
        GameManager.instance.myTeam.myTeamScore -= count;
    }

    [PunRPC]
    private void MinusEnemyTeamGemRPC(int count)
    {
        GameManager.instance.enemyTeam.EnemyTeamScore -= count;
    }
}
