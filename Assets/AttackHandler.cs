using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackHandler : MonoBehaviour
{
    #region Component Values
    [SerializeField]
    LineRenderer lineRenderer;

    [SerializeField]
    Joystick joystick;
    #endregion

    #region Transform Values
    [SerializeField]
    [Header("Look Point")]
    Transform lookPoint;
    Transform Player;
    #endregion

    [Header("Attack Distance")]
    public float AttackDistance;

    RaycastHit hit;

    private void Awake()
    {
        Player = GetComponent<Transform>();
    }

    public void HandleAttack()
    {
        if (Mathf.Abs(joystick.Horizontal) > 0.5f || Mathf.Abs(joystick.Vertical) > 0.5f)
        {
            print("22");
        }

        if (joystick.Horizontal > 0 || joystick.Horizontal < 0 || joystick.Vertical > 0 || joystick.Vertical < 0)
        {
            print("11");

            transform.LookAt(new Vector3(lookPoint.position.x, 6.1f, lookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
        }
    }
}
