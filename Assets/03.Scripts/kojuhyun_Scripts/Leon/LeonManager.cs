using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeonManager : MonoBehaviour
{
    MoveHandler moveHandler;
    HpHandler hpHandler;
    LeonAttackHandler leonAttackHandler;

    private void Awake()
    {
        moveHandler = GetComponent<MoveHandler>();
        hpHandler = GetComponent<HpHandler>();
        leonAttackHandler = GetComponent<LeonAttackHandler>();
    }

    private void FixedUpdate()
    {
        moveHandler.HandleMovement();

        leonAttackHandler.HandleNormalAttack();
        leonAttackHandler.HandleUltimateAttack();

        hpHandler.UpdateHp();
        hpHandler.RegenerateHpInBush();
    }
}
