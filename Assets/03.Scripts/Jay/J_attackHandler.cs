using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class J_attackHandler : MonoBehaviour
{
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
    #region FanShapeRenderer
    public int fanSegments = 30; // ��ä���� �󸶳� ����ȭ���� �����ϴ� ����
    public float radius = 1.0f; // ��ä���� ������
    public float startAngle = 30.0f; // ���� ���� (degree)
    public float endAngle = 150.0f; // ���� ���� (degree)
    #endregion


    // Start is called before the first frame update
    void Awake()
    {
        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
        player = GetComponent<Transform>();
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
            //GameObject bullet = Instantiate(bulletFactory);
            
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
                Debug.DrawLine(transform.position, hitInfo.point);
            }

        }
        else
        {
           // attackLR.SetPosition(1, transform.position + transform.forward * attackFireRange);
        }

    }
    #region FanShapeRenderer
    void DrawFanShape()
    {
        attackLR.positionCount = fanSegments + 2; // �������� �������� �߰��ϱ� ���� +2

        float deltaAngle = (endAngle - startAngle) / fanSegments;
        float currentAngle = startAngle;

        Vector3[] positions = new Vector3[fanSegments + 2];
        positions[0] = transform.position; // ��ä���� �߽��� (���� �߽�)
        Debug.Log(positions[0]);

        for (int i = 1; i <= fanSegments + 1; i++)
        {
            // ������ ���� ���� ��ġ ���
            float x = Mathf.Cos(currentAngle * Mathf.Deg2Rad) * radius;
            float y = Mathf.Sin(currentAngle * Mathf.Deg2Rad) * radius;
            positions[i] = new Vector3(x, y, 0f);
            currentAngle += deltaAngle;
        }
        attackLR.SetPositions(positions);
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
