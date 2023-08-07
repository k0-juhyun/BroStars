using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shellyFire : MonoBehaviour
{

    //public GameObject bFactory;
    //public Transform firePos;

    [SerializeField]
    LineRenderer lr;

    [SerializeField]
    bl_Joystick attackJoystick;

    [SerializeField]
    Transform AttackLookAtPoint;

    [SerializeField]
    public float TrailDistance = 1;

    [SerializeField]
    Transform Player;

    RaycastHit hit;

    bool isShoot;

    [SerializeField]
    Transform Bullet;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        ////fire를 하면 
        //if(Input.GetButtonDown("Fire1"))
        //{
        //    //총알이 나옴
        //    GameObject bullet = Instantiate(bFactory);
        //    bullet.transform.position = firePos.transform.position;
        //    bullet.transform.rotation = firePos.transform.rotation;
        //}

        //총알의 사거리만큼 총알이 날아가도록 하고싶다
        if(Mathf.Abs(attackJoystick.Horizontal) > 0.5f || Mathf.Abs(attackJoystick.Horizontal)> 0.5f)
        {
            if(lr.gameObject.activeInHierarchy == false)
            {
                lr.gameObject.SetActive(true);
            }
            transform.position = new Vector3(Player.position.x, -1.54f, Player.position.z);

            AttackLookAtPoint.position = new Vector3(attackJoystick.Horizontal + transform.position.x, -1.54f, attackJoystick.Vertical + transform.position.z);

            transform.LookAt(new Vector3(AttackLookAtPoint.position.x, 0, AttackLookAtPoint.position.z));

            transform.eulerAngles = new Vector3(90, transform.eulerAngles.y, 0);
             
            lr.SetPosition(0,transform.position);
            if (Physics.Raycast(transform.position, transform.forward, TrailDistance))
            {
                lr.SetPosition(1, hit.point); 
            }
            else
            {
                lr.SetPosition(1, transform.position + transform.forward * TrailDistance);
            }
            if(isShoot == false)
            {
                isShoot = true;
            }
        }
        else if(isShoot && Input.GetMouseButtonUp(0))
        {
            Instantiate(Bullet, transform.position, transform.rotation);
            Debug.Log("isShoot");
            isShoot = false;
        }
        else
        {
            lr.gameObject.SetActive(false);
        }
    }
}
