using UnityEngine;

public class AttackHandler : MonoBehaviour
{
    private AnimatorHandler animatorHandler;
    private Rigidbody rb;
    public Joystick attackJoystick;
    public Joystick skillJoystick;

    public LineRenderer attackLR;
    public LineRenderer specialLR;

    private Transform attackLookPoint;
    private Transform skillLookPoint;
    private Transform Player;

    public float TrailDistance;
    public float launchForce = 10f;

    RaycastHit hit;

    private void Awake()
    {
        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
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
    #endregion

    public void HandleUltimateAttack()
    {
        Vector3 startPos = new Vector3(transform.position.x,transform.position.y, transform.position.z+2.4f);
        Vector3 joystickDirection = new Vector3(skillJoystick.Horizontal, 0f, skillJoystick.Vertical).normalized;
        Vector3 startVelocity = joystickDirection * launchForce;

        DrawTrajectory(startPos, startVelocity, 10, 0.1f);

        if (Mathf.Abs(skillJoystick.Horizontal) > 0.1f || Mathf.Abs(skillJoystick.Vertical) > 0.1f)
        {

            if (specialLR.gameObject.activeInHierarchy == false)
            {
                specialLR.gameObject.SetActive(true);
            }

            skillLookPoint.position = new Vector3(skillJoystick.Horizontal + transform.position.x, 4.1f, skillJoystick.Vertical + transform.position.z);

            transform.LookAt(new Vector3(skillLookPoint.position.x, 4.1f, skillLookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);

            LaunchPlayer(startVelocity);
        }
        else
        {
            specialLR.gameObject.SetActive(false);
        }
    }

    #region 포물선 그리기
    private void DrawTrajectory(Vector3 startPos, Vector3 startVelocity, int numPoints, float timeStep)
    {
        specialLR.positionCount = numPoints;

        Vector3[] positions = new Vector3[numPoints];

        for (int i = 0; i < numPoints; i++)
        {
            float time = i * timeStep;
            Vector3 position = startPos + startVelocity * time + Physics.gravity * time * time * 0.5f;
            position.y += 1f;
            positions[i] = Quaternion.Euler(-30f, 0f, 0f) * position;
        }

        specialLR.SetPositions(positions);
    }
    #endregion

    private void LaunchPlayer(Vector3 startVelocity)
    {
        rb.AddForce(startVelocity, ForceMode.VelocityChange);
    }
}