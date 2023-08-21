using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Unity.VisualScripting;
using UnityEngine.UIElements;

public class ShellyAttackHandler : MonoBehaviourPun
{
    private HpHandler hpHandler;
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
    //카트리지 
    //public float shootingSlowness;
    //public GameObject Cardridge;
    //private bool beingHandled = false;
    [Header("TrailRenderer")]

    [Header("Fire Info")]
    public GameObject attackBulletFactory;
    public GameObject specialBulletFactory;
    public Transform firePos;
    public float startAngle = -10;
    //public Transform rayStartPos;

    private float TrailDistance = 4f;
    public float meshResolution;
    private float launchForce = 10;

    private bool isTransparented;

    public LayerMask groundLayer;

    RaycastHit hit;

    private AudioSource audioSource;
    public AudioClip shotGunClip;

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
        audioSource = GetComponent<AudioSource>();
        hpHandler = GetComponent<HpHandler>();
        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
        skillLookPoint = transform.GetChild(2).gameObject.GetComponent<Transform>();
        Player = GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();
        rb = GetComponent<Rigidbody>();
        moveHandler = GetComponent<MoveHandler>();
    }

    //기본공격
    public void HandleNormalAttack()
    {
       //조이스틱이 절대값내로 움직인다면
        if (Mathf.Abs(attackJoystick.Horizontal) > 0.3f || Mathf.Abs(attackJoystick.Vertical) > 0.3f)
        {
            //attackLookPoint의 위치 설정 (플레이어의 y값 위)
            attackLookPoint.position = new Vector3(attackJoystick.Horizontal + transform.position.x, 4.11f, attackJoystick.Vertical + transform.position.z);

            //attack라인랜더러의 오브젝트  true
            attackLR.gameObject.SetActive(true);
            //attackLookPoint를 바라본다
            transform.LookAt(new Vector3(attackLookPoint.position.x, 5.1f, attackLookPoint.position.z));
            //Vector3 rayStartPos = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);
            //회전은 y값만 움직인다
            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
            //
            Ray ray = new Ray(firePos.position, firePos.forward);

            //if (Physics.Raycast(ray, transform.forward, out hit, TrailDistance))
            {
               // print("111");
                Shot();

            }
        }
        else
        {
            attackLR.gameObject.SetActive(false);
        }
    }
    
    void Shot()
    {
        photonView.RPC(nameof(RpcShot), RpcTarget.All, firePos.transform.position, firePos.transform.forward);

        //firePos.transform.rotation = originalRotation;
    }

    [PunRPC]
    void RpcShot(Vector3 firePos, Vector3 fireForward)
    {
        // 총알의 갯수
        int numBullets = 5;

        //회전각도
        float spreadAngle = 20f;

        //오디오소스 플레이가 안된다면
        if(audioSource.isPlaying == false)
        {
            //오디오소스를 튼다
           audioSource.Play();
        }

        //부채꼴 모양
        for (int i = 0; i < numBullets; i++)
        {
            //총알회전은 
            Quaternion bulletRotation = Quaternion.Euler(0, -(numBullets - 1) * spreadAngle * 0.5f + i * spreadAngle, 0);

            Vector3 bulletDirection = bulletRotation * fireForward;

            GameObject bullet = Instantiate(attackBulletFactory, firePos, Quaternion.identity);

            bullet.transform.rotation = Quaternion.LookRotation(bulletDirection);
            //bullet.transform.forward = firePos.transform.forward;
            bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
            //bullet.GetComponent<ShellyEffectBullet1>().attackHandler = this;
            
            Destroy(bullet, 0.6f);
        }
        
    }


    public void HandleUltimateAttack()
    {
        Vector3 joystickDirection = new Vector3(skillJoystick.Horizontal, 0.5f, skillJoystick.Vertical);
        Vector3 startVelocity = joystickDirection * launchForce;


        if (Mathf.Abs(skillJoystick.Horizontal) > 0f || Mathf.Abs(skillJoystick.Vertical) > 0f)
        {

            if (!specialLR.gameObject.activeInHierarchy)
            {
                specialLR.gameObject.SetActive(true);
            }
            skillLookPoint.position = new Vector3(attackJoystick.Horizontal + transform.position.x, 4.11f, attackJoystick.Vertical + transform.position.z);

            transform.LookAt(new Vector3(skillLookPoint.position.x, 4.1f, skillLookPoint.position.z));

            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
        }
        else
        {
            specialLR.gameObject.SetActive(false );
        }

    }

    //슈퍼쉘 수정

    public void CallShoot()
    {
        StartCoroutine(SuperShell());
    }
    IEnumerator SuperShell()
    {
        //총알 나오는 위치의 각도를 조정
        firePos.transform.localEulerAngles = new Vector3(0, startAngle, 0);
        for (int i = 0; i < 5; i++)
        {
            //print("1");
            GameObject bullet = Instantiate(attackBulletFactory, firePos.transform.position, Quaternion.identity);
            yield return new WaitForSeconds(0.1f);
            //자식 하위오브젝트에서 생성
            bullet.transform.forward = this.transform.forward;
            //각도 설정
            firePos.transform.Rotate(0, -(startAngle * 2) / 4, 0);
            Destroy(bullet, 0.7f);
        }
        animatorHandler.playTargetAnim("Attack");
        //animator.Play("attack");
    }


    //    //총알 나오는 위치의 각도를 조정
    //    firePos.transform.localEulerAngles = new Vector3(0, startAngle, 0);
    //    List<GameObject> spawnedSpecialBullets = new List<GameObject>();
    //        for (int i = 0; i< 10; i++)
    //        {
    //            GameObject specialBullet = Instantiate(specialBulletFactory, firePos.position, firePos.rotation);
    //    spawnedSpecialBullets.Add(specialBullet);
    //            //각도 설정
    //            firePos.transform.Rotate(0, -(startAngle* 2) / 4, 0);
    //            //Destroy(specialBullet, 2f);
    //        }
    ////animator.Play("attack");
    ////StartCoroutine(Shooting());

    //foreach (GameObject bullet in spawnedSpecialBullets)
    //{
    //    Destroy(bullet, 2f);
    //}
    //private IEnumerator Shooting()
    //{
    //    beingHandled = true;
    //    GameObject cardridge;
    //    for (int i = 0; i <= 5; i++)
    //    {
    //        if (firePos) cardridge = (GameObject)Instantiate(Cardridge, firePos.transform.position + firePos.transform.right, firePos.transform.rotation);
    //        else cardridge = (GameObject)Instantiate(Cardridge, firePos.transform.position + firePos.transform.forward, firePos.transform.rotation);

    //    }
    //    yield return new WaitForSeconds(shootingSlowness);

    //    beingHandled = false;

    //}

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
    //float backSpeed = 0.5f;
    //#region 일반 공격 애니메이션 이벤트
    //public void HandleBackEvent()
    //{
    //    //뒤로 0.5f만큼 흔들리고싶다
    //    transform.position = transform.position.z * backSpeed * Time.deltaTime;
    //}

    #region AutoAim
    ////오토에임 by 주현
    //List<GameObject> list = new List<GameObject>();
    //private float[] disatanceFromBrawlers;

    //private string Tag;

    //Awake()
    //{
    //    for (int i = 0; i < go.Length; i++)
    //    {
    //        list.Add(GameObject.FindWithTag("Player"));
    //    }
    //}
    //private void FixedUpdate()
    //{
    //    for (int i = 0; i < list.Count; i++)
    //    {
    //        float testdis = Vector3.Distance(transform.position, list[i].transform.position)
    //        testdis = disatanceFromBrawlers[i];
    //        testdis = list[i].transform.position;
    //    }
    //    for(int i =0; i< disatanceFromBrawlers.Length; i++)
    //    {
    //        //최솟값 크기 비교
    //    }
    //    //min


    //}
    #endregion
}
