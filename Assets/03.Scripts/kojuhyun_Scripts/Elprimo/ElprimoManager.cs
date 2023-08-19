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

    private void Awake()
    {
        if (photonView.IsMine == false)
        {
            this.enabled = false;
        }
        moveHandler = GetComponent<MoveHandler>();
        attackHandler = GetComponentInParent<ElprimoAttackHandler>();
        hpHandler = GetComponent<HpHandler>();
    }

    private void FixedUpdate()
    {
        if (photonView.IsMine == false)
        {
            return;
        }
        moveHandler.HandleMovement();

        attackHandler.HandleNormalAttack();
        attackHandler.HandleUltimateAttack();

        hpHandler.UpdateHp();
        hpHandler.RegenerateHpInBush();
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.H))
        {
            hpHandler.HandleHP(-100);
        }
    }
}
