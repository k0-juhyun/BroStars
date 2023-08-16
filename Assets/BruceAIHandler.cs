using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BruceAIHandler : MonoBehaviour
{
    private string playerTag = "Player";
    public float moveSpeed = 5f;

    private Transform target;
    private Rigidbody rb;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void FixedUpdate()
    {
        FindClosestPlayer();
        ChaseTarget();
    }

    private void FindClosestPlayer()
    {
        GameObject[] players = GameObject.FindGameObjectsWithTag(playerTag);
        float shortestDistance = Mathf.Infinity;
        GameObject closestPlayer = null;

        foreach (GameObject player in players)
        {
            if (player.name != "Nita")
            {
                float distanceToPlayer = Vector3.Distance(transform.position, player.transform.position);
                if (distanceToPlayer < shortestDistance)
                {
                    shortestDistance = distanceToPlayer;
                    closestPlayer = player;
                }
            }
        }

        if (closestPlayer != null)
        {
            target = closestPlayer.transform;
        }
    }

    private void ChaseTarget()
    {
        if (target != null)
        {
            print(target.name);
            transform.LookAt(target.position);
            Vector3 directionToTarget = (target.position - transform.position).normalized;
            transform.position += directionToTarget * moveSpeed * Time.deltaTime;
        }
    }
}
