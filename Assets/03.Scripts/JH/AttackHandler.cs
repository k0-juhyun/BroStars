using UnityEngine;

public class AttackHandler : MonoBehaviour
{
    public Joystick attackJoystick;
    public Joystick skillJoystick;
    private AnimatorHandler animatorHandler;
    public LineRenderer LR;

    private Transform attackLookPoint;
    private Transform rayTransform;
    private Transform Player;

    public float TrailDistance;

    RaycastHit hit;

    public Vector3[] Points;

    private void Awake()
    {
        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
        Player = GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();

        Points = new Vector3[9];
    }

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
            if (LR.gameObject.activeInHierarchy == false)
            {
                LR.gameObject.SetActive(true);
            }

            attackLookPoint.position = new Vector3(attackJoystick.Horizontal + transform.position.x, 6.1f, attackJoystick.Vertical + transform.position.z);

            transform.LookAt(new Vector3(attackLookPoint.position.x, 6.1f, attackLookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);

            LR.SetPosition(0, new Vector3(transform.position.x, transform.position.y + 1f, transform.position.z));

            if (Physics.Raycast(transform.position, transform.forward, out hit, TrailDistance))
            {
                LR.SetPosition(1, hit.point);
            }
            else
            {
                LR.SetPosition(1, transform.position + transform.forward * TrailDistance);
            }
        }
        else
        {
            LR.gameObject.SetActive(false);
        }
    }

    public void HandleUltimateAttack()
    {
        if (Mathf.Abs(skillJoystick.Horizontal) > 0.5f || Mathf.Abs(skillJoystick.Vertical) > 0.5f)
        {
            if (LR.gameObject.activeInHierarchy == false)
            {
                LR.gameObject.SetActive(true);
            }

            attackLookPoint.position = new Vector3(skillJoystick.Horizontal + transform.position.x, 6.1f, skillJoystick.Vertical + transform.position.z);

            transform.LookAt(new Vector3(attackLookPoint.position.x, 6.1f, attackLookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);

            LR.SetPosition(0, new Vector3(transform.position.x, transform.position.y + 1f, transform.position.z));

            for (int i = 1; i < 10; i++)
            {
                LR.SetPosition(i, new Vector3(LR.GetPosition(i - 1).x + skillJoystick.Horizontal, 0, LR.GetPosition(i - 1).z + skillJoystick.Vertical));
            }
        }
        else
        {
            LR.gameObject.SetActive(false);
        }
    }
}
