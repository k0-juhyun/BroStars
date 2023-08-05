using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    MoveHandler moveHandler;
    AttackHandler attackHandler;

    private void Awake()
    {
        moveHandler = GetComponent<MoveHandler>();
        attackHandler = GetComponent<AttackHandler>();
    }

    private void FixedUpdate()
    {
        moveHandler.HandleMovement();
        attackHandler.HandleAttack();
    }
}
