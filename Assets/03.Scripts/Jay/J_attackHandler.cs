using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class J_attackHandler : MonoBehaviour
{
    //기본공격 조이스틱
    public Joystick attackJoystick;
    //특수공격 조이스틱
    public Joystick skillJoystick;
    //애니메이션 

    //라인렌더러
    public LineRenderer attackLR;
    public LineRenderer skillLR;
    //총알공장

    GameObject bulletFactory;

    //공격포인트
    Transform attackLookPoint;
    //레이 위치
    Transform rayTransform;
    //플레이어
    Transform player;
    #region ShotGun Raycast
    //명중한 대상 데미지 양
    public int DamageAmount;
    //명중한 대상과의 거리
    public float TargetDistance;
    //레이캐스트 유효사거리
    public float AllowedRange = 100;
    //이펙트
    public Transform Effect;
    //사거리
    public float attackFireRange;
    //반지름의 한계
    public float scaleLimit = 2.0f;
    //z축 방향값
    public float z = 10f;
    //랜덤 레이캐스트 개수
    public int count = 8;
    #endregion
    //레이캐스트 맞는곳
    RaycastHit hitInfo;
    #region FanShapeRenderer
    public int fanSegments = 30; // 부채꼴을 얼마나 세분화할지 결정하는 변수
    public float radius = 1.0f; // 부채꼴의 반지름
    public float startAngle = 30.0f; // 시작 각도 (degree)
    public float endAngle = 150.0f; // 종료 각도 (degree)
    #endregion


    // Start is called before the first frame update
    void Awake()
    {
        attackLookPoint = transform.GetChild(1).gameObject.GetComponent<Transform>();
        player = GetComponent<Transform>();
        //애니메이터
    }

    //공격
    public void HandleNormalAttack()
    {
        //공격키가 0이 아니면
        if (attackJoystick.Horizontal != 0 || attackJoystick.Vertical != 0)
        {
            //조준 방향
            Vector3 aimDirection = new Vector3(attackJoystick.Horizontal, 0f, attackJoystick.Vertical);
            //총이 조준하는 위치
            Vector3 aimPos = transform.position + aimDirection * attackFireRange;
            //총이 조준한 위치를 쏘는 위치 
           // attackLookPoint.position = new Vector3(aimPos.x, 6.1f, aimPos.z);
            //움직임
            transform.LookAt(new Vector3(aimPos.x, 6.1f, aimPos.z));
            //회전
            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
            //총 쏘기
            //if (ShouldShoot(aimDirection))
            {
                Shoot();
                //SpecialShoot();
            }
        }
    }

    private bool ShouldShoot(Vector3 aimDirection)
    {
        //슈팅 조건 : 1. attack조이스틱 눌렀다 2.사거리 안에 들어왔다 3. 
        
        //

        return false;
    }

    void Shoot()
    {
        //슈팅 로직
        if (attackJoystick.Horizontal > 0 || attackJoystick.Horizontal < 0 || attackJoystick.Vertical > 0 || attackJoystick.Vertical < 0)
        {
            //라인랜더러
            //attackLR.SetPosition(0,new Vector3(transform.position.x, transform.position.y, transform.position.z));

            //총알 생성
            //GameObject bullet = Instantiate(bulletFactory);
            
            //RaycastHit
            ShootRay();

            //attack애니메이션

            //이펙트

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
        attackLR.positionCount = fanSegments + 2; // 시작점과 종료점을 추가하기 위해 +2

        float deltaAngle = (endAngle - startAngle) / fanSegments;
        float currentAngle = startAngle;

        Vector3[] positions = new Vector3[fanSegments + 2];
        positions[0] = transform.position; // 부채꼴의 중심점 (원의 중심)
        Debug.Log(positions[0]);

        for (int i = 1; i <= fanSegments + 1; i++)
        {
            // 각도에 따라 점의 위치 계산
            float x = Mathf.Cos(currentAngle * Mathf.Deg2Rad) * radius;
            float y = Mathf.Sin(currentAngle * Mathf.Deg2Rad) * radius;
            positions[i] = new Vector3(x, y, 0f);
            currentAngle += deltaAngle;
        }
        attackLR.SetPositions(positions);
    }
    #endregion
    #region EnemyDamage 
    //상대방과 거리의 따른 데미지 및 콜리젼
    //private void OnCollisionEnter(Collision collision)
    //{
    //    // 충돌했을때
    //    // 충돌체의 태그가 player일때
    //    if (collision.other.gameObject.CompareTag("Player"))
    //    {
    //        float d1, d2, d3, range;
    //        // 총알과 player가 충돌했을때 나와 충돌플레이어 사이의거리
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
    //자동으로 가장 가까운 적군에게 총을 쏜다
    #endregion

    //스킬
    //void SpecialShoot()
    //{
    //    //슈팅 로직

    //    //총알 생성

    //    //Raycasthit

    //    //넉백 효과

    //    //애니메이션

    //    //이펙트

    //    //
    //}

}
