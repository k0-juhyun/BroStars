using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Unity.VisualScripting;
using Photon.Pun.Demo.Asteroids;
using System.Runtime.CompilerServices;
using JetBrains.Annotations;

public class ShellyAttackHandler : MonoBehaviourPun
{
    [SerializeField]
    public bool isReverse;

    private SoundHandler soundHandler;
    private HpHandler hpHandler;
    private MoveHandler moveHandler;
    private AnimatorHandler animatorHandler;
    private TargetHandler targetHandler;
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
    public float fireDistance = 5f; //사정거리

    //private float TrailDistance = 4f;

    public GameObject Mesh;
    public float meshResolution;
    private float launchForce = 10;

    //private bool isTransparented;

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
        targetHandler = GetComponentInParent<TargetHandler>();
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

            attackLookPoint.position = new Vector3(attackJoystick.Horizontal + transform.position.x, 4.11f, attackJoystick.Vertical + transform.position.z);

            attackLR.gameObject.SetActive(true);


            Vector3 directionToLookPoint = (attackLookPoint.position - transform.position).normalized;

            float rotationAngle = Mathf.Atan2(directionToLookPoint.x, directionToLookPoint.z) * Mathf.Rad2Deg;

            transform.rotation = Quaternion.Euler(0, rotationAngle, 0);

