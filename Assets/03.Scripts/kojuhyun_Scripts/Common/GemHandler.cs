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
