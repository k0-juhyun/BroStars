using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    MoveHandler moveHandler;
    AttackHandler attackHandler;
    PlayerStats playerStats;

    private void Awake()
    {
        moveHandler = GetComponent<MoveHandler>();
        attackHandler = GetComponent<AttackHandler>();
        playerStats = GetComponent<PlayerStats>();
    }

    private void FixedUpdate()
    {
        moveHandler.HandleMovement();
        attackHandler.HandleNormalAttack();
        attackHandler.HandleSpecialAttack();
        attackHandler.HandleUltimateAttack();
    }

    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.H))
        {
            playerStats.HandleHP(-10);
        }
    }
}
