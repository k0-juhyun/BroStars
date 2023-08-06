using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShellyMove : MonoBehaviour
{
    [SerializeField]
    public float speed = 5f;
    [SerializeField]
    bl_Joystick joystick;

    [SerializeField]
    Transform PlayerSprite;


    bool Movement;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        PlayerSprite.position = new Vector3(joystick.Horizontal + transform.position.x,-1.54f,joystick.Vertical + transform.position.z);

        transform.LookAt(new Vector3(PlayerSprite.position.x, 0, PlayerSprite.position.z));
        //float h = Input.GetAxis ("Horizontal");   
        //float v = Input.GetAxis("Vertical");
        //Vector3 dir = h * Vector3.right + v * Vector3.forward;
        //Vector3 dir = new Vector3(0, h, 0);
        //dir.Normalize();

        //transform.position += dir * speed * Time.deltaTime; 
        transform.eulerAngles = new Vector3(0,transform.eulerAngles.y,0);   

        if(joystick.Horizontal > 0 || joystick.Horizontal < 0 || joystick.Vertical >0 || joystick.Vertical < 0)
        {
            transform.Translate(Vector3.forward * Time.deltaTime);

            //애니메이션 walks true


            //무브먼트 실행
            Movement = true;
        }
        else if (Movement == true)
        {
            //애니메이션 walk,false
            Movement = false;
        }



    }
}
