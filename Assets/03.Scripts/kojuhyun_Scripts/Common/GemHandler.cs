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

    [PunRPC]
    void PlusGemRPC()
    {
        gem++;
    }

    public void PlusMyTeamGem()
    {
        photonView.RPC(nameof(PlusmyTeamGemRpc),RpcTarget.All);
    }

    [PunRPC]
    void PlusmyTeamGemRpc()
    {
        GameManager.instance.myTeam.myTeamScore++;
    }

    public void PlusEnemyTeamGem()
    {
        photonView.RPC(nameof(PlusEnemyTeamGemRpc), RpcTarget.All);
    }

    [PunRPC]
    void PlusEnemyTeamGemRpc()
    {
        GameManager.instance.enemyTeam.EnemyTeamScore++;
    }

    public void MinusMyTeamGem(int count)
    {
        photonView.RPC(nameof(MinusMyTeamGemRpc), RpcTarget.All, count);
    }

    [PunRPC]
    private void MinusMyTeamGemRpc(int count)
    {
        GameManager.instance.myTeam.myTeamScore -= count;
    }

    public void MinusEnemyTeamGem(int count)
    {
        photonView.RPC(nameof(MinusEnemyTeamGemRpc), RpcTarget.All, count);
    }

    [PunRPC]
    private void MinusEnemyTeamGemRpc(int count)
    {
        GameManager.instance.enemyTeam.EnemyTeamScore -= count;
    }
}
