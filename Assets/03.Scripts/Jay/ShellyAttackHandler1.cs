using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class ShellyAttackHandler1 : MonoBehaviourPun
{
    private MoveHandler moveHandler;
    private AnimatorHandler animatorHandler;
    //private Animator animator;
    private Rigidbody rb;
    //attackJoystic을 누르면 총이 발사된다.
    [Header("JoyStick")]
    public Joystick attackJoystick;
    public Joystick skillJoystick;

    [Header("FirePos Object")]
    private Transform attackLookPoint;
    private Transform skillLookPoint;
    private Transform Player;
    public Transform lineRendererStartTransform;

    [Header("LineRenderer Object")]
    public LineRenderer attackLR;
    public LineRenderer specialLR;

    [Header("Normal Attack Event")]
    //public Transform[] RightHand;
    //public GameObject bulletFactory;
    //public GameObject Mesh;


    [Header("Fire Info")]
    public GameObject attackBulletFactory;
    //public GameObject specialBulletFactory;
    public Transform firePos;
    public float startAngle = -10;

    //private float TrailDistance = 4f;
    public float meshResolution;
    //private float launchForce = 10;

    private bool isTransparented;

    public LayerMask groundLayer;

    RaycastHit hit;
    // Start is called before the first frame update
    void Start()
    {
        //if (photonView.IsMine == false)
        //{
        //    this.enabled = false;
        //}
    }

    private void Awake()
    {
        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
        skillLookPoint = transform.GetChild(2).gameObject.GetComponent<Transform>();
        Player = GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();
        //animator = GetComponent<Animator>();
        rb = GetComponent<Rigidbody>();
        moveHandler = GetComponent<MoveHandler>();
    }

    public void HandleNormalAttack()
    {
        if (Mathf.Abs(attackJoystick.Horizontal) > 0.3f || Mathf.Abs(attackJoystick.Vertical) > 0.3f)
        {
            attackLookPoint.position = new Vector3(attackJoystick.Horizontal + transform.position.x, 4.11f, attackJoystick.Vertical + transform.position.z);

            attackLR.gameObject.SetActive(true);

            transform.LookAt(new Vector3(attackLookPoint.position.x, 5.1f, attackLookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);

            //attackLR.SetPosition(0, new Vector3(transform.position.x, 4.2f, transform.position.z));
            Shoot();
            //Vector3 rayStartPos = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);


            //if (Physics.Raycast(rayStartPos, transform.forward, out hit, TrailDistance))
            //{

            //}
            //else
            //{
            //    //허공
            //}

            //Vector3 directionToLookPoint = (attackLookPoint.position - transform.position).normalized;

            ////float rotationAngle = Mathf.Atan2(directionToLookPoint.x, directionToLookPoint.z) * Mathf.Rad2Deg;

            //transform.rotation = Quaternion.Euler(0, rotationAngle, 0);
        }
        else
        {
            attackLR.gameObject.SetActive(false);
        }
    }
    public void Shoot()
    {
        StartCoroutine(CoroutineShoot());
    }
    private IEnumerator CoroutineShoot()
    {
        //총알 나오는 위치의 각도를 조정
        firePos.transform.localEulerAngles = new Vector3(0, startAngle, 0);
        for (int i = 0; i < 5; i++)
        {
            GameObject bullet = Instantiate(attackBulletFactory, firePos.transform.position, Quaternion.identity);
            yield return new WaitForSeconds(0.1f);
            //자식 하위오브젝트에서 생성
            bullet.transform.parent = this.transform;
            //각도 설정
            firePos.transform.Rotate(0, -(startAngle * 2) / 4, 0);
            Destroy(bullet, 2f);
        }
        //animator.Play("attack");
    }

    //public void HandleUltimateAttack()
    //{
    //    Vector3 joystickDirection = new Vector3(skillJoystick.Horizontal, 0.5f, skillJoystick.Vertical);
    //    Vector3 startVelocity = joystickDirection * launchForce;

    //    if (Mathf.Abs(skillJoystick.Horizontal) > 0 || Mathf.Abs(skillJoystick.Vertical) > 0)
    //    {
    //        StartCoroutine(ResetTransparencyAfterDelay(6));
    //    }
    //}

    //private void HandleDamageTransparent(float parameter)
    //{
    //    int meshCount = Mesh.transform.childCount;

    //    for (int i = 0; i < meshCount; i++)
    //    {
    //        SkinnedMeshRenderer playerMesh = Mesh.transform.GetChild(i).GetComponent<SkinnedMeshRenderer>();
    //        Color materialColor = playerMesh.materials[0].color;
    //        materialColor.a = parameter;
    //        playerMesh.materials[0].color = materialColor;
    //    }
    //}

    //private IEnumerator ResetTransparencyAfterDelay(float delay)
    //{
    //    HandleDamageTransparent(0.2f);
    //    moveHandler.moveSpeed = 4;

    //    yield return new WaitForSeconds(delay);

    //    HandleDamageTransparent(1.0f);
    //    moveHandler.moveSpeed = 2;
    //}

}
