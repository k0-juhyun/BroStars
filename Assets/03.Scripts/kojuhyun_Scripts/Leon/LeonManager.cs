using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class LeonManager : MonoBehaviourPun
{
    MoveHandler moveHandler;
    HpHandler hpHandler;
    LeonAttackHandler leonAttackHandler;

    private void Awake()
    {
        moveHandler = GetComponent<MoveHandler>();
        hpHandler = GetComponent<HpHandler>();
        leonAttackHandler = GetComponent<LeonAttackHandler>();
    }

    private void FixedUpdate()
    {
        if (photonView.IsMine == false)
        {
            return;
        }
        else
        {
            moveHandler.HandleMovement();

            leonAttackHandler.HandleNormalAttack();
            leonAttackHandler.HandleUltimateAttack();

            photonView.RPC(nameof(hpHandler.UpdateHp), RpcTarget.All);
            photonView.RPC(nameof(hpHandler.RegenerateHpInBush), RpcTarget.All);
            //hpHandler.UpdateHp();
            //hpHandler.RegenerateHpInBush();
        }
    }
}
