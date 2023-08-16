using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShellyManager : MonoBehaviour
{
    J_MoveHandler moveHandler;
    J_attackHandler attackHandler;
    HpHandler hpHandler;
    BushManager bushManager;
    // Start is called before the first frame update

    public int gem;

    void Awake()
    {
        moveHandler = GetComponent <J_MoveHandler>();
        attackHandler = GetComponent<J_attackHandler>();
        hpHandler = GetComponent<HpHandler>();
        bushManager = GetComponent <BushManager>();
       
    }
    // Update is called once per frame
    private void FixedUpdate()
    {
        moveHandler.HandleMovement();
        attackHandler.HandleNormalAttack();
        hpHandler.UpdateHp();
        hpHandler.RegenerateHpInBush();
    }
}
