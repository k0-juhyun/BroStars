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
            attackLR.gameObject.SetActive(true);

            float startAngle = -fanAngle;
            float endAngle = fanAngle;

            Vector3[] fanPoints = new Vector3[fanSegments + 2];
            fanPoints[0] = lineRendererStartTransform.position;

            for (int i = 1; i <= fanSegments + 1; i++)
            {
                float t = (float)(i - 1) / fanSegments;
                float currentAngle = Mathf.Lerp(startAngle, endAngle, t);
                Vector3 fanPoint = new Vector3(Mathf.Sin(currentAngle * Mathf.Deg2Rad), 0, Mathf.Cos(currentAngle * Mathf.Deg2Rad)) * fanRadius;
                fanPoints[i] = lineRendererStartTransform.position + new Vector3(fanPoint.x, 0, fanPoint.z);
            }

            attackLR.positionCount = fanPoints.Length;
            attackLR.SetPositions(fanPoints);
        }
        else
        {
            attackLR.gameObject.SetActive(false);
        }
    }
}

