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
    private SFxHandler sfxHandler;

    AudioSource audioSource;

    #region 인스펙터창
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
    public Transform rayStartTransform;

    [Header("Normal Attack Event")]
    public GameObject[] fistEffect;
    public GameObject[] elprimoFists;
 
    private float TrailDistance = 1.3f;
    private float launchForce = 10;

    public LayerMask groundLayer;

    [SerializeField]
    public bool isReverse;
    private bool isJump;

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
        audioSource = GetComponentInChildren<AudioSource>();
        sfxHandler = GetComponentInChildren<SFxHandler>(); 
    }

    #region 공격

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

        if (isReverse)
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
        isJump = true;
        photonView.RPC(nameof(animatorHandler.playTargetAnimRpc), RpcTarget.All, "Special");

        Vector3 joystickDirection = new Vector3(h, 0.5f, v);
        Vector3 startVelocity = joystickDirection * launchForce;   

        GetComponent<Rigidbody>().velocity = startVelocity;
    }

    [PunRPC]
    public void LaunchPlayerRPC(float h, float v)
    {
        sfxHandler.playSound("Ulti");
        LaunchPlayer(h, v);
    }
    #endregion

    #region 일반 공격 애니메이션 이벤트
    public void LeftHandEventHandler()
    {
        GameObject _fistEffect = Instantiate(fistEffect[0], elprimoFists[0].transform.position, elprimoFists[0].transform.rotation);
        _fistEffect.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
        _fistEffect.GetComponent<DamageHandler>().attackviewID = photonView.ViewID;
        sfxHandler.playSound("Normal");
        _fistEffect.layer = (targetHandler.teamIdx == 1) ? LayerMask.NameToLayer("myTeamAttack") : LayerMask.NameToLayer("enemyTeamAttack");
    }

    public void RightHandEventHandler()
    {
        GameObject _fistEffect = Instantiate(fistEffect[1], elprimoFists[1].transform.position, elprimoFists[0].transform.rotation);
        _fistEffect.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
        _fistEffect.GetComponent<DamageHandler>().attackviewID = photonView.ViewID;
        sfxHandler.playSound("Normal");
        _fistEffect.layer = (targetHandler.teamIdx == 1) ? LayerMask.NameToLayer("myTeamAttack") : LayerMask.NameToLayer("enemyTeamAttack");
    }
    #endregion

    private void OnCollisionEnter(Collision collision)
    {
        if(isJump)
        {
            if(collision.gameObject.layer == LayerMask.NameToLayer("Hittable"))
            {
                Collider[] colliders = Physics.OverlapSphere(transform.position, 1.8f);
                foreach (Collider collider in colliders)
                {
                    HpHandler hittedHpHandler = collider.GetComponent<HpHandler>();
                    if (hittedHpHandler != null)
                    {
                        if (collider.gameObject == this.gameObject)
                            continue;

                        float ultiDamage = -hpHandler.SkillDamage;

                        PhotonView myPhotonView = GetComponent<PhotonView>();

                        hittedHpHandler.photonView.RPC("HandleHP", RpcTarget.All, ultiDamage, myPhotonView.ViewID);
                    }
                }
                isJump = false;
            }
        }
    }
}