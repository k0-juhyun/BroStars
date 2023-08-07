using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class J_attackHandler : MonoBehaviour
{
    #region Componet Values
    [SerializeField]
    Joystick joystick;

    //애니메이터
    #endregion

    #region Transform Values
    [SerializeField]
    [Header("Look Point")]
    Transform lookPoint;
    Transform player;
    #endregion

    #region Float Values
    public float attackDistance;
    #endregion

    
    // Start is called before the first frame update
    void Start()
    {
        player = GetComponent<Transform>();
    }

    //공격
    public void HandleAttack()
    {
        if(Mathf.Abs(joystick.Horizontal) > 0.5f || Mathf.Abs(joystick.Vertical)> 0.5f)
        {
            print("1111");
        }
        if(joystick.Horizontal > 0 || joystick.Horizontal < 0 || joystick.Vertical >0 || joystick.Vertical < 0)
        {
            //애니메이션

            //이동
            transform.LookAt(new Vector3(lookPoint.position.x, 6.1f, lookPoint.position.z));

            //회전
            transform.eulerAngles = new Vector3(0,transform.eulerAngles.y, 0);

        }

        if(joystick.Horizontal != 0  || joystick.Vertical != 0)
        {
            //캐릭터
        }

    }
}
