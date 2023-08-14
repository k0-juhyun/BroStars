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
    Joystick joystick;
    private J_AnimatorHandler animatorHandler;
    private Rigidbody rb;
    //�⺻���� ���̽�ƽ
    public Joystick attackJoystick;
    //Ư������ ���̽�ƽ
    public Joystick skillJoystick;
    //�ִϸ��̼� 
    //���η�����
    public LineRenderer attackLR;
    public LineRenderer skillLR;

    //Ʈ���Ϸ�����
    TrailRenderer tr;
    public Vector3 endPosition;
    //�Ѿ˰���

    public GameObject bulletFactory;
    public Transform firePos;

    float curShotDelay = 0;
    float maxShotDelay = 0.5f;
    //���۰���
    public float startAngle = -10;
    //��������Ʈ
    Transform attackLookPoint;
    //���� ��ġ
    Transform rayTransform;
    //�÷��̾�
    Transform player;
    //#region ShotGun Raycast
    ////������ ��� ������ ��
    //public int DamageAmount;
    ////������ ������ �Ÿ�
    //public float TargetDistance;
    ////����ĳ��Ʈ ��ȿ��Ÿ�
    //public float AllowedRange = 100;
    ////����Ʈ
    //public Transform Effect;
    ////��Ÿ�
    //public float attackFireRange;
    ////�������� �Ѱ�
    //public float scaleLimit = 2.0f;
    ////z�� ���Ⱚ
    //public float z = 10f;
    ////���� ����ĳ��Ʈ ����
    //public int count = 8;
    //#endregion
    //����ĳ��Ʈ �´°�
    RaycastHit hitInfo;
    #region AutoAim
    //���� ����Ʈ
    private List<Transform> targets = new List<Transform>();
    #endregion

    // Start is called before the first frame update
    void Awake()
    {
        joystick = FindObjectOfType<Joystick>();
        animator = GetComponent<Animator>();
        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
        //skillLookPoint = transform.GetChild(2).gameObject.GetComponent<Transform>();
        player = GetComponent<Transform>();
        animatorHandler = GetComponent<J_AnimatorHandler>();
        rb = GetComponent<Rigidbody>();
        tr = GetComponent<TrailRenderer>();
        //tr.startColor = new Color(1, 0, 0, 0.7f);
        //tr.endColor = new Color(1, 0, 0, 0.7f);
        //Destroy(gameObject, 2f);


        //�ִϸ�����
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

                //animatorHandler.playTargetAnim("attack");
                
                transform.LookAt(new Vector3(attackLookPoint.position.x, 6.1f, attackLookPoint.position.z));

                transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
                Shoot();
                AutoAim();
                //tr.transform.position = Vector3.Lerp(transform.position, endPosition, Time.deltaTime * 2f);
                curShotDelay = 0;
            }
        }
    }
    #region Ư������ ���۽�
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
            GameObject bullet = Instantiate(bulletFactory, firePos.position, firePos.rotation);
            //���� ����
            firePos.transform.Rotate(0, -(startAngle * 2) / 4, 0);
            Destroy(bullet, 2f);
        }
        animator.Play("attack");
    }
    //void ShootRay()
    //{
    //    float radius = Random.Range(0, scaleLimit);
    //    float angle = Random.Range(0, 10 * Mathf.PI);
    //    Vector3 dir = new Vector3(radius * Mathf.Cos(angle), radius * Mathf.Sin(angle), z);
    //    dir = transform.TransformDirection(dir);
    //    Ray r = new Ray(transform.position, dir);   


    //    if (Physics.Raycast(transform.position, transform.forward, out hitInfo, attackFireRange))
    //    {
    //        Debug.Log(hitInfo.collider.gameObject);
    //        TargetDistance = hitInfo.distance;
    //        if(TargetDistance < AllowedRange)
    //        {
    //            var particleClone = Instantiate(Effect, hitInfo.point, Quaternion.LookRotation(hitInfo.normal));
    //            Destroy(particleClone.gameObject, 2);
    //            hitInfo.transform.SendMessage("DeductPoints", DamageAmount, SendMessageOptions.DontRequireReceiver);
    //            //DrawFanShape();
    //            if (attackLR.positionCount > 0)
    //            {
    //                //Instantiate(bulletFactory, bulletSpawnPoint.position, bulletSpawnPoint.rotation);
    //            }
    //            Debug.DrawLine(transform.position, hitInfo.point);

    //        }

    //    }
    //    else
    //    {
    //        attackLR.positionCount = 0;
    //       // attackLR.SetPosition(1, transform.position + transform.forward * attackFireRange);
    //    }

    //}
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
