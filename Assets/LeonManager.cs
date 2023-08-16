using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeonManager : MonoBehaviour
{
    MoveHandler moveHandler;
    HpHandler hpHandler;

    private void Awake()
    {
        moveHandler = GetComponent<MoveHandler>();
        hpHandler = GetComponent<HpHandler>();
    }

    private void FixedUpdate()
    {
        moveHandler.HandleMovement();

        hpHandler.UpdateHp();
        hpHandler.RegenerateHpInBush();
    }
}
