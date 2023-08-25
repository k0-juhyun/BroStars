using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using Photon.Pun;

public class LeonAttackHandler : MonoBehaviourPun
{
    [SerializeField]
    public bool isReverse;

    private MoveHandler moveHandler;
    private HpHandler hpHandler;
    private AnimatorHandler animatorHandler;
    private Rigidbody rb;
    private TargetHandler targetHandler;

    [Header("JoyStick")]
    public Joystick attackJoystick;
    public Joystick skillJoystick;

    [Header("LineRenderer Object")]
    public LineRenderer attackLR;

    [Header("LineRenderer Transform")]
    private Transform attackLookPoint;
    private Transform Player;
    public Transform lineRendererStartTransform;

    [Header("Normal Attack Event")]
    public Transform[] RightHand;
    public GameObject Shuriken;
    public GameObject Mesh;

    private float TrailDistance = 4f;
    public float meshResolution;
    private float launchForce = 10;

    private bool isTransparented;

    public LayerMask groundLayer;

    RaycastHit hit;

    private void Awake()
    {
        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
        targetHandler = GetComponentInParent<TargetHandler>();  
        Player = GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();
        hpHandler = GetComponent<HpHandler>();
        rb = GetComponent<Rigidbody>();
        moveHandler = GetComponent<MoveHandler>();
    }

    public void HandleNormalAttack()
    {
        if (Mathf.Abs(attackJoystick.Horizontal) > 0.3f || Mathf.Abs(attackJoystick.Vertical) > 0.3f)
        {
            Vector3 Direction = new Vector3(attackJoystick.Horizontal, 0, attackJoystick.Vertical);

            if (isReverse)
            {
                Direction = new Vector3(-Direction.x, 0, -Direction.z);
            }
            attackLookPoint.position = new Vector3(Direction.x + transform.position.x, 4.11f, Direction.z + transform.position.z);

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
    public void HandleUltimateAttack()
    {
        Vector3 joystickDirection = new Vector3(skillJoystick.Horizontal, 0.5f, skillJoystick.Vertical);
        Vector3 startVelocity = joystickDirection * launchForce;

        if (Mathf.Abs(skillJoystick.Horizontal) > 0 || Mathf.Abs(skillJoystick.Vertical) > 0)
        {
            if (photonView.IsMine)
            {
                photonView.RPC(nameof(LeonSkillAttack), RpcTarget.All);
            }
        }
    }

    [PunRPC]
    public void HandleShurikenEvent()
    {
        HandleShurikenEventRPC();
    }

    [PunRPC]
    public void HandleShurikenEventRPC()
    {
        StartCoroutine(HandleShuriken());
    }

    IEnumerator HandleShuriken()
    {
        #region 정리 안한 코드
        //GameObject shuriken1 = Instantiate(Shuriken, RightHand[0].transform.position, RightHand[0].transform.rotation);
        //shuriken1.SetActive(true);
        //shuriken1.transform.forward = this.transform.forward;
        //shuriken1.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
        //shuriken1.GetComponent<DamageHandler>().viewID = GetComponent<PhotonView>().ViewID;
        //if(targetHandler.teamIdx == 1)
        //{
        //    shuriken1.layer = LayerMask.NameToLayer("myTeamAttack");
        //}
        //else if(targetHandler.teamIdx == 2)
        //{
        //    shuriken1.layer = LayerMask.NameToLayer("enemyTeamAttack");
        //}
        //yield return new WaitForSeconds(0.03f);

        //GameObject shuriken2 = Instantiate(Shuriken, RightHand[1].transform.position, RightHand[1].transform.rotation);
        //shuriken2.SetActive(true);
        //shuriken2.transform.forward = this.transform.forward;
        //shuriken2.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
        //shuriken2.GetComponent<DamageHandler>().viewID = GetComponent<PhotonView>().ViewID;
        //if (targetHandler.teamIdx == 1)
        //{
        //    shuriken2.layer = LayerMask.NameToLayer("myTeamAttack");
        //}
        //else if (targetHandler.teamIdx == 2)
        //{
        //    shuriken2.layer = LayerMask.NameToLayer("enemyTeamAttack");
        //}
        //yield return new WaitForSeconds(0.03f);

        //GameObject shuriken3 = Instantiate(Shuriken, RightHand[2].transform.position, RightHand[2].transform.rotation);
        //shuriken3.SetActive(true);
        //shuriken3.transform.forward = this.transform.forward;
        //shuriken3.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
        //shuriken3.GetComponent<DamageHandler>().viewID = GetComponent<PhotonView>().ViewID;
        //if (targetHandler.teamIdx == 1)
        //{
        //    shuriken3.layer = LayerMask.NameToLayer("myTeamAttack");
        //}
        //else if (targetHandler.teamIdx == 2)
        //{
        //    shuriken3.layer = LayerMask.NameToLayer("enemyTeamAttack");
        //}
        //yield return new WaitForSeconds(0.03f);

        //GameObject shuriken4 = Instantiate(Shuriken, RightHand[3].transform.position, RightHand[3].transform.rotation);
        //shuriken4.SetActive(true);
        //shuriken4.transform.forward = this.transform.forward;
        //shuriken4.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
        //shuriken4.GetComponent<DamageHandler>().viewID = GetComponent<PhotonView>().ViewID;
        //if (targetHandler.teamIdx == 1)
        //{
        //    shuriken4.layer = LayerMask.NameToLayer("myTeamAttack");
        //}
        //else if (targetHandler.teamIdx == 2)
        //{
        //    shuriken4.layer = LayerMask.NameToLayer("enemyTeamAttack");
        //}s
        #endregion
        for (int i = 0; i < RightHand.Length; i++)
        {
            GameObject shuriken = Instantiate(Shuriken, RightHand[i].transform.position, RightHand[i].transform.rotation);
            shuriken.SetActive(true);
            shuriken.transform.forward = transform.forward;

            DamageHandler damageHandler = shuriken.GetComponent<DamageHandler>();
            damageHandler.damage = hpHandler.AttackDamage;
            damageHandler.attackviewID = photonView.ViewID;

            shuriken.layer = (targetHandler.teamIdx == 1) ? LayerMask.NameToLayer("myTeamAttack") : LayerMask.NameToLayer("enemyTeamAttack");
            yield return new WaitForSeconds(0.03f);
        }
    }


    [PunRPC]
    private void HandleDamageTransparent(float parameter)
    {
        int meshCount = Mesh.transform.childCount;

        for (int i = 0; i < meshCount; i++)
        {
            SkinnedMeshRenderer playerMesh = Mesh.transform.GetChild(i).GetComponent<SkinnedMeshRenderer>();
            Color materialColor = playerMesh.materials[0].color;
            materialColor.a = parameter;
            playerMesh.materials[0].color = materialColor;
        }
    }

    [PunRPC]
    private void SetTransparencyAfterDelay(float delay)
    {
        photonView.RPC(nameof(HandleDamageTransparent), RpcTarget.All, 0.2f);
        moveHandler.moveSpeed = 4;

        StartCoroutine(ResetTransparencyCoroutine(1.0f, delay));
    }

    private IEnumerator ResetTransparencyCoroutine(float alpha, float delay)
    {
        yield return new WaitForSeconds(delay);

        photonView.RPC(nameof(HandleDamageTransparent), RpcTarget.All, 1.0f);
        moveHandler.moveSpeed = 2;
    }

    [PunRPC]
    private void LeonSkillAttack()
    {
        SetTransparencyAfterDelay(6);
    }
}

