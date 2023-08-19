using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using Photon.Pun;

public class LeonAttackHandler : MonoBehaviourPun
{
    private MoveHandler moveHandler;
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
        Player = GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();
        rb = GetComponent<Rigidbody>();
        moveHandler = GetComponent<MoveHandler>();
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
    public void HandleUltimateAttack()
    {
        Vector3 joystickDirection = new Vector3(skillJoystick.Horizontal, 0.5f, skillJoystick.Vertical);
        Vector3 startVelocity = joystickDirection * launchForce;

        if (Mathf.Abs(skillJoystick.Horizontal) > 0 || Mathf.Abs(skillJoystick.Vertical) > 0)
        {
            if (photonView.IsMine)
            {
                photonView.RPC("StartResetTransparencyCoroutine", RpcTarget.All, 6f);
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
        GameObject shuriken = Instantiate(Shuriken, RightHand[0].transform.position, RightHand[0].transform.rotation);
        yield return new WaitForSeconds(0.03f);
        Instantiate(Shuriken, RightHand[1].transform.position, RightHand[1].transform.rotation);
        yield return new WaitForSeconds(0.03f);
        Instantiate(Shuriken, RightHand[2].transform.position, RightHand[2].transform.rotation);
        yield return new WaitForSeconds(0.03f);
        Instantiate(Shuriken, RightHand[3].transform.position, RightHand[3].transform.rotation);
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
    private void ResetTransparencyAfterDelay(float delay)
    {
        photonView.RPC("HandleDamageTransparent", RpcTarget.All, 0.2f);
        moveHandler.moveSpeed = 4;

        StartCoroutine(ResetTransparencyCoroutine(1.0f, delay));
    }

    private IEnumerator ResetTransparencyCoroutine(float alpha, float delay)
    {
        yield return new WaitForSeconds(delay);

        photonView.RPC("HandleDamageTransparent", RpcTarget.All, 1.0f);
        moveHandler.moveSpeed = 2;
    }
}

