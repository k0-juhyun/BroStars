using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class J_PlayerManager : MonoBehaviour
{
    J_MoveHandler moveHandler;
    J_attackHandler attackHandler;
    J_GunController gunController;
    // Start is called before the first frame update
    void Awake()
    {
        moveHandler = GetComponent <J_MoveHandler>();
        attackHandler = GetComponent<J_attackHandler>();
        gunController = GetComponentInChildren<J_GunController>();  
    }

    // Update is called once per frame
    private void FixedUpdate()
    {
        moveHandler.HandleMovement();
        attackHandler.HandleNormalAttack();
        gunController.ShootBullet();
    }
}
