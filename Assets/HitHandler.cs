using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Unity.VisualScripting;

public class HitHandler : MonoBehaviourPun
{
    LogHandler logHandler;
    HpHandler hpHandler;

    public bool isProgress;
    private void Awake()
    {
        logHandler = FindObjectOfType<LogHandler>();
        hpHandler = GetComponent<HpHandler>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        DamageHandler damageHandler = collision.gameObject.GetComponent<DamageHandler>();

        if (damageHandler != null && damageHandler.viewID != photonView.ViewID)
        {
            float hitDamage = damageHandler.damage;
            photonView.RPC(nameof(hpHandler.HandleHP), RpcTarget.All, -hitDamage);

            if (GetComponent<HpHandler>().curHp < 0)
            {
                GameObject attacker = PhotonNetwork.GetPhotonView(damageHandler.viewID).gameObject;
                string attackerName = "Unknown";

                if (attacker != null)
                {
                    attackerName = attacker.name;
                }

                Debug.LogFormat("({0}) 가 {1} 에게 죽었습니다.", photonView.ViewID, attackerName);
                isProgress = true;
            }
        }
    }
}
