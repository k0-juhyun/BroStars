using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    MoveHandler moveHandler;
    AttackHandler attackHandler;
    PlayerStats playerStats;
    CameraHandler cameraHandler;

    private void Awake()
    {
        moveHandler = GetComponent<MoveHandler>();
        attackHandler = GetComponent<AttackHandler>();
        playerStats = GetComponent<PlayerStats>();
        cameraHandler = FindObjectOfType<CameraHandler>();
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
            print("HitCheck");
        }
    }

    private void LateUpdate()
    {

    }
}
