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
        if (PhotonNetwork.IsMasterClient == false) return;

        //ismasterclient
        DamageHandler damageHandler = collision.gameObject.GetComponent<DamageHandler>();

        if (damageHandler != null && damageHandler.attackviewID != photonView.ViewID)
        {
            float hitDamage = damageHandler.damage;

            photonView.RPC(nameof(hpHandler.HandleHP), RpcTarget.All, -hitDamage, damageHandler.attackviewID);
        }
    }
}
