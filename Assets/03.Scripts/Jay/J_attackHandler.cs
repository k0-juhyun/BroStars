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
    //기본공격 조이스틱
    public Joystick attackJoystick;
    //특수공격 조이스틱
    public Joystick skillJoystick;
    //애니메이션 
    //라인렌더러
    public LineRenderer attackLR;
    public LineRenderer skillLR;

    //트레일렌더러
    TrailRenderer tr;
    public Vector3 endPosition;
    //총알공장

    public GameObject bulletFactory;
    public Transform firePos;

    float curShotDelay = 0;
    float maxShotDelay = 0.5f;
    //시작각도
    public float startAngle = -10;
    //공격포인트
    Transform attackLookPoint;
    //레이 위치
    Transform rayTransform;
    //플레이어
    Transform player;
    //#region ShotGun Raycast
    ////명중한 대상 데미지 양
    //public int DamageAmount;
    ////명중한 대상과의 거리
    //public float TargetDistance;
    ////레이캐스트 유효사거리
    //public float AllowedRange = 100;
    ////이펙트
    //public Transform Effect;
    ////사거리
    //public float attackFireRange;
    ////반지름의 한계
    //public float scaleLimit = 2.0f;
    ////z축 방향값
    //public float z = 10f;
    ////랜덤 레이캐스트 개수
    //public int count = 8;
    //#endregion
    //레이캐스트 맞는곳
    RaycastHit hitInfo;
    #region AutoAim
    //적군 리스트
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


        //애니메이터
    }

    //공격
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
    #region 특수공격 슈퍼쉘
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

    //    //공격키가 0이 아니면
    //    if (attackJoystick.Horizontal != 0 || attackJoystick.Vertical != 0)
    //    {
    //        //조준 방향
    //        Vector3 aimDirection = new Vector3(attackJoystick.Horizontal, 0f, attackJoystick.Vertical);
    //        //총이 조준하는 위치
    //        Vector3 aimPos = transform.position + aimDirection * attackFireRange;
    //        //총이 조준한 위치를 쏘는 위치 
    //       // attackLookPoint.position = new Vector3(aimPos.x, 6.1f, aimPos.z);
    //        //움직임
    //        transform.LookAt(new Vector3(aimPos.x, 6.1f, aimPos.z));
    //        //회전
    //        transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
    //        //총 쏘기
    //        //if (ShouldShoot(aimDirection))
    //        {
    //            //Shoot();
    //            //SpecialShoot();
    //        }
    //    }
    //}
    void Shoot()
    {
        //총알 나오는 위치의 각도를 조정
        firePos.transform.localEulerAngles = new Vector3(0, startAngle, 0);
        for (int i = 0; i < 5; i++)
        {
            GameObject bullet = Instantiate(bulletFactory, firePos.position, firePos.rotation);
            //각도 설정
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

    //    //나와 타겟 사이 거리가 반경보다 작을 때
    //    if (interV.magnitude <= radius)
    //    {
    //        #region 수정전
    //        //    float dot = Vector3.Dot(interV.normalized, transform.forward);
    //        //    float theta = Mathf.Acos(dot);
    //        //    float degree = Mathf.Rad2Deg * theta;

    //        //    // 시야각 결정하기
    //        //    bool isCollision = degree <= angleRange / 2f;

    //        //    if (isCollision)
    //        //    {
    //        //        // 부채꼴 모양 꼭지점 계산
    //        //        int vertexCount = 30; // 부드럽게 계산
    //        //        Vector3[] vertices = new Vector3[vertexCount + 1];
    //        //        vertices[0] = transform.position;
    //        //        float angleStep = angleRange / vertexCount;

    //        //        for (int i = 0; i < vertexCount; i++)
    //        //        {
    //        //            float angle = -angleRange / 2 + i * angleStep;
    //        //            Vector3 direction = Quaternion.Euler(0, angle, 0) * transform.forward;
    //        //            vertices[i + 1] = transform.position + direction * radius;
    //        //        }

    //        //        // 라인렌더러의 위치
    //        //        attackLR.positionCount = vertices.Length;
    //        //        attackLR.SetPositions(vertices);
    //        //    }
    //        //    else
    //        //    {
    //        //        // 라인렌더러 위치 초기화
    //        //        attackLR.positionCount = 0;
    //        //    }
    //        //}
    //        //else
    //        //{
    //        //    // 라인렌더러 위치 초기화
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
    //상대방과 거리의 따른 데미지 및 콜리젼
    //private void OnCollisionEnter(Collision collision)
    //{
    //    // 충돌했을때
    //    // 충돌체의 태그가 player일때
    //    if (collision.other.gameObject.CompareTag("Player"))
    //    {
    //        //사거리
    //        float distance = 10;

    //        float range;

    //        // 총알과 player가 충돌했을때 나와 충돌플레이어 사이의거리
    //        range = Vector3.Distance(transform.position, collision.transform.position);

    //        //사거리 안에 있으면 
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
    public void AutoAim()
    {
        //가장 가까운 적군
        Transform nearestTarget = GetNearestTarget();
        if (nearestTarget != null)
        {
            //가장 가까운 적군의 방향
            Vector3 targetDir = (nearestTarget.position - transform.position).normalized;
        }
    }

    private Transform GetNearestTarget()
    {
        float closestDistance = Mathf.Infinity;
        Transform nearestTarget = null;

        //  모든 적을 발견하고 가장 가까운 적을 발견하는 반복
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

    // 목록에 적 제거
    public void RemoveEnemy(Transform enemyTransform)
    {
        targets.Remove(enemyTransform);
    }
    #endregion

    //AutoAim
    
    void AutoAims()
    {

    }

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
