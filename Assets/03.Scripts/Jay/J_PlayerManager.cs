using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class J_PlayerManager : MonoBehaviour
{
    J_MoveHandler moveHandler;
    J_attackHandler attackHandler;
    // Start is called before the first frame update
    void Awake()
    {
        moveHandler = GetComponent <J_MoveHandler>();
        attackHandler = GetComponent<J_attackHandler>();
    }

    // Update is called once per frame
    private void FixedUpdate()
    {
        moveHandler.HandleMovement();
        attackHandler.HandleNormalAttack();
    }
}
