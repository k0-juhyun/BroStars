using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using static GameManager;
using UnityEditor.Experimental.GraphView;

public class ElprimoAttackHandler : MonoBehaviourPun
{
    private HpHandler hpHandler;
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

    [Header("Normal Attack Event")]
    public GameObject[] fistEffect;
    public GameObject[] elprimoFists;
 
    private float TrailDistance = 1.3f;
    private float launchForce = 10;

    RaycastHit hit;

    private void Awake()
    {
        hpHandler = GetComponent<HpHandler>();
        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
        skillLookPoint = transform.GetChild(2).gameObject.GetComponent<Transform>();
        Player = GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();
        rb = GetComponent<Rigidbody>();
    }

    private void Start()
    {
        
    }


    #region 공격

    public void HandleNormalAttack()
    {
        if (Mathf.Abs(attackJoystick.Horizontal) > 0.3f || Mathf.Abs(attackJoystick.Vertical) > 0.3f)
        {
            if (attackLR.gameObject.activeInHierarchy == false)
            {
                attackLR.gameObject.SetActive(true);
            }

            attackLookPoint.position = new Vector3(attackJoystick.Horizontal + transform.position.x, 4.11f, attackJoystick.Vertical + transform.position.z);

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
        Vector3 startVelocity = joystickDirection * launchForce;

        DrawTrajectory(startVelocity, 100, 0.1f);

        if (Mathf.Abs(skillJoystick.Horizontal) > 0 || Mathf.Abs(skillJoystick.Vertical) > 0)
        {
            if (specialLR.gameObject.activeInHierarchy == false)
            {
                specialLR.gameObject.SetActive(true);
            }

            skillLookPoint.position = new Vector3(skillJoystick.Horizontal + transform.position.x, 4.11f, skillJoystick.Vertical + transform.position.z);

            transform.LookAt(new Vector3(skillLookPoint.position.x, 4.11f, skillLookPoint.position.z)); ;

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
        }
        else
        {
            specialLR.gameObject.SetActive(false);
        }
    }

    #endregion



    #region 일반공격
    [PunRPC]
    public void ElprimoNormalAttack()
    {
        photonView.RPC(nameof(animatorHandler.playTargetAnimRpc), RpcTarget.All, "Normal");
    }
    #endregion

    #region 포물선 그리기
    private void DrawTrajectory(Vector3 startVelocity, int numPoints, float timeStep)
    {
        specialLR.positionCount = numPoints;

        Vector3[] positions = new Vector3[numPoints];

        for (int i = 0; i < numPoints; i++)
        {
            float time = i * timeStep;
            Vector3 position = startVelocity * time + Physics.gravity * time * time * 0.5f;
            position += transform.position;
            specialLR.SetPosition(i, position);
        }
    }
    #endregion

    #region 플레이어 던지기
    [PunRPC]
    public void LaunchPlayer(float h, float v)
    {
        photonView.RPC(nameof(animatorHandler.playTargetAnimRpc), RpcTarget.All, "Special");

        Vector3 joystickDirection = new Vector3(h, 0.5f, v);
        Vector3 startVelocity = joystickDirection * launchForce;   

        GetComponent<Rigidbody>().velocity = startVelocity;
    }

    [PunRPC]
    public void LaunchPlayerRPC(float h, float v)
    {
        LaunchPlayer(h, v);
    }
    #endregion

    #region 일반 공격 애니메이션 이벤트
    public void LeftHandEventHandler()
    {
        GameObject _fistEffect = Instantiate(fistEffect[0], elprimoFists[0].transform.position, elprimoFists[0].transform.rotation);
        _fistEffect.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
        //if(내가 myTeam 이라면)
        //{
        //    _fistEffect.tag = myTeamAttack;
        //}
        //else if(내가 awayTeam 이라면)
        //{
        //    _fistEffect.tage = awayTeamAttack;
        //}
    }

    public void RightHandEventHandler()
    {
        GameObject _fistEffect = Instantiate(fistEffect[1], elprimoFists[1].transform.position, elprimoFists[0].transform.rotation);
        _fistEffect.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
        //if (내가 myTeam 이라면)
        //{
        //    _fistEffect.tag = myTeamAttack;
        //}
        //else if(내가 awayTeam 이라면)
        //{
        //    _fistEffect.tage = awayTeamAttack;
        //}
    }
    #endregion

}