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
        hpHandler.RegenerateHpInBush();
    }

    //public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    //{
    //    if (stream.IsWriting)
    //    {
    //        stream.SendNext(hpHandler.curHp);
    //    }
    //    else
    //    {
    //        float newHp = (float)stream.ReceiveNext();
    //        hpHandler.UpdateHp(newHp);
    //    }
    //}
}
