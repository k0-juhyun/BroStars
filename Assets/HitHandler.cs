
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class HitHandler : MonoBehaviourPun
{
    HpHandler hpHandler;
    private int myViewID;

    private void Awake()
    {
        hpHandler = GetComponent<HpHandler>();
        myViewID = photonView.ViewID;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.GetComponent<DamageHandler>() != null) 
        {
            print(collision.gameObject.name);
            float HitDamage = collision.gameObject.GetComponent<DamageHandler>().damage;
            photonView.RPC(nameof(hpHandler.HandleHP), RpcTarget.All, -HitDamage);
            print(this.gameObject.name + "Take Damage" + HitDamage);
        }
    }
}
