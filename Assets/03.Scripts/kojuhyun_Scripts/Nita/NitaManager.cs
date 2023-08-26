using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using UnityEngine.Rendering;

public class NitaManager : MonoBehaviourPun
{
    MoveHandler moveHandler;
    HpHandler hpHandler;
    NitaAttackHandler nitaAttackHandler;
    TargetHandler targetHandler;


    private void Awake()
    {
        if (photonView.IsMine == false)
        {
            this.enabled = false;
        }
        targetHandler = GetComponentInParent<TargetHandler>();
        moveHandler = GetComponent<MoveHandler>();
        hpHandler = GetComponent<HpHandler>();
        nitaAttackHandler = GetComponent<NitaAttackHandler>();
    }

    private void Start()
    {
        hpHandler.HpBar.value = hpHandler.maxHp;
    }

    private void FixedUpdate()
    {
        if (photonView.IsMine == false)
            return;
        HandleReverse();

        moveHandler.HandleMovement();

        nitaAttackHandler.HandleNormalAttack();
        nitaAttackHandler.HandleUltimateAttack();

        photonView.RPC(nameof(hpHandler.RegenerateHpInBush), RpcTarget.All);
        photonView.RPC(nameof(hpHandler.UpdateHp), RpcTarget.All);

        hpHandler.HandleCanvasInBush();
    }

    void HandleReverse()
    {
        if (targetHandler.isReverseController)
        {
            moveHandler.isReverse = true;
            nitaAttackHandler.isReverse = true;
        }
    }
}
