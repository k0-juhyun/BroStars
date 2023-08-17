using System.Collections;
using System.Collections.Generic;
using UnityEditor;
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

    [Header("Normal Attack Event")]
    public Transform[] RightHand;
    public GameObject Shuriken;

    private float TrailDistance = 4f;
    public float meshResolution;
    public LayerMask groundLayer;

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

            Vector3 directionToLookPoint = (attackLookPoint.position - transform.position).normalized;

            float rotationAngle = Mathf.Atan2(directionToLookPoint.x, directionToLookPoint.z) * Mathf.Rad2Deg;

            transform.rotation = Quaternion.Euler(0, rotationAngle, 0);
        }
        else
        {
            attackLR.gameObject.SetActive(false);
        }
    }

    public void HandleShurikenEvent()
    {
        StartCoroutine(HandleShuriken());
    }

    IEnumerator HandleShuriken()
    {
        GameObject shuriken = Instantiate(Shuriken, RightHand[0].transform.position, RightHand[0].transform.rotation);
        yield return new WaitForSeconds(0.03f);
        Instantiate(Shuriken, RightHand[1].transform.position, RightHand[1].transform.rotation);
        yield return new WaitForSeconds(0.03f);
        Instantiate(Shuriken, RightHand[2].transform.position, RightHand[2].transform.rotation);
        yield return new WaitForSeconds(0.03f);
        Instantiate(Shuriken, RightHand[3].transform.position, RightHand[3].transform.rotation);
    }

    private void DrawFanShape()
    {

    }
}

