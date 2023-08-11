using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using Random = UnityEngine.Random;

public class J_attackHandler : MonoBehaviour
{

    Joystick joystick;
    private AnimatorHandler animatorHandler;
    private Rigidbody rb;
    //�⺻���� ���̽�ƽ
    public Joystick attackJoystick;
    //Ư������ ���̽�ƽ
    public Joystick skillJoystick;
    //�ִϸ��̼� 

    //���η�����
    public LineRenderer attackLR;
    public LineRenderer skillLR;
    //�Ѿ˰���

    GameObject bulletFactory;
    public Transform bulletSpawnPoint;

    //��������Ʈ
    Transform attackLookPoint;
    //���� ��ġ
    Transform rayTransform;
    //�÷��̾�
    Transform player;
    #region ShotGun Raycast
    //������ ��� ������ ��
    public int DamageAmount;
    //������ ������ �Ÿ�
    public float TargetDistance;
    //����ĳ��Ʈ ��ȿ��Ÿ�
    public float AllowedRange = 100;
    //����Ʈ
    public Transform Effect;
    //��Ÿ�
    public float attackFireRange;
    //�������� �Ѱ�
    public float scaleLimit = 2.0f;
    //z�� ���Ⱚ
    public float z = 10f;
    //���� ����ĳ��Ʈ ����
    public int count = 8;
    #endregion
    //����ĳ��Ʈ �´°�
    RaycastHit hitInfo;
    #region ��ä��
    public Transform target;    // ��ä�ÿ� ���ԵǴ��� �Ǻ��� Ÿ��
    public float angleRange = 30f;
    public float radius = 3f;

    Color _blue = new Color(0f, 0f, 1f, 0.2f);
    Color _red = new Color(1f, 0f, 0f, 0.2f);

    bool isCollision = false;

    #endregion

    // Start is called before the first frame update
    void Awake()
    {
        joystick = FindObjectOfType<Joystick>();

        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
        //skillLookPoint = transform.GetChild(2).gameObject.GetComponent<Transform>();
        player = GetComponent<Transform>();
        animatorHandler = GetComponent<AnimatorHandler>();
        rb = GetComponent<Rigidbody>();
        
        //�ִϸ�����
    }

    //����
    public void HandleNormalAttack()
    {
        //����Ű�� 0�� �ƴϸ�
        if (attackJoystick.Horizontal != 0 || attackJoystick.Vertical != 0)
        {
            //���� ����
            Vector3 aimDirection = new Vector3(attackJoystick.Horizontal, 0f, attackJoystick.Vertical);
            //���� �����ϴ� ��ġ
            Vector3 aimPos = transform.position + aimDirection * attackFireRange;
            //���� ������ ��ġ�� ��� ��ġ 
           // attackLookPoint.position = new Vector3(aimPos.x, 6.1f, aimPos.z);
            //������
            transform.LookAt(new Vector3(aimPos.x, 6.1f, aimPos.z));
            //ȸ��
            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
            //�� ���
            //if (ShouldShoot(aimDirection))
            {
                Shoot();
                //SpecialShoot();
            }
        }
    }

    private bool ShouldShoot(Vector3 aimDirection)
    {
        //���� ���� : 1. attack���̽�ƽ ������ 2.��Ÿ� �ȿ� ���Դ� 3. 
        
        //

        return false;
    }

