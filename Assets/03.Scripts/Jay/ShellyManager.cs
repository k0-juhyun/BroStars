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
    TargetHandler targetHandler;

    // Start is called before the first frame update

    public int gem;

    void Awake()
    {
        //if(photonView.IsMine == false)
        //{
        //    this.enabled = false;
        //}
       targetHandler = GetComponentInParent<TargetHandler>();
       moveHandler = GetComponent <MoveHandler>();
       attackHandler = GetComponent<ShellyAttackHandler>();
        hpHandler = GetComponent<HpHandler>();
        bushManager = GetComponent <BushManager>();
       
    }
    private void Start()
    {
        hpHandler.HpBar.value = hpHandler.maxHp;
    }
    // Update is called once per frame
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
            photonView.RPC(nameof(hpHandler.UpdateHp), RpcTarget.All);
            photonView.RPC(nameof(hpHandler.RegenerateHpInBush), RpcTarget.All);
            hpHandler.HandleCanvasInBush();
        }


    }
    void HandleReverse()
    {
        if (targetHandler.isReverseController)
        {
            moveHandler.isReverse = true;
            attackHandler.isReverse = true;
        }
    }
}
