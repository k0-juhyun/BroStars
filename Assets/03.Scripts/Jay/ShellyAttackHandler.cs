using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Unity.VisualScripting;
using Photon.Pun.Demo.Asteroids;


public class ShellyAttackHandler : MonoBehaviourPun
{
    private SoundHandler soundHandler;
    private HpHandler hpHandler;
    private MoveHandler moveHandler;
    private AnimatorHandler animatorHandler;
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

    private float TrailDistance = 4f;

    public GameObject Mesh;
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
        //animator = GetComponent<Animator>();
        rb = GetComponent<Rigidbody>();
        moveHandler = GetComponent<MoveHandler>();
    }

    public void ShellyNormalAttack()
    {

        if (Mathf.Abs(attackJoystick.Horizontal) > 0.3f || Mathf.Abs(attackJoystick.Vertical) > 0.3f)
        {
            attackLookPoint.position = new Vector3(attackJoystick.Horizontal + transform.position.x, 4.11f, attackJoystick.Vertical + transform.position.z);

            attackLR.gameObject.SetActive(true);

            transform.LookAt(new Vector3(attackLookPoint.position.x, 5.1f, attackLookPoint.position.z));
            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
        }
        else
        {
            attackLR.gameObject.SetActive(false);
        }
    }

    public void ShellyUltimateAttack()
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
            specialLR.gameObject.SetActive(false);
        }

    }
    public void Shot()
    {
        photonView.RPC(nameof(RpcShot), RpcTarget.All, firePos.transform.position, firePos.transform.forward);
        //photonView.RPC(nameof(RpcSuperShell), RpcTarget.All, firePos.transform.position, firePos.transform.forward);
        //firePos.transform.rotation = originalRotation;
    }
    public void SuperShell()
    {
        photonView.RPC(nameof(RpcSuperShell), RpcTarget.All, firePos.transform.position, firePos.transform.forward);
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

            //���� ������ player �±� 

            if (gameObject.CompareTag("Player"))
            {

                //DamageHandler damageHandler = GetComponent<DamageHandler>();
                //1�� ��Ÿ�
                float firstDistance = 1.5f;
                //2�� ��Ÿ�
                float secondDistance = 3.5f;
                //3�� ��Ÿ�
                float thirdDistance = 5f;

                // �Ѿ˰� player�� �浹������ ���� �浹�÷��̾� �����ǰŸ�
                float range = Vector3.Distance(transform.position, transform.position);

                //��Ÿ� �ȿ� ������ 
                if (range < firstDistance)
                {
                    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage * 5; //5��
                }
                else if (firstDistance < range && range < secondDistance)
                {
                    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage * 3; //3��
                }
                else if (secondDistance < range && range < thirdDistance)
                {
                    bullet.GetComponent<DamageHandler>().damage  = hpHandler.AttackDamage * 1; //1��
                }
            }
            Destroy(bullet, 0.6f);
        }
        //animatorHandler.playTargetAnim("Attack");
    }
    


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

            GameObject bullet = Instantiate(attackBulletFactory, firePos, Quaternion.identity);

            bullet.transform.rotation = Quaternion.LookRotation(bulletDirection);

            if (gameObject.CompareTag("Player"))
            {
                //DamageHandler damageHandler = GetComponent<DamageHandler>();
                //1�� ��Ÿ�
                float firstDistance = 1.5f;
                //2�� ��Ÿ�
                float secondDistance = 3.5f;
                //3�� ��Ÿ�
                float thirdDistance = 5f;

                // �Ѿ˰� player�� �浹������ ���� �浹�÷��̾� �����ǰŸ�
                float range = Vector3.Distance(transform.position, transform.position);

                //��Ÿ� �ȿ� ������ 
                if (range < firstDistance)
                {
                    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
                    //5��
                }

                else if (firstDistance < range && range < secondDistance)
                {
                    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;
                    //3��
                }
                else if (secondDistance < range && range < thirdDistance)
                {
                    bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;

                    //1��
                }
            }



            bullet.GetComponent<DamageHandler>().damage = hpHandler.AttackDamage;

            Destroy(bullet, 0.9f);
        }
        //animatorHandler.playTargetAnim("Attack");
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
