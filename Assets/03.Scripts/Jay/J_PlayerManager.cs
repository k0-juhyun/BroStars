using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class J_PlayerManager : MonoBehaviour
{
    J_MoveHandler moveHandler;
    J_attackHandler attackHandler;
    HpHandler hpHandler;
    BushManager bushManager;
    //J_GunController gunController;
    // Start is called before the first frame update

    public int gem;

    void Awake()
    {
        moveHandler = GetComponent <J_MoveHandler>();
        attackHandler = GetComponent<J_attackHandler>();
        hpHandler = GetComponent<HpHandler>();
        bushManager = GetComponent <BushManager>();
        //gunController = GetComponentInChildren<J_GunController>();  
    }

    //public Transform firePos;
    //public GameObject bulletFactory;
    //public float startAngle = -40;
    //private void Update()
    //{
    //    if(Input.GetKeyDown(KeyCode.Alpha1))
    //    {
    //        firePos.transform.localEulerAngles = new Vector3(0, startAngle, 0);
    //        for (int i = 0; i < 5; i++)
    //        {
    //            GameObject bullet = Instantiate(bulletFactory);
    //            bullet.transform.position = firePos.position;
    //            bullet.transform.rotation = firePos.rotation;

    //            firePos.transform.Rotate(0, -(startAngle * 2) / 4, 0);
    //        }
            
    //    }
    //}

    // Update is called once per frame
    private void FixedUpdate()
    {
        moveHandler.HandleMovement();
        attackHandler.HandleNormalAttack();
       // hpHandler.UpdateHp();
        //hpHandler.RegenerateHpInBush();
        //gunController.ShootBullet();
    }
}
