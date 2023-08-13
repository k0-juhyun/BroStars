using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ElprimoManager : MonoBehaviour
{
    MoveHandler moveHandler;
    ElprimoAttackHandler attackHandler;
    HpHandler hpHandler;
    BushManager bushManager;

    private void Awake()
    {
        moveHandler = GetComponent<MoveHandler>();
        attackHandler = GetComponent<ElprimoAttackHandler>();
        hpHandler = GetComponent<HpHandler>();
        bushManager = GetComponent<BushManager>();
    }

    private void FixedUpdate()
    {
        moveHandler.HandleMovement();

        attackHandler.HandleNormalAttack();
        attackHandler.HandleUltimateAttack();

        hpHandler.UpdateHp();
        hpHandler.RegenerateHpInBush();
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.H))
        {
            hpHandler.HandleHP(-100);
        }
    }
}
