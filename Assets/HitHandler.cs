
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Unity.VisualScripting;

public class HitHandler : MonoBehaviourPun
{
    LogHandler logHandler;
    HpHandler hpHandler;

    private void Awake()
    {
        logHandler = FindObjectOfType<LogHandler>();
        hpHandler = GetComponent<HpHandler>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.GetComponent<DamageHandler>() != null 
            && collision.gameObject.GetComponent<PhotonView>().ViewID != GetComponent<PhotonView>().ViewID) 
        {
            float hitDamage = collision.gameObject.GetComponent<DamageHandler>().damage;
            int victimViewID = collision.gameObject.GetComponent<PhotonView>().ViewID;
            int killerViewID = GetComponent<PhotonView>().ViewID;

            photonView.RPC(nameof(hpHandler.HandleHP), RpcTarget.All, -hitDamage);

            logHandler.AddKillLog(killerViewID, victimViewID, hitDamage);

            Debug.Log(this.gameObject.name + "가 피해를 입었습니다: " + hitDamage);
        }
    }
}
