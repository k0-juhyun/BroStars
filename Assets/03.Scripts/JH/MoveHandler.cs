using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveHandler : MonoBehaviour
{

    #region Component Values
    [SerializeField]
    [Header("Look Point")]
    Transform lookPoint;

    [SerializeField]
    Joystick joystick;

    AnimatorHandler animatorHandler;
    #endregion

    #region Boolean Values
    bool moveFlag;
    #endregion

    #region Float Values
    [Header("Move Speed")]
    public float moveSpeed;
    #endregion

    private void Awake()
    {
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

            animatorHandler.playerTargetAnim("Walking");

            moveFlag = true;
        }

        else if (moveFlag == true)
        {
            moveFlag = false;
        }
    }
}
