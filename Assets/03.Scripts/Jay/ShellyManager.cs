using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShellyManager : MonoBehaviour
{
    MoveHandler moveHandler;
    //J_attackHandler attackHandler;
    ShellyAttackHandler attackHandler;
    HpHandler hpHandler;
    BushManager bushManager;

    // Start is called before the first frame update

    public int gem;

    void Awake()
    {
        moveHandler = GetComponent <MoveHandler>();
       attackHandler = GetComponent<ShellyAttackHandler>();

        hpHandler = GetComponent<HpHandler>();
        bushManager = GetComponent <BushManager>();
       
    }
    // Update is called once per frame
    private void FixedUpdate()
    {
        moveHandler.HandleMovement();
        attackHandler.HandleNormalAttack();
        //attackHandler.HandleUltimateAttack();
        //attackHandler.UpdateFire();
        hpHandler.UpdateHp();
        hpHandler.RegenerateHpInBush();
    }
}
