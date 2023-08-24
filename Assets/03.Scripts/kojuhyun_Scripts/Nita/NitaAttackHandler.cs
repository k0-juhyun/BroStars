using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class NitaAttackHandler : MonoBehaviourPun
{
    [SerializeField]
    private bool isReverse;

    TargetHandler targetHandler;
    NitaManager nitaManager;
    HpHandler hpHandler;

    private AnimatorHandler animatorHandler;
    private Rigidbody rb;

    [Header("JoyStick")]
    public Joystick attackJoystick;
    public Joystick skillJoystick;

    [Header("LineRenderer")]
    public LineRenderer attackLR;
    public LineRenderer specialLR;

    [Header("Transform")]
    private Transform attackLookPoint;
    private Transform skillLookPoint;
    private Transform Player;
    public Transform lineRendererStartTransform;
    public Transform normalAttackTransform;
    public Transform SpawnPos;

    [Header("GameObject")]
    public GameObject Bruce;
    public GameObject nitaNormal;
    private float TrailDistance = 4f;
    private float launchForce = 10;

    private int bruceIndex;

    RaycastHit hit;

    private void Awake()
    {
        if (photonView.IsMine == false)
        {
            this.enabled = false;
        }
        hpHandler = GetComponent<HpHandler>();
        targetHandler = GetComponentInParent<TargetHandler>();
        nitaManager = GetComponent<NitaManager>();
        attackLookPoint = transform.GetChild(1).GetComponent<Transform>();
        skillLookPoint = transform.GetChild(2).GetComponent<Transform>();
        Player = targetHandler.Target.GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();
        rb = GetComponent<Rigidbody>();
    }

    #region 공격
    public void HandleNormalAttack()
    {
        if (Mathf.Abs(attackJoystick.Horizontal) > 0.3f || Mathf.Abs(attackJoystick.Vertical) > 0.3f)
        {
            Vector3 Direction = new Vector3(attackJoystick.Horizontal, 0, attackJoystick.Vertical);

            if (isReverse)
            {
                Direction = new Vector3(-Direction.x, Direction.y, -Direction.z);
            }

            if (!attackLR.gameObject.activeInHierarchy)
            {
                attackLR.gameObject.SetActive(true);
            }

            attackLookPoint.position = new Vector3(Direction.x + transform.position.x, 4.11f, Direction.z + transform.position.z);

            transform.LookAt(new Vector3(attackLookPoint.position.x, 5.11f, attackLookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);

            attackLR.SetPosition(0, new Vector3(transform.position.x, 4.2f, transform.position.z));

            Vector3 rayStartPos = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);

            if (Physics.Raycast(rayStartPos, transform.forward, out hit, TrailDistance))
            {
                attackLR.SetPosition(1, hit.point);
            }
            else
            {
                Vector3 yUp = new Vector3(0, 0.1f, 0);
                attackLR.SetPosition(1, transform.position + transform.forward * TrailDistance + yUp);
            }
        }
        else
        {
            attackLR.gameObject.SetActive(false);
        }
    }
    public void HandleUltimateAttack()
    {
        Vector3 joystickDirection = new Vector3(skillJoystick.Horizontal, 0.5f, skillJoystick.Vertical);

        if (isReverse)
        {
            joystickDirection = new Vector3(-joystickDirection.x, joystickDirection.y, -joystickDirection.z);
        }

        Vector3 startVelocity = joystickDirection * launchForce;

        if (Mathf.Abs(skillJoystick.Horizontal) > 0 || Mathf.Abs(skillJoystick.Vertical) > 0)
        {
            if (!specialLR.gameObject.activeInHierarchy)
            {
                specialLR.gameObject.SetActive(true);
            }
            DrawTrajectory(startVelocity, 10, 0.1f);

            skillLookPoint.position = new Vector3(joystickDirection.x + transform.position.x, 4.11f, joystickDirection.z + transform.position.z);

            transform.LookAt(new Vector3(skillLookPoint.position.x, 4.11f, skillLookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
        }
        else
        {
            specialLR.gameObject.SetActive(false);
        }
    }

    #endregion

    #region 곰 던지기
    [PunRPC]
    public void LaunchBear(float h, float v)
    {
        bruceIndex = (targetHandler.teamIdx == 1) ? targetHandler.teamIdx : 2;
        if (PhotonNetwork.IsMasterClient)
        {
            Vector3 joystickDirection = new Vector3(h, 0.5f, v);
            Vector3 startVelocity = joystickDirection * launchForce;

            GameObject bruceSpawn = PhotonNetwork.Instantiate("BruceSpawn", SpawnPos.transform.position, Quaternion.identity);
            bruceSpawn.GetComponent<Rigidbody>().velocity = startVelocity;
            bruceSpawn.layer = (bruceIndex == 1) ? LayerMask.NameToLayer("myTeam") : LayerMask.NameToLayer("enemyTeam");
        }
    }

    [PunRPC]
    public void LaunchBearRPC(float h, float v)
    {
        LaunchBear(h, v);
    }
    #endregion

    #region 일반 공격
    [PunRPC]
    public void NitaNormalAttack()
    {
        Vector3 pos = normalAttackTransform.position;
        Quaternion rot = normalAttackTransform.rotation;

        GameObject nitaNormalAttack = Instantiate(nitaNormal, pos, rot);
        nitaNormalAttack.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
        nitaNormalAttack.GetComponent<DamageHandler>().viewID = GetComponent<PhotonView>().ViewID;
        nitaNormalAttack.layer = (targetHandler.teamIdx == 1) ? LayerMask.NameToLayer("myTeamAttack") : LayerMask.NameToLayer("enemyTeamAttack");
    }

    #endregion

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
