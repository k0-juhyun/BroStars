using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shellybullet : MonoBehaviour
{
    Rigidbody rb;
    public float bulletSpeed = 10.33f;
    Vector3 startPos;

    //넉백힘
    [SerializeField]
    [Header("KnockBackForce")]
    public float knockBackForce = 0.5f;


    public float AutoDestroyTime = 5f;
    //public poolableobject 

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.velocity = transform.forward * bulletSpeed;
        startPos = transform.position;
        //print(this.transform.position);
    }

    // Update is called once per frame
    void Update()
    {
        transform.forward = rb.velocity.normalized;

    }
    //private void OnCollisionEnter(Collision other)
    private void OnTriggerEnter(Collider other)
    {
        //print("OnTriggerEnter : " + other.name);

        //var otherRB = other.gameObject.GetComponent<Rigidbody>();
        //if (otherRB != null)
        //{
        //    otherRB.AddForce(transform.forward * otherRB.mass * 10, ForceMode.Impulse);
        //}



        //상대방과 거리의 따른 데미지 및 콜리젼

        // 충돌체의 태그가 Enemy일때
        BushManager handler = other.gameObject.GetComponent<BushManager>();
        if (handler != null)
        // if (other.gameObject.CompareTag("Player"))
        {
            //1차 사거리
            float firstDistance = 1.5f;
            //2차 사거리
            float secondDistance = 3.5f;
            //3차 사거리
            float thirdDistance = 5f;

            // 총알과 플레이어가 충돌했을때 나와 충돌플레이어 사이의거리
            float range = Vector3.Distance(transform.position, other.transform.position);

            //사거리 안에 있으면 
            if (range < firstDistance)
            {
                //takedamage(5);
            }

            else if (firstDistance < range && range < secondDistance)
            {
                //takedamage(3);
            }
            else if (secondDistance < range && range < thirdDistance)
            {
                //takedamage(1);
            }

            //넉백효과를 주고싶다
            KnockBack(other.gameObject);

        }

        //총알 파괴
        Destroy(this.gameObject);

    }
    //넉백효과
    private void KnockBack(GameObject enemy)
    {
        //print("111");
        ///넉백 방향
        Vector3 knockbackDirection = (enemy.transform.position - transform.position).normalized;

        // 넉백 힘
        Rigidbody enemyRigidbody = enemy.GetComponentInChildren<Rigidbody>();
        if (enemyRigidbody != null)
        {
            //print("2222");
            //enemyRigidbody.AddForce(knockbackDirection * knockBackForce, ForceMode.Impulse);
            enemyRigidbody.AddForce(knockbackDirection * knockBackForce, ForceMode.Impulse);
        }
    }
}