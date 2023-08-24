using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class ShellyManager : MonoBehaviourPun
{
    MoveHandler moveHandler;
    //J_attackHandler attackHandler;
    ShellyAttackHandler attackHandler;
    HpHandler hpHandler;
    BushManager bushManager;

    // Start is called before the first frame update

    public int gem;

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
    // Update is called once per frame
    private void FixedUpdate()
    {
        if (photonView.IsMine == false)
            return;

        moveHandler.HandleMovement();
        attackHandler.HandleNormalAttack();
        attackHandler.HandleUltimateAttack();
        //attackHandler.UpdateFire();

        photonView.RPC(nameof(hpHandler.UpdateHp), RpcTarget.All);
        photonView.RPC(nameof(hpHandler.RegenerateHpInBush), RpcTarget.All);
    }
}
