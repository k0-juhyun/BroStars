using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveHandler : MonoBehaviour
{
    #region Component Values
    [SerializeField]
    Joystick joystick;
    AnimatorHandler animatorHandler;
    #endregion

    #region Transform Values
    Transform lookPoint;
    #endregion

    #region Boolean Values
    bool moveFlag;
    #endregion

    #region Float Values
    [Header("Info")]
    public float moveSpeed;
    #endregion

    private void Awake()
    {
        lookPoint = transform.GetChild(0).gameObject.GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();
    }

    public void HandleMovement()
    {
        if (joystick.Horizontal > 0 || joystick.Horizontal < 0 || joystick.Vertical > 0 || joystick.Vertical < 0)
        {
            lookPoint.position = new Vector3(joystick.Horizontal + transform.position.x, 6.1f, joystick.Vertical + transform.position.z);

            transform.LookAt(new Vector3(lookPoint.position.x, 6.1f, lookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);

            transform.Translate(Vector3.forward * Time.fixedDeltaTime * moveSpeed);

            animatorHandler.playTargetAnim("Walking");

            moveFlag = true;
        }

        else if (moveFlag == true)
        {
            moveFlag = false;
        }
    }
}