            //transform.LookAt(new Vector3(attackLookPoint.position.x, 5.1f, attackLookPoint.position.z));
            //transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
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
            specialLR.gameObject.SetActive(false);
        }

    }

    [PunRPC]
    public void Shot()
    {
        RpcShot(firePos.transform.position, firePos.transform.forward);
        animatorHandler.playTargetAnimRpc("Attack");
    }
    [PunRPC]
    public void SuperShell()
    {
        RpcSuperShell(firePos.transform.position, firePos.transform.forward);
        animatorHandler.playTargetAnimRpc("Attack");
    }

    [PunRPC]
    void RpcShot(Vector3 firePos, Vector3 fireForward)
    {
        int numBullets = 5;

        float spreadAngle = 5f;

        if (audioSource.isPlaying == false)
        {
            audioSource.Play();
        }

        for (int i = 0; i < numBullets; i++)
        {
            Quaternion bulletRotation = Quaternion.Euler(0, -(numBullets - 1) * spreadAngle * 0.5f + i * spreadAngle, 0);

            Vector3 bulletDirection = bulletRotation * fireForward;

            GameObject bullet = Instantiate(attackBulletFactory, firePos, Quaternion.identity);

            bullet.transform.rotation = Quaternion.LookRotation(bulletDirection);
            bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
            #region 거리별 데미지
            //나를 제외한 player 태그 

            //if (gameObject.CompareTag("Player"))
            //{

            //DamageHandler damageHandler = GetComponent<DamageHandler>();
            //1차 사거리
            //float firstDistance = 1.5f;
            ////2차 사거리
            //float secondDistance = 3.5f;
            ////3차 사거리
            //float thirdDistance = 5f;

            //// 총알과 player가 충돌했을때 나와 충돌플레이어 사이의거리
            //float range = Vector3.Distance(transform.position, transform.position);

            ////사거리 안에 있으면 
            //if (range < firstDistance)
            //{
            //    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage; //5배
            //}
            //else if (firstDistance < range && range < secondDistance)
            //{
            //    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage; //3배
            //}
            //else if (secondDistance < range && range < thirdDistance)
            //{
            //    bullet.GetComponent<DamageHandler>().damage  = hpHandler.AttackDamage; //1배
            //}
            //}
            #endregion
            Destroy(bullet, 0.6f);
        }

    }
    #region 오토에임

    List<GameObject> player = new List<GameObject>();
    private float[] dstFromPlayer;
    private string Tag;
    public void AutoAim()
    {
        for (int i = 0; i < player.Count; i++)
        {
            //게임오브젝트 더하기
            player.Add(GameObject.FindWithTag("Player"));
        }

    }
    //list<gameobject> list = new list<gameobject>();
    //private float[] disatancefrombrawlers;

    //private string tag;

    //awake()
    //{
    //    for (int i = 0; i < go.length; i++)
    //    {
    //        list.add(gameobject.findwithtag("player"));
    //    }
    //}
    //private void fixedupdate()
    //{
    //    for (int i = 0; i < list.count; i++)
    //    {
    //        float testdis = vector3.distance(transform.position, list[i].transform.position)
    //        testdis = disatancefrombrawlers[i];
    //        testdis = list[i].transform.position;
    //    }
    //    for (int i = 0; i < disatancefrombrawlers.length; i++)
    //    {
    //        //최솟값 크기 비교
    //    }
    //    //min
    //}

    #endregion


    #region  슈퍼쉘
    [PunRPC]
    void RpcSuperShell(Vector3 firePos, Vector3 fireForward)
    {
        int numBullets = 10;

        float spreadAngle = 5f;

        if (audioSource.isPlaying == false)
        {
            audioSource.Play();
        }
        for (int i = 0; i < numBullets; i++)
        {
            Quaternion bulletRotation = Quaternion.Euler(0, -(numBullets - 1) * spreadAngle * 0.5f + i * spreadAngle, 0);

            Vector3 bulletDirection = bulletRotation * fireForward;

            GameObject bullet = Instantiate(specialBulletFactory, firePos, Quaternion.identity);

            bullet.transform.rotation = Quaternion.LookRotation(bulletDirection);

            if (gameObject.CompareTag("Player"))
            {

                #region 거리별 데미지
                ////DamageHandler damageHandler = GetComponent<DamageHandler>();
                ////1차 사거리
                //float firstDistance = 1.5f;
                ////2차 사거리
                //float secondDistance = 3.5f;
                ////3차 사거리
                //float thirdDistance = 5f;

                //// 총알과 player가 충돌했을때 나와 충돌플레이어 사이의거리
                //float range = Vector3.Distance(transform.position, transform.position);

                ////사거리 안에 있으면 
                //if (range < firstDistance)
                //{
                //    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
                //    //5배
                //}

                //else if (firstDistance < range && range < secondDistance)
                //{
                //    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
                //    //3배
                //}
                //else if (secondDistance < range && range < thirdDistance)
                //{
                //    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;

                //    //1배
                //}
                #endregion
            }
            bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;

            Destroy(bullet, 0.9f);
        }
    }
    #endregion

    #region  거리별 데미지
    //상대방과 거리의 따른 데미지 및 콜리젼
    //void DamageOnDistance(float distance)

    //상대방과 나와의 거리를 재고
    //Vector3 aaa= Vector3.Distance(this.transform.position, gameObject.name.Contains("Controller"))

    //그 값이 사거리내에 있으면

    //데미지를 준다

    // 충돌체의 태그가 player일때
    //if (collision.gameObject.CompareTag("Player"))
    //{
    //    //DamageHandler damageHandler = GetComponent<DamageHandler>();
    //    //1차 사거리
    //    float firstDistance = 1.5f;
    //    //2차 사거리
    //    float secondDistance = 3.5f;
    //    //3차 사거리
    //    float thirdDistance = 5f;

    //    // 총알과 player가 충돌했을때 나와 충돌플레이어 사이의거리
    //    float range = Vector3.Distance(transform.position, collision.transform.position);

    //    //사거리 안에 있으면 
    //    if (range < firstDistance)
    //    {
    //        bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
    //    }

    //    else if (firstDistance < range && range < secondDistance)
    //    {
    //        bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
    //    }
    //    else if (secondDistance < range && range < thirdDistance)
    //    {
    //        bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
    //    }
    //}




}
#endregion

#region 일반 공격 애니메이션 이벤트
//public void HandleBackEvent()
//{
//    //뒤로 0.5f만큼 흔들리고싶다
//    transform.position = transform.position.z * backSpeed * Time.deltaTime;
//}
#endregion
