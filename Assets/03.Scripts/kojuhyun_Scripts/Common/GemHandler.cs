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


    void Start()
    {
        
    }

    void Update()
    {
        
    }
}
