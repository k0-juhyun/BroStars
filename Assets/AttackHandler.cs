using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AttackHandler : MonoBehaviour
{
    public Joystick joystick;
    AnimatorHandler animatorHandler;
    Rigidbody rb;

    private Transform lookPoint;
    private Transform Player;
    public Transform[] Fists;

    public float AttackDistance;

    private void Awake()
    {
        lookPoint = transform.GetChild(0).gameObject.GetComponent<Transform>();
        Player = GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();
        rb = GetComponent<Rigidbody>();
    }

    public void HandleNormalAttack()
    {
        if (joystick.Horizontal > 0 || joystick.Horizontal < 0 || joystick.Vertical > 0 || joystick.Vertical < 0)
        {
            animatorHandler.playerTargetAnim("Punching");

            transform.LookAt(new Vector3(lookPoint.position.x, 6.1f, lookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
        }
    }

    public void HandleSpecialAttack()
    {
        if (Mathf.Abs(joystick.Horizontal) > 0.5f || Mathf.Abs(joystick.Vertical) > 0.5f)
        {
            
        }
    }
}
