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

    private void Awake()
    {
        if (photonView.IsMine == false)
        {
            this.enabled = false;
        }
        moveHandler = GetComponent<MoveHandler>();
        hpHandler = GetComponent<HpHandler>();
        nitaAttackHandler = GetComponent<NitaAttackHandler>();
    }

    private void FixedUpdate()
    {
        if (photonView.IsMine == false)
            return;

        moveHandler.HandleMovement();

        nitaAttackHandler.HandleNormalAttack();
        nitaAttackHandler.HandleUltimateAttack();

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
