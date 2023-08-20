using Photon.Pun.Demo.Asteroids;
using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using UnityEngine.SocialPlatforms;
using Random = UnityEngine.Random;

public class J_attackHandler : MonoBehaviour
{
    Animator animator;
    private Rigidbody rb;
    //�ִϸ��̼� 
    //private J_AnimatorHandler animatorHandler;
    [Header("JoyStick")]
    //�⺻���� ���̽�ƽ
    public Joystick attackJoystick;
    //Ư������ ���̽�ƽ
    public Joystick skillJoystick;

    [Header("LineRenderer Object")]
    public LineRenderer attackLR;
    public LineRenderer skillLR;
    [Header("Fire Info")]
    //�Ѿ˰���
    public GameObject attackBulletFactory;
    public GameObject specialBulletFactory;
    public Transform firePos;
    [Header("Cartridge")]
    //īƮ���� 
    public float shootingSlowness;
    public GameObject Cardridge;
    //private bool beingHandled = false;
    [Header("TrailRenderer")]
    //Ʈ���Ϸ�����
    TrailRenderer tr;
    public Vector3 endPosition;
    float curShotDelay = 0;
    float maxShotDelay = 0.5f;
    //���۰���
    public float startAngle = -10;

    [SerializeField]
    [Header("ParticleSystem")]
    private ParticleSystem[] firePrefab;

    //��������Ʈ
    Transform attackLookPoint;
    Transform skillLookPoint;
    //���� ��ġ
    Transform rayTransform;
    //�÷��̾�
    Transform player;
    //����ĳ��Ʈ �´°�
    RaycastHit hitInfo;

    #region AutoAim
    //���� ����Ʈ
    private List<Transform> targets = new List<Transform>();
    #endregion

    // Start is called before the first frame update
    void Awake()
    {
        //joystick = FindObjectOfType<Joystick>();
        animator = GetComponent<Animator>();
        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
        skillLookPoint = transform.GetChild(2).gameObject.GetComponent<Transform>();
        player = GetComponent<Transform>();
        //animatorHandler = GetComponent<J_AnimatorHandler>();
        rb = GetComponent<Rigidbody>();
        tr = GetComponent<TrailRenderer>();
        //�ִϸ�����
    }
    private IEnumerator Shooting()
    {
        //beingHandled = true;
        GameObject cardridge;
        for (int i = 0; i <= 5; i++)
        {
            if (firePos) cardridge = (GameObject)Instantiate(Cardridge, firePos.transform.position + firePos.transform.right, Quaternion.identity);
            else cardridge = (GameObject)Instantiate(Cardridge, firePos.transform.position + firePos.transform.forward, Quaternion.identity);
            //�ڽ� ����������Ʈ���� ����
            cardridge.transform.parent = this.transform;
        }
        yield return new WaitForSeconds(shootingSlowness);

        //beingHandled = false;

    }
    //����
    public void HandleNormalAttack()
    {
        curShotDelay += Time.deltaTime;
        if (attackJoystick.Horizontal > 0 || attackJoystick.Horizontal < 0 || attackJoystick.Vertical > 0 || attackJoystick.Vertical < 0)
        {
            if (Mathf.Abs(attackJoystick.Horizontal) < 0.5f && Mathf.Abs(attackJoystick.Vertical) < 0.5f && curShotDelay >= maxShotDelay)
            {
                attackLookPoint.position = new Vector3(attackJoystick.Horizontal + transform.position.x, 6.1f, attackJoystick.Vertical + transform.position.z);
                transform.LookAt(new Vector3(attackLookPoint.position.x, 6.1f, attackLookPoint.position.z));

                transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
                Shoot();
                StartCoroutine(Shooting());
                //AutoAim();
                curShotDelay = 0;
            }
        }
    }



    #region Ư������ ���۽�
    public void HandleSpecialAttack()
    {
        curShotDelay += Time.deltaTime;
        //Vector3 joystickDirection = new Vector3(skillJoystick.Horizontal, 0.5f, skillJoystick.Vertical);
        if(Mathf.Abs(skillJoystick.Horizontal) >  0  || Mathf.Abs(skillJoystick.Vertical) > 0 || Mathf.Abs(skillJoystick.Vertical) < 0 || Mathf.Abs(skillJoystick.Horizontal) < 0)
        {
            if (Mathf.Abs(skillJoystick.Horizontal) < 0.5f && Mathf.Abs(skillJoystick.Vertical) < 0.5f && curShotDelay >= maxShotDelay)
            {
                skillLookPoint.position = new Vector3(skillJoystick.Horizontal + transform.position.x, 4.11f, skillJoystick.Vertical + transform.position.z);
                transform.LookAt(new Vector3(skillLookPoint.position.x, 4.1f, skillLookPoint.position.z));
                transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
                SuperShell();
                StartCoroutine(Shooting());
                curShotDelay = 0;

            }

        }
    }


