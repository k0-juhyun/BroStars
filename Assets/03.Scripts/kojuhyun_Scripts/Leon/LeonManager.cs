using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class LeonManager : MonoBehaviourPun
{
    MoveHandler moveHandler;
    HpHandler hpHandler;
    LeonAttackHandler leonAttackHandler;
    TargetHandler targetHandler;

    private void Awake()
    {
        targetHandler = GetComponentInParent<TargetHandler>();
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
            HandleReverse();

            moveHandler.HandleMovement();

            leonAttackHandler.HandleNormalAttack();
            leonAttackHandler.HandleUltimateAttack();

            hpHandler.UpdateHp();
            //photonView.RPC(nameof(hpHandler.RegenerateHpInBush), RpcTarget.All);

            //photonView.RPC(nameof(hpHandler.UpdateHp), RpcTarget.All);
            //hpHandler.UpdateHp();
            //hpHandler.RegenerateHpInBush();
        }
    }

    void HandleReverse()
    {
        if (targetHandler.isReverseController)
        {
            moveHandler.isReverse = true;
            leonAttackHandler.isReverse = true;
        }
    }
}
