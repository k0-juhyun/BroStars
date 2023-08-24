using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Unity.VisualScripting;

public class HitHandler : MonoBehaviourPun
{
    HpHandler hpHandler;

    private void Awake()
    {
        hpHandler = GetComponent<HpHandler>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        DamageHandler damageHandler = collision.gameObject.GetComponent<DamageHandler>();

        if (damageHandler != null && damageHandler.attacker != photonView)
        {
            float hitDamage = damageHandler.damage;
            photonView.RPC(nameof(hpHandler.HandleHP), RpcTarget.All, -hitDamage, damageHandler.attacker.ViewID);
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