    //public void HandleSpecialAttack()
    //{
    //    if (Mathf.Abs(attackJoystick.Horizontal) > 0.3f || Mathf.Abs(attackJoystick.Vertical) > 0.3f)
    //    {
    //        if (attackLR.gameObject.activeInHierarchy == false)
    //        {
    //            attackLR.gameObject.SetActive(true);
    //        }
    //        attackLookPoint.position = new Vector3(attackJoystick.Horizontal + transform.position.x, 4.11f, attackJoystick.Vertical + transform.position.z);

    //        transform.LookAt(new Vector3(attackLookPoint.position.x, 4.11f, attackLookPoint.position.z));

    //        transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);

    //        attackLR.SetPosition(0, new Vector3(transform.position.x, 4.11f, transform.position.z));
    //        if (Physics.Raycast(transform.position, transform.forward, out hit, TrailDistance))
    //        {
    //            attackLR.SetPosition(1, hit.point);
    //        }
    //        else
    //        {
    //            Vector3 yUp = new Vector3(0, 0.1f, 0);
    //            attackLR.SetPosition(1, transform.position + transform.forward * TrailDistance + yUp);
    //        }
    //    }
    //    else
    //    {
    //        attackLR.gameObject.SetActive(false);
    //    }
    //}
    #endregion

    //    //����Ű�� 0�� �ƴϸ�
    //    if (attackJoystick.Horizontal != 0 || attackJoystick.Vertical != 0)
    //    {
    //        //���� ����
    //        Vector3 aimDirection = new Vector3(attackJoystick.Horizontal, 0f, attackJoystick.Vertical);
    //        //���� �����ϴ� ��ġ
    //        Vector3 aimPos = transform.position + aimDirection * attackFireRange;
    //        //���� ������ ��ġ�� ��� ��ġ 
    //       // attackLookPoint.position = new Vector3(aimPos.x, 6.1f, aimPos.z);
    //        //������
    //        transform.LookAt(new Vector3(aimPos.x, 6.1f, aimPos.z));
    //        //ȸ��
    //        transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
    //        //�� ���
    //        //if (ShouldShoot(aimDirection))
    //        {
    //            //Shoot();
    //            //SpecialShoot();
    //        }
    //    }
    //}
    void Shoot()
    {
        //�Ѿ� ������ ��ġ�� ������ ����
        firePos.transform.localEulerAngles = new Vector3(0, startAngle, 0);
        for (int i = 0; i < 5; i++)
        {
            GameObject bullet = Instantiate(attackBulletFactory, firePos.transform.position,Quaternion.identity);
            //�ڽ� ����������Ʈ���� ����
            bullet.transform.parent = this.transform;
            //���� ����
            firePos.transform.Rotate(0, -(startAngle * 2) / 4, 0);
            Destroy(bullet, 2f);
        }
        animator.Play("attack");

    }
    //Ư������
    void SuperShell()
    {
        //�Ѿ� ������ ��ġ�� ������ ����
        firePos.transform.localEulerAngles = new Vector3(0, startAngle, 0);
        for (int i = 0; i < 10; i++)
        {
            GameObject bullet = Instantiate(specialBulletFactory, firePos.transform.position,Quaternion.identity);
            bullet.transform.parent = this.transform;
            //���� ����
            firePos.transform.Rotate(0, -(startAngle * 2) / 4, 0);
            Destroy(bullet, 2f);
        }
        animator.Play("attack");
        //StartCoroutine(Shooting());
    }
    //private void OnCollisionEnter(Collision collision)
    //{
    //    if(collision.gameObject.CompareTag("SpecialBullet"))
    //    {
    //        Destroy(collision.gameObject);
    //    }
    //    if (collision.gameObject.CompareTag("Obstacle"))
    //    {
    //        Destroy(collision.gameObject);
    //    }
    //}

    public void HandleExplosionSmoke()
    {
        ParticleSystem particles = Instantiate(firePrefab[0], transform.position, Quaternion.identity);
        particles.Play();

        Destroy(particles.gameObject, particles.main.duration);
    }
    public void HandleGrenadeSmoke()
    {
        ParticleSystem particles = Instantiate(firePrefab[1], transform.position, Quaternion.identity);
        particles.Play();

        Destroy(particles.gameObject, particles.main.duration);
    }

    #region FanShapeRenderer
    //void DrawFanShape()
    //{
    //    Vector3 interV = target.position - transform.position;

