using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class DamageHandler : MonoBehaviour
{
    public float damage;
    private PhotonView attacker;
    public int attackviewID;

    public void SetAttackerInfo(PhotonView attackerView)
    {
        this.attacker = attackerView;
        attackviewID = attackerView.ViewID;
    }

    [PunRPC]
    public void SetAttacker(PhotonView attackerView)
    {
        attacker = attackerView;
    }


}
