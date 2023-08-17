using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeonAttackHandler : MonoBehaviour
{
    private AnimatorHandler animatorHandler;
    private Rigidbody rb;

    [Header("JoyStick")]
    public Joystick attackJoystick;
    public Joystick skillJoystick;

    [Header("LineRenderer Object")]
    public LineRenderer attackLR;

    [Header("LineRenderer Transform")]
    private Transform attackLookPoint;
    private Transform skillLookPoint;
    private Transform Player;
    public Transform lineRendererStartTransform;

    private float TrailDistance = 4f;
    public int fanSegments = 200;
    public float fanAngle = 30.0f; 
    public float fanRadius = 5.0f;
    RaycastHit hit;

    private void Awake()
    {
        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
        skillLookPoint = transform.GetChild(2).gameObject.GetComponent<Transform>();
        Player = GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();
        rb = GetComponent<Rigidbody>();
    }

    public void HandleNormalAttack()
    {
        if (Mathf.Abs(attackJoystick.Horizontal) > 0.3f || Mathf.Abs(attackJoystick.Vertical) > 0.3f)
        {
            attackLookPoint.position = new Vector3(attackJoystick.Horizontal + transform.position.x, 4.11f, attackJoystick.Vertical + transform.position.z);

            attackLR.gameObject.SetActive(true);

            transform.LookAt(new Vector3(attackLookPoint.position.x, 5.11f, attackLookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
        }
        else
        {
            attackLR.gameObject.SetActive(false);
        }
    }
}