    //    //���� Ÿ�� ���� �Ÿ��� �ݰ溸�� ���� ��
    //    if (interV.magnitude <= radius)
    //    {
    //        #region ������
    //        //    float dot = Vector3.Dot(interV.normalized, transform.forward);
    //        //    float theta = Mathf.Acos(dot);
    //        //    float degree = Mathf.Rad2Deg * theta;

    //        //    // �þ߰� �����ϱ�
    //        //    bool isCollision = degree <= angleRange / 2f;

    //        //    if (isCollision)
    //        //    {
    //        //        // ��ä�� ��� ������ ���
    //        //        int vertexCount = 30; // �ε巴�� ���
    //        //        Vector3[] vertices = new Vector3[vertexCount + 1];
    //        //        vertices[0] = transform.position;
    //        //        float angleStep = angleRange / vertexCount;

    //        //        for (int i = 0; i < vertexCount; i++)
    //        //        {
    //        //            float angle = -angleRange / 2 + i * angleStep;
    //        //            Vector3 direction = Quaternion.Euler(0, angle, 0) * transform.forward;
    //        //            vertices[i + 1] = transform.position + direction * radius;
    //        //        }

    //        //        // ���η������� ��ġ
    //        //        attackLR.positionCount = vertices.Length;
    //        //        attackLR.SetPositions(vertices);
    //        //    }
    //        //    else
    //        //    {
    //        //        // ���η����� ��ġ �ʱ�ȭ
    //        //        attackLR.positionCount = 0;
    //        //    }
    //        //}
    //        //else
    //        //{
    //        //    // ���η����� ��ġ �ʱ�ȭ
    //        //    attackLR.positionCount = 0;
    //        #endregion
    //        attackLR = GetComponent<LineRenderer>();
    //        int numPoints = 99;
    //        float angle = 60;
    //        attackLR.positionCount = numPoints + 1;

    //        Vector3 center = transform.position;

    //        float angleInradians = angle * Mathf.Deg2Rad;

    //        float angleStep = angleInradians / numPoints;

    //        for (int i = 0; i <= numPoints; i++)
    //        {
    //            float x = Mathf.Sin(i * angleStep) * radius;
    //            float y = Mathf.Cos(i * angleStep) * radius;

    //            attackLR.SetPosition(i,center + new Vector3(x, y, 0));
    //        }
    //    }
    //}
    //private void OnDrawGizmosSelected()
    //{
    //    Gizmos.color = Color.yellow;
    //}
    #endregion
    #region EnemyDamage 
    //����� �Ÿ��� ���� ������ �� �ݸ���
    //private void OnCollisionEnter(Collision collision)
    //{
    //    // �浹������
    //    // �浹ü�� �±װ� player�϶�
    //    if (collision.other.gameObject.CompareTag("Player"))
    //    {
    //        //��Ÿ�
    //        float distance = 10;

    //        float range;

    //        // �Ѿ˰� player�� �浹������ ���� �浹�÷��̾� �����ǰŸ�
    //        range = Vector3.Distance(transform.position, collision.transform.position);

    //        //��Ÿ� �ȿ� ������ 
    //        if (range < d1)
    //        {
    //            //takedamage(5);
    //        }

    //        else if (d1 < range && range < d2)
    //        {

    //        }
    //    }
    //}
    #endregion
    #region AutoAim
    //�ڵ����� ���� ����� �������� ���� ���
    public void AutoAim()
    {
        //���� ����� ����
        Transform nearestTarget = GetNearestTarget();
        if (nearestTarget != null)
        {
            //���� ����� ������ ����
            Vector3 targetDir = (nearestTarget.position - transform.position).normalized;
        }
    }

    private Transform GetNearestTarget()
    {
        float closestDistance = Mathf.Infinity;
        Transform nearestTarget = null;

        //  ��� ���� �߰��ϰ� ���� ����� ���� �߰��ϴ� �ݺ�
        foreach (Transform target in targets)
        {
            float distance = Vector3.Distance(transform.position, target.position);
            if (distance < closestDistance)
            {
                closestDistance = distance;
                nearestTarget = target;
            }
        }

        return nearestTarget;
    }
    public void AddEnemy(Transform enemyTransform)
    {
        targets.Add(enemyTransform);
    }

    // ��Ͽ� �� ����
    public void RemoveEnemy(Transform enemyTransform)
    {
        targets.Remove(enemyTransform);
    }
    #endregion

    //AutoAim
    
    void AutoAims()
    {

    }

    //��ų
    //void SpecialShoot()
    //{
    //    //���� ����

    //    //�Ѿ� ����

    //    //Raycasthit

    //    //�˹� ȿ��

    //    //�ִϸ��̼�

    //    //����Ʈ

    //    //
    //}

}
