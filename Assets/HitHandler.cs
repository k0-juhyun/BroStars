
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
            photonView.RPC(nameof(hpHandler.HandleHP), RpcTarget.All, -hitDamage);

            if(GetComponent<HpHandler>().curHp <0)
            {
                int killerViewID = collision.gameObject.GetComponent<DamageHandler>().viewID;
                int victimViewID = GetComponent<PhotonView>().ViewID;
                int killCount = 1;
                logHandler.AddKillLog(killerViewID, victimViewID, killCount);
            }

            Debug.Log(this.gameObject.name + "가 피해를 입었습니다: " + hitDamage);
        }
    }
}
