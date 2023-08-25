using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class ElprimoManager : MonoBehaviourPun
{
    MoveHandler moveHandler;
    ElprimoAttackHandler attackHandler;
    HpHandler hpHandler;
    BushManager bushManager;
    TargetHandler targetHandler;

    private void Awake()
    {
        targetHandler = GetComponentInParent<TargetHandler>();
        moveHandler = GetComponent<MoveHandler>();
        attackHandler = GetComponent<ElprimoAttackHandler>();
        hpHandler = GetComponent<HpHandler>();
        bushManager = GetComponent<BushManager>();
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

            attackHandler.HandleNormalAttack();
            attackHandler.HandleUltimateAttack();

            hpHandler.UpdateHp();
            //photonView.RPC(nameof(hpHandler.RegenerateHpInBush), RpcTarget.All);

            //photonView.RPC(nameof(hpHandler.UpdateHp), RpcTarget.All);
            //hpHandler.UpdateHp();
            //hpHandler.RegenerateHpInBush();
        }
    }

    void HandleReverse()
    {
        if(targetHandler.isReverseController)
        {
            moveHandler.isReverse = true;
            attackHandler.isReverse = true;
        }
    }
}
