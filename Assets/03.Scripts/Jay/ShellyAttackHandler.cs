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
    //attackJoystic�� ������ ���� �߻�ȴ�.
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
    //īƮ���� 
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
    public float fireDistance = 5f; //�����Ÿ�

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
            #region �Ÿ��� ������
            //���� ������ player �±� 

            //if (gameObject.CompareTag("Player"))
            //{

            //DamageHandler damageHandler = GetComponent<DamageHandler>();
            //1�� ��Ÿ�
            //float firstDistance = 1.5f;
            ////2�� ��Ÿ�
            //float secondDistance = 3.5f;
            ////3�� ��Ÿ�
            //float thirdDistance = 5f;

            //// �Ѿ˰� player�� �浹������ ���� �浹�÷��̾� �����ǰŸ�
            //float range = Vector3.Distance(transform.position, transform.position);

            ////��Ÿ� �ȿ� ������ 
            //if (range < firstDistance)
            //{
            //    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage; //5��
            //}
            //else if (firstDistance < range && range < secondDistance)
            //{
            //    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage; //3��
            //}
            //else if (secondDistance < range && range < thirdDistance)
            //{
            //    bullet.GetComponent<DamageHandler>().damage  = hpHandler.AttackDamage; //1��
            //}
            //}
            #endregion
            Destroy(bullet, 0.6f);
        }

    }
    #region ���信��

    List<GameObject> player = new List<GameObject>();
    private float[] dstFromPlayer;
    private string Tag;
    public void AutoAim()
    {
        for (int i = 0; i < player.Count; i++)
        {
            //���ӿ�����Ʈ ���ϱ�
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
    //        //�ּڰ� ũ�� ��
    //    }
    //    //min
    //}

    #endregion


    #region  ���۽�
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

                #region �Ÿ��� ������
                ////DamageHandler damageHandler = GetComponent<DamageHandler>();
                ////1�� ��Ÿ�
                //float firstDistance = 1.5f;
                ////2�� ��Ÿ�
                //float secondDistance = 3.5f;
                ////3�� ��Ÿ�
                //float thirdDistance = 5f;

                //// �Ѿ˰� player�� �浹������ ���� �浹�÷��̾� �����ǰŸ�
                //float range = Vector3.Distance(transform.position, transform.position);

                ////��Ÿ� �ȿ� ������ 
                //if (range < firstDistance)
                //{
                //    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
                //    //5��
                //}

                //else if (firstDistance < range && range < secondDistance)
                //{
                //    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
                //    //3��
                //}
                //else if (secondDistance < range && range < thirdDistance)
                //{
                //    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;

                //    //1��
                //}
                #endregion
            }
            bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;

            Destroy(bullet, 0.9f);
        }
    }
    #endregion

    #region  �Ÿ��� ������
    //����� �Ÿ��� ���� ������ �� �ݸ���
    //void DamageOnDistance(float distance)

    //����� ������ �Ÿ��� ���
    //Vector3 aaa= Vector3.Distance(this.transform.position, gameObject.name.Contains("Controller"))

    //�� ���� ��Ÿ����� ������

    //�������� �ش�

    // �浹ü�� �±װ� player�϶�
    //if (collision.gameObject.CompareTag("Player"))
    //{
    //    //DamageHandler damageHandler = GetComponent<DamageHandler>();
    //    //1�� ��Ÿ�
    //    float firstDistance = 1.5f;
    //    //2�� ��Ÿ�
    //    float secondDistance = 3.5f;
    //    //3�� ��Ÿ�
    //    float thirdDistance = 5f;

    //    // �Ѿ˰� player�� �浹������ ���� �浹�÷��̾� �����ǰŸ�
    //    float range = Vector3.Distance(transform.position, collision.transform.position);

    //    //��Ÿ� �ȿ� ������ 
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

#region �Ϲ� ���� �ִϸ��̼� �̺�Ʈ
//public void HandleBackEvent()
//{
//    //�ڷ� 0.5f��ŭ ��鸮��ʹ�
//    transform.position = transform.position.z * backSpeed * Time.deltaTime;
//}
#endregion
