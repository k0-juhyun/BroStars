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

    private void Awake()
    {
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
            moveHandler.HandleMovement();

            attackHandler.HandleNormalAttack();
            attackHandler.HandleUltimateAttack();

            photonView.RPC(nameof(hpHandler.UpdateHp), RpcTarget.All);
            photonView.RPC(nameof(hpHandler.RegenerateHpInBush), RpcTarget.All);
            //hpHandler.UpdateHp();
            //hpHandler.RegenerateHpInBush();
        }
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.H))
        {
            hpHandler.HandleHP(-100);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        //if 내가 MyTeam이고
        //if()
        //{
        //    other.
        //}
        //if(other.gameObject.tag == awayTeamAttack)
        //{
        //    hpHandler.HandleHP(other.gameObject.GetComponent);
        //}
    }
}
