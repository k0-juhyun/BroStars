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
    public LineRenderer specialLR;

    [Header("LineRenderer Transform")]
    private Transform attackLookPoint;
    private Transform skillLookPoint;
    private Transform Player;
    public Transform lineRendererStartTransform;
    public Transform SpawnPos;

    [Header("Normal Attack Event")]
    public Transform[] RightHand;
    public GameObject Shuriken;
    public GameObject Ulti;

    private float TrailDistance = 4f;
    public float meshResolution;
    private float launchForce = 10;

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

    public void HandleUltimateAttack()
    {
        Vector3 joystickDirection = new Vector3(skillJoystick.Horizontal, 0.5f, skillJoystick.Vertical);
        Vector3 startVelocity = joystickDirection * launchForce;

        if (Mathf.Abs(skillJoystick.Horizontal) > 0 || Mathf.Abs(skillJoystick.Vertical) > 0)
        {
            if (!specialLR.gameObject.activeInHierarchy)
            {
                specialLR.gameObject.SetActive(true);
            }
            DrawTrajectory(startVelocity, 10, 0.1f);

            skillLookPoint.position = new Vector3(skillJoystick.Horizontal + transform.position.x, 4.11f, skillJoystick.Vertical + transform.position.z);

            transform.LookAt(new Vector3(skillLookPoint.position.x, 4.11f, skillLookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
        }
        else
        {
            specialLR.gameObject.SetActive(false);
        }
    }

    public void LaunchBear(float h, float v)
    {
        Vector3 joystickDirection = new Vector3(h, 0.5f, v);
        Vector3 startVelocity = joystickDirection * launchForce;

        GameObject Ultimate = Instantiate(Ulti, SpawnPos.transform.position, Quaternion.identity);
        Ultimate.GetComponent<Rigidbody>().velocity = startVelocity;
    }

    #region 포물선 그리기
    private void DrawTrajectory(Vector3 startVelocity, int numPoints, float timeStep)
    {
        specialLR.positionCount = numPoints;

        for (int i = 0; i < numPoints; i++)
        {
            float time = i * timeStep;
            Vector3 position = startVelocity * time + Physics.gravity * time * time * 0.5f;

            position += transform.position;
            specialLR.SetPosition(i, position);
        }
    }

    #endregion
}

