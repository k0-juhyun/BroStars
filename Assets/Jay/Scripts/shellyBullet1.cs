using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shellyBullet1 : MonoBehaviour
{
    //총알이 앞으로 나간다
    public float speed = 10.33f;
    Rigidbody rb;
    //총알  최대거리
    public float maxDistance = 5f;

    //총알 생성위치
    private Vector3 firePos;
    // Start is called before the first frame update
    void Start()
    {
        firePos = transform.position;
        rb = GetComponent<Rigidbody>();
        
        //rb.velocity = transform.forward * speed;
    }

    // Update is called once per frame
    void Update()
    {
        //현재거리 = 총구와 총알 사이 거리
        float currentDistnace = Vector3.Distance(firePos, transform.position);

        //앞으로 이동하고싶다
        transform.position += transform.forward * speed * Time.deltaTime;

        if(currentDistnace > maxDistance)
        {
            //총알 파괴
            Destroy(gameObject);
        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        //만약 부딪힌 물체에 리지드바디가 있다면
        var otherRB = collision.gameObject.GetComponent<Rigidbody>();
        //내 앞방향으로 힘을 가하고싶다
        if (otherRB != null)
        {
            otherRB.AddForce(transform.forward * otherRB.mass * 3, ForceMode.Impulse);
        }
        //Destroy(this.gameObject);
        
    }
}
