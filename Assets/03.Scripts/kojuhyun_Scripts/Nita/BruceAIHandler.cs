using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BruceAIHandler : MonoBehaviour
{
    AnimatorHandler animatorHandler;
    HpHandler hpHandler;

    public float moveSpeed = 5f;

    private Transform target;

    private bool isDie;

    private void Awake()
    {
        animatorHandler = GetComponent<AnimatorHandler>();
        hpHandler = GetComponent<HpHandler>();

        StartCoroutine(HandleAttack(3));
    }

    private void FixedUpdate()
    {
        FindClosestPlayer();
        ChaseTarget();
    }

    private void Update()
    {
        hpHandler.UpdateHp();
        if (hpHandler.curHp <= 0)
        {
            Destroy(this);
        }
    }

    private void FindClosestPlayer()
    {
        GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
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
            transform.LookAt(target.position);
            Vector3 directionToTarget = (target.position - transform.position).normalized;
            transform.position += directionToTarget * moveSpeed * Time.deltaTime;
        }
    }

    IEnumerator HandleAttack(float period)
    {
        while (!isDie)
        {
            yield return new WaitForSeconds(period);

            animatorHandler.playTargetAnim("Normal");
        }
    }
}
