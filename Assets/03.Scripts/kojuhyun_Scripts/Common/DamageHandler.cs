using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class DamageHandler : MonoBehaviour
{
    public float damage;
    public PhotonView attacker;

    [PunRPC]
    public void SetAttacker(PhotonView attackerView)
    {
        attacker = attackerView;
    }
}
