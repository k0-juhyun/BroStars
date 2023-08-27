using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class SpawnBruce : MonoBehaviourPun
{
    public GameObject Bruce;
    public LayerMask groundLayer;
    public int _teamIdx;


    SFxHandler sFxHandler;

    HpHandler hpHandler;

    private void Awake()
    {
        hpHandler = GetComponentInChildren<HpHandler>();
        sFxHandler = FindObjectOfType<SFxHandler>();
    }

    private void Update()
    {
        Ray ray = new Ray(transform.position, Vector3.down);
        float maxDistance = 1.0f; 

        if (Physics.Raycast(ray, maxDistance, groundLayer))
        {
            Bruce.SetActive(true);
            sFxHandler.playSound("SpawnBruce");
            Bruce.layer = this.gameObject.layer;
            Bruce.transform.SetParent(null);
            Bruce.GetComponent<BruceAIHandler>().teamIdx = _teamIdx;
            Destroy(this.gameObject); 
        }
    }
}
