using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class ShellyManager : MonoBehaviourPun
{
    MoveHandler moveHandler;
    ShellyAttackHandler attackHandler;
    HpHandler hpHandler;
    BushManager bushManager;

    void Awake()
    {
        if(photonView.IsMine == false)
        {
            this.enabled = false;
        }
        moveHandler = GetComponent <MoveHandler>();
       attackHandler = GetComponent<ShellyAttackHandler>();

        hpHandler = GetComponent<HpHandler>();
        bushManager = GetComponent <BushManager>();
    }

    private void FixedUpdate()
    {
        if (photonView.IsMine == false)
            return;

        moveHandler.HandleMovement();
        attackHandler.HandleNormalAttack();
        attackHandler.HandleUltimateAttack();

        hpHandler.RegenerateHpInBush();
    }
}
