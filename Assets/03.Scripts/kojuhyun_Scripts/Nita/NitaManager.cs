using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NitaManager : MonoBehaviour
{
    MoveHandler moveHandler;
    HpHandler hpHandler;
    NitaAttackHandler nitaAttackHandler;

    private void Awake()
    {
        moveHandler = GetComponent<MoveHandler>();
        hpHandler = GetComponent<HpHandler>();
        nitaAttackHandler = GetComponent<NitaAttackHandler>();
    }

    private void FixedUpdate()
    {
        moveHandler.HandleMovement();   

        nitaAttackHandler.HandleNormalAttack();

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
