using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class J_MoveHandler : MonoBehaviour
{
    #region Component Values
    [SerializeField]
    Joystick joystick;
    [SerializeField]
    Transform lookPoint;
    //애니메이터
    #endregion

    #region Boolean Values
    bool moveFlag;
    #endregion

    #region Float Values
    [Header("Move Speed")]
    public float moveSpeed = 5f;
    #endregion

    // Start is called before the first frame update
    void Start()
    {
        lookPoint = transform.GetChild(0).gameObject.GetComponent<Transform>();

    }

    //움직임
    public void HandleMovement()
    {
        //움직임 컨트롤러 값
        if(joystick.Horizontal > 0  || joystick.Horizontal <0 || joystick.Vertical >0 || joystick.Vertical <0)
        {
            lookPoint.position = new Vector3(joystick.Horizontal + transform.position.x, 6.1f, joystick.Vertical + transform.position.z);
            transform.LookAt(new Vector3(lookPoint.position.x, 6.1f, lookPoint.position.z)); ;
            transform.eulerAngles = new Vector3(0,transform.eulerAngles.y,0);   
            transform.Translate(Vector3.forward * moveSpeed *Time.fixedDeltaTime);
            //애니메이터

            //bool 움직임
            moveFlag = true;
        }
        else if( moveFlag == true)
        {
            moveFlag = false;
        }
        //PlayerSprite.position = new Vector3(joystick.Horizontal + transform.position.x,6.1f,joystick.Vertical + transform.position.z);

        //float h = Input.GetAxis ("Horizontal");   
        //float v = Input.GetAxis("Vertical");
        //Vector3 dir = h * Vector3.right + v * Vector3.forward;
        //Vector3 dir = new Vector3(0, h, 0);
        //dir.Normalize();

        //transform.position += dir * speed * Time.deltaTime; 



        //if(joystick.Horizontal > 0 || joystick.Horizontal < 0 || joystick.Vertical > 0 || joystick.Vertical < 0)
        //{
        //    //애니메이션 walks true


        //    //무브먼트 실행
        //    Movement = true;
        //}
        //else if (Movement == true)
        //{
        //    //애니메이션 walk,false
        //    Movement = false;
        //}

        //if (joystick.Horizontal > 0 || joystick.Horizontal < 0 || joystick.Vertical > 0 || joystick.Vertical < 0)
        //{
        //    lookPoint.position = new Vector3(joystick.Horizontal + transform.position.x, 6.1f, joystick.Vertical + transform.position.z);

        //    transform.LookAt(new Vector3(lookPoint.position.x, 6.1f, lookPoint.position.z));

        //    transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);

        //    transform.Translate(Vector3.forward * Time.fixedDeltaTime * moveSpeed);

        //    animatorHandler.playerTargetAnim("Walking");

        //    moveFlag = true;
        //}

        //else if (moveFlag == true)
        //{
        //    moveFlag = false;
        //}


    }
}
