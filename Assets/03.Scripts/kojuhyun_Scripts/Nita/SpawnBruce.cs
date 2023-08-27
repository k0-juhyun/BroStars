using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class SpawnBruce : MonoBehaviourPun
{
    public GameObject Bruce;
    public LayerMask groundLayer;
    HpHandler hpHandler;
    public int _teamIdx;

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
            Bruce.layer = this.gameObject.layer;
            Bruce.transform.SetParent(null);
            Bruce.GetComponent<BruceAIHandler>().teamIdx = _teamIdx;
            Destroy(this.gameObject); 
        }
    }
}
