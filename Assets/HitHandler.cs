
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class HitHandler : MonoBehaviourPun
{
    HpHandler hpHandler;

    private void Awake()
    {
        hpHandler = GetComponent<HpHandler>();   
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
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.GetComponent<DamageHandler>() != null)
        {
            print(other.gameObject.name);
            float HitDamage = other.gameObject.GetComponent<DamageHandler>().damage;
            photonView.RPC(nameof(hpHandler.HandleHP), RpcTarget.All, -HitDamage);
            print(this.gameObject.name + "Take Damage" + HitDamage);
        }
    }

}
