using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnBruce : MonoBehaviour
{
    public GameObject Bruce;
    public LayerMask groundLayer;

    private void Update()
    {
        Ray ray = new Ray(transform.position, Vector3.down);
        float maxDistance = 1.0f; 

        if (Physics.Raycast(ray, maxDistance, groundLayer))
        {
            Bruce.SetActive(true);
            Bruce.transform.SetParent(null);
            Destroy(this.gameObject); 
        }
    }
}
