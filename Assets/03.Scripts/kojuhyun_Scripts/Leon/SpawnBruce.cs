using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class SpawnBruce : MonoBehaviourPun
{
    public GameObject Bruce;
    public LayerMask groundLayer;
    HpHandler hpHandler;

    private void Awake()
    {
        hpHandler = GetComponentInChildren<HpHandler>();
    }

    private void Update()
    {
        Ray ray = new Ray(transform.position, Vector3.down);
        float maxDistance = 1.0f; 

        if (Physics.Raycast(ray, maxDistance, groundLayer))
        {
            Bruce.SetActive(true);
            Bruce.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
            Bruce.transform.SetParent(null);
            Destroy(this.gameObject); 
        }
    }
}
