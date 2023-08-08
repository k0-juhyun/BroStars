using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackHandler : MonoBehaviour
{
    private AnimatorHandler animatorHandler;
    private Rigidbody rb;
    Joystick joystick;

    [Header("JoyStick")]
    public Joystick attackJoystick;
    public Joystick skillJoystick;

    [Header("Line Renderer")]
    public LineRenderer attackLR;
    public LineRenderer specialLR;

    private Transform attackLookPoint;
    private Transform skillLookPoint;
    private Transform Player;
    public Transform lineRendererStartTransform;

    private float TrailDistance = 2;
    private float launchForce = 10;
    private float launchAngle = 45f;
    private float launchHeight = 3f;


    private bool isLaunching;

    RaycastHit hit;

    private void Awake()
    {
        joystick = FindObjectOfType<Joystick>();
        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
        skillLookPoint = transform.GetChild(2).gameObject.GetComponent<Transform>();
        Player = GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();
        rb = GetComponent<Rigidbody>();
    }

    #region 공격
    public void HandleNormalAttack()
    {
        if (attackJoystick.Horizontal > 0 || attackJoystick.Horizontal < 0 || attackJoystick.Vertical > 0 || attackJoystick.Vertical < 0)
        {
            if (Mathf.Abs(attackJoystick.Horizontal) < 0.5f && Mathf.Abs(attackJoystick.Vertical) < 0.5f)
            {
                attackLookPoint.position = new Vector3(attackJoystick.Horizontal + transform.position.x, 6.1f, attackJoystick.Vertical + transform.position.z);

                animatorHandler.playerTargetAnim("Punching");

                transform.LookAt(new Vector3(attackLookPoint.position.x, 6.1f, attackLookPoint.position.z));

                transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
            }
        }
    }

    public void HandleSpecialAttack()
    {
        if (Mathf.Abs(attackJoystick.Horizontal) > 0.3f || Mathf.Abs(attackJoystick.Vertical) > 0.3f)
        {
            if (attackLR.gameObject.activeInHierarchy == false)
            {
                attackLR.gameObject.SetActive(true);
            }

            attackLookPoint.position = new Vector3(attackJoystick.Horizontal + transform.position.x, 4.1f, attackJoystick.Vertical + transform.position.z);

            transform.LookAt(new Vector3(attackLookPoint.position.x, 4.1f, attackLookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);

            attackLR.SetPosition(0, new Vector3(transform.position.x, transform.position.y, transform.position.z));

            if (Physics.Raycast(transform.position, transform.forward, out hit, TrailDistance))
            {
                attackLR.SetPosition(1, hit.point);
            }
            else
            {
                attackLR.SetPosition(1, transform.position + transform.forward * TrailDistance);
            }
        }
        else
        {
            attackLR.gameObject.SetActive(false);
        }
    }

    public void HandleUltimateAttack()
    {
        Vector3 startPos = lineRendererStartTransform.position;
        Vector3 joystickDirection = new Vector3(skillJoystick.Horizontal, 0.15f, skillJoystick.Vertical).normalized;
        Vector3 startVelocity = joystickDirection * launchForce;

        DrawTrajectory(startPos, startVelocity, 10, 0.1f);

        if (Mathf.Abs(skillJoystick.Horizontal) > 0 || Mathf.Abs(skillJoystick.Vertical) > 0)
        {
            if (!isLaunching)
            {
                isLaunching = true;

                if (specialLR.gameObject.activeInHierarchy == false)
                {
                    specialLR.gameObject.SetActive(true);
                }

                skillLookPoint.position = new Vector3(skillJoystick.Horizontal + transform.position.x, 4.1f, skillJoystick.Vertical + transform.position.z);

                transform.LookAt(new Vector3(skillJoystick.Horizontal, 0.15f, skillJoystick.Vertical));

                transform.eulerAngles = new Vector3(0, 0, 0);
                if(joystick.input == Vector2.zero)
                {
                    LaunchPlayer();
                }
            }
        }
        else
        {
            isLaunching = false;

            specialLR.gameObject.SetActive(false);
        }
    }
    #endregion


    #region 포물선 그리기
    private void DrawTrajectory(Vector3 startPos, Vector3 startVelocity, int numPoints, float timeStep)
    {
        specialLR.positionCount = numPoints;

        Vector3[] positions = new Vector3[numPoints];

        for (int i = 0; i < numPoints; i++)
        {
            float time = i * timeStep;
            Vector3 position = startPos + startVelocity * time + Physics.gravity * time * time * 0.5f;
            position.y += 0.1f;
            positions[i] = Quaternion.Euler(0f, 0f, 0f) * position;
        }

        specialLR.SetPositions(positions);
    }
    #endregion

    private void LaunchPlayer()
    {
        Vector3 direction = new Vector3(skillJoystick.Horizontal, 0.15f, skillJoystick.Vertical).normalized;

        float radianAngle = launchAngle * Mathf.Deg2Rad;
        float totalFlightTime = (2 * launchForce * Mathf.Sin(radianAngle)) / Physics.gravity.magnitude;
        float timeStep = totalFlightTime / specialLR.positionCount;

        Vector3 currentPosition = transform.position;

        for (int i = 0; i < specialLR.positionCount; i++)
        {
            float t = i * timeStep;
            float xPos = currentPosition.x + direction.x * launchForce * t;
            float yPos = currentPosition.y + direction.y * launchForce * t - 0.5f * Physics.gravity.magnitude * t * t + launchHeight;
            float zPos = currentPosition.z + direction.z * launchForce * t;

            Vector3 newPos = new Vector3(xPos, yPos, zPos);
            specialLR.SetPosition(i, newPos);
        }

        rb.velocity = direction * launchForce;
    }
}