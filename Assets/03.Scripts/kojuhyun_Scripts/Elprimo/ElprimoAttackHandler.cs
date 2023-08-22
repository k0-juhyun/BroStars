using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using static GameManager;


public class ElprimoAttackHandler : MonoBehaviourPun
{
    private TargetHandler targetHandler;
    private HpHandler hpHandler;
    private AnimatorHandler animatorHandler;
    private Rigidbody rb;
    public LogHandler logHandler;

    #region �ν�����â
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

    public LayerMask groundLayer;

    [SerializeField]
    private bool isReverse;

    RaycastHit hit;

    #endregion

    private void Awake()
    {
        hpHandler = GetComponent<HpHandler>();
        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
        skillLookPoint = transform.GetChild(2).gameObject.GetComponent<Transform>();
        Player = GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();
        targetHandler = GetComponentInParent<TargetHandler>();
        rb = GetComponent<Rigidbody>();
    }

    #region ����

    public void HandleNormalAttack()
    {
        if (Mathf.Abs(attackJoystick.Horizontal) > 0.3f || Mathf.Abs(attackJoystick.Vertical) > 0.3f)
        {
            Vector3 Direction = new Vector3(attackJoystick.Horizontal, 0, attackJoystick.Vertical);

            if (isReverse)
            {
                Direction = new Vector3(-Direction.x, 0, -Direction.z);
            }

            if (attackLR.gameObject.activeInHierarchy == false)
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
                if(isReverse)
                {
                    attackLR.SetPosition(1, new Vector3(hit.point.x, hit.point.y - 0.1f, hit.point.z));
                }
                else
                {
                    attackLR.SetPosition(1, hit.point);
                }
            }
            else
            {
                Vector3 yUp = new Vector3(0, 0.1f, 0);
                if(isReverse)
                {
                    attackLR.SetPosition(1, transform.position + transform.forward * TrailDistance - yUp);
                }
                else
                {
                    attackLR.SetPosition(1, transform.position + transform.forward * TrailDistance + yUp);
                }
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

        if(isReverse)
        {
            joystickDirection = new Vector3(-joystickDirection.x, 0.5f, -joystickDirection.z);
        }

        Vector3 startVelocity = joystickDirection * launchForce;

        DrawTrajectory(startVelocity, 100, 0.1f);

        if (Mathf.Abs(skillJoystick.Horizontal) > 0 || Mathf.Abs(skillJoystick.Vertical) > 0)
        {
            if (specialLR.gameObject.activeInHierarchy == false)
            {
                specialLR.gameObject.SetActive(true);
            }

            skillLookPoint.position = new Vector3(joystickDirection.x + transform.position.x, 4.11f, joystickDirection.z+ transform.position.z);

            transform.LookAt(new Vector3(skillLookPoint.position.x, 4.11f, skillLookPoint.position.z)); ;

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
        }
        else
        {
            specialLR.gameObject.SetActive(false);
        }
    }

    #endregion

    #region �Ϲݰ���
    [PunRPC]
    public void ElprimoNormalAttack()
    {
        photonView.RPC(nameof(animatorHandler.playTargetAnimRpc), RpcTarget.All, "Normal");
    }
    #endregion

    #region ������ �׸���
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

    #region �÷��̾� ������
    [PunRPC]
    public void LaunchPlayer(float h, float v)
    {
        photonView.RPC(nameof(animatorHandler.playTargetAnimRpc), RpcTarget.All, "Special");

        Vector3 joystickDirection = new Vector3(h, 0.5f, v);
        Vector3 startVelocity = joystickDirection * launchForce;   

        GetComponent<Rigidbody>().velocity = startVelocity;
        StartCoroutine(HandleLanding());
    }

    [PunRPC]
    public void LaunchPlayerRPC(float h, float v)
    {
        LaunchPlayer(h, v);
    }
    #endregion

    #region �Ϲ� ���� �ִϸ��̼� �̺�Ʈ
    public void LeftHandEventHandler()
    {
        GameObject _fistEffect = Instantiate(fistEffect[0], elprimoFists[0].transform.position, elprimoFists[0].transform.rotation);
        _fistEffect.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
        _fistEffect.GetComponent<DamageHandler>().viewID = _fistEffect.GetComponent<PhotonView>().ViewID;
        //if(���� myTeam �̶��)
        //{
        //    _fistEffect.tag = myTeamAttack;
        //}
        //else if(���� awayTeam �̶��)
        //{
        //    _fistEffect.tage = awayTeamAttack;
        //}
    }

    public void RightHandEventHandler()
    {
        GameObject _fistEffect = Instantiate(fistEffect[1], elprimoFists[1].transform.position, elprimoFists[0].transform.rotation);
        _fistEffect.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
        _fistEffect.GetComponent<DamageHandler>().viewID = _fistEffect.GetComponent<PhotonView>().ViewID;
        //if (���� myTeam �̶��)
        //{
        //    _fistEffect.tag = myTeamAttack;
        //}
        //else if(���� awayTeam �̶��)
        //{
        //    _fistEffect.tage = awayTeamAttack;
        //}
    }
    #endregion

    private IEnumerator HandleLanding()
    {
        while(true)
        {
            print("Coroutine");
            Ray ray = new Ray(transform.position, Vector3.down);
            float maxDistance = 0.2f;

            if(Physics.Raycast(ray, maxDistance, groundLayer))
            {
                print("Raycast");
                Collider[] colliders = Physics.OverlapSphere(transform.position, 20f);
                foreach (Collider collider in colliders)
                {
                    HpHandler hittedHpHandler= collider.GetComponent<HpHandler>();
                    if (hittedHpHandler != null)
                    {
                        float ultiDamage = -hpHandler.SkillDamage;
                        print("Jump1");
                        hittedHpHandler.HandleHP(ultiDamage);
                        print("Jump2");
                    }
                }
                break;
            }
            yield return null;
        }
    }

}