    void Shoot()
    {
        //���� ����
        if (attackJoystick.Horizontal > 0 || attackJoystick.Horizontal < 0 || attackJoystick.Vertical > 0 || attackJoystick.Vertical < 0)
        {
            //���η�����
            //attackLR.SetPosition(0,new Vector3(transform.position.x, transform.position.y, transform.position.z));

            //�Ѿ� ����

            //RaycastHit
            ShootRay();

            //attack�ִϸ��̼�

            //����Ʈ

        }
    }
    void ShootRay()
    {
        float radius = Random.Range(0, scaleLimit);
        float angle = Random.Range(0, 10 * Mathf.PI);
        Vector3 dir = new Vector3(radius * Mathf.Cos(angle), radius * Mathf.Sin(angle), z);
        dir = transform.TransformDirection(dir);
        Ray r = new Ray(transform.position, dir);   


        if (Physics.Raycast(transform.position, transform.forward, out hitInfo, attackFireRange))
        {
            Debug.Log(hitInfo.collider.gameObject);
            TargetDistance = hitInfo.distance;
            if(TargetDistance < AllowedRange)
            {
                var particleClone = Instantiate(Effect, hitInfo.point, Quaternion.LookRotation(hitInfo.normal));
                Destroy(particleClone.gameObject, 2);
                hitInfo.transform.SendMessage("DeductPoints", DamageAmount, SendMessageOptions.DontRequireReceiver);
                DrawFanShape();
                if (attackLR.positionCount > 0)
                {
                    //Instantiate(bulletFactory, bulletSpawnPoint.position, bulletSpawnPoint.rotation);
                }
                Debug.DrawLine(transform.position, hitInfo.point);

            }
            
        }
        else
        {
            attackLR.positionCount = 0;
           // attackLR.SetPosition(1, transform.position + transform.forward * attackFireRange);
        }

    }
    #region FanShapeRenderer
    void DrawFanShape()
    {
        Vector3 interV = target.position - transform.position;

        //���� Ÿ�� ���� �Ÿ��� �ݰ溸�� ���� ��
        if (interV.magnitude <= radius)
        {
            #region ������
            //    float dot = Vector3.Dot(interV.normalized, transform.forward);
            //    float theta = Mathf.Acos(dot);
            //    float degree = Mathf.Rad2Deg * theta;

            //    // �þ߰� �����ϱ�
            //    bool isCollision = degree <= angleRange / 2f;

            //    if (isCollision)
            //    {
            //        // ��ä�� ��� ������ ���
            //        int vertexCount = 30; // �ε巴�� ���
            //        Vector3[] vertices = new Vector3[vertexCount + 1];
            //        vertices[0] = transform.position;
            //        float angleStep = angleRange / vertexCount;

            //        for (int i = 0; i < vertexCount; i++)
            //        {
            //            float angle = -angleRange / 2 + i * angleStep;
            //            Vector3 direction = Quaternion.Euler(0, angle, 0) * transform.forward;
            //            vertices[i + 1] = transform.position + direction * radius;
            //        }

            //        // ���η������� ��ġ
            //        attackLR.positionCount = vertices.Length;
            //        attackLR.SetPositions(vertices);
            //    }
            //    else
            //    {
            //        // ���η����� ��ġ �ʱ�ȭ
            //        attackLR.positionCount = 0;
            //    }
            //}
            //else
            //{
            //    // ���η����� ��ġ �ʱ�ȭ
            //    attackLR.positionCount = 0;
            #endregion
            attackLR = GetComponent<LineRenderer>();
            int numPoints = 99;
            float angle = 60;
            attackLR.positionCount = numPoints + 1;

            Vector3 center = transform.position;

            float angleInradians = angle * Mathf.Deg2Rad;

            float angleStep = angleInradians / numPoints;

            for (int i = 0; i <= numPoints; i++)
            {
                float x = Mathf.Sin(i * angleStep) * radius;
                float y = Mathf.Cos(i * angleStep) * radius;

                attackLR.SetPosition(i,center + new Vector3(x, y, 0));
            }
        }
    }
    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.yellow;
    }
    #endregion
    #region EnemyDamage 
    //����� �Ÿ��� ���� ������ �� �ݸ���
    //private void OnCollisionEnter(Collision collision)
    //{
    //    // �浹������
    //    // �浹ü�� �±װ� player�϶�
    //    if (collision.other.gameObject.CompareTag("Player"))
    //    {
    //        float d1, d2, d3, range;
    //        // �Ѿ˰� player�� �浹������ ���� �浹�÷��̾� �����ǰŸ�
    //        range = Vector3.Distance(transform.position, collision.transform.position);

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
    #endregion

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
