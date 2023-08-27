using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BruceAIHandler : MonoBehaviourPun
{
    AnimatorHandler animatorHandler;
    HpHandler hpHandler;
    DamageHandler damageHandler;

    public float moveSpeed = 5f;

    private Transform target;

    private bool isDie;

    public int teamIdx;

    public GameObject allyCanvas;
    public GameObject enemyCanvas;

    private void Awake()
    {
        animatorHandler = GetComponent<AnimatorHandler>();
        hpHandler = GetComponent<HpHandler>();
        damageHandler = GetComponent<DamageHandler>();

        StartCoroutine(HandleAttack(3));
    }
    private void Start()
    {
        damageHandler.damage = hpHandler.AttackDamage;
        if(teamIdx == GameManager.instance.myTeamIdx)
        {
            allyCanvas.SetActive(true);
            enemyCanvas.SetActive(false);
        }
        else
        {
            allyCanvas.SetActive(false);
            enemyCanvas.SetActive(true);
        }
    }

    private void FixedUpdate()
    {
        FindClosestPlayer();
        ChaseTarget();
    }

    private void Update()
    {
        photonView.RPC(nameof(hpHandler.UpdateHp), RpcTarget.All);
    }

    private void FindClosestPlayer()
    {
        GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
        float shortestDistance = Mathf.Infinity;
        GameObject closestPlayer = null;

        foreach (GameObject player in players)
        {
            if (player.layer != this.gameObject.layer)
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
