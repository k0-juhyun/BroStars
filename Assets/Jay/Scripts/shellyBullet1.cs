using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shellyBullet1 : MonoBehaviour
{
    [Header("Speed")]
    Rigidbody rb;
    public float bulletSpeed = 10.33f;
    Vector3 startPos;

    //public GameObject attackBulelt;
    //public GameObject specialBullet;
    SphereCollider sphereCollider;

    [SerializeField]
    [Header("Particle")]
    public ParticleSystem[] bulletPrefab;

    //[Header("KnockBack")]
    //public float knockBackSpeed = 0.5f;

    // Start is called before the first frame update
    void Start()
    {
        this.gameObject.transform.SetParent(null);
        rb = GetComponent<Rigidbody>();
        startPos = transform.position;
    }
    private void OnEnable()
    {
        sphereCollider = GetComponent<SphereCollider>();
    }

    // Update is called once per frame
    void Update()
    {
        //rb.velocity = transform.forward * bulletSpeed;
        rb.velocity = transform.forward * bulletSpeed;
    }

    private void OnCollisionEnter(Collision collision)
    {
        print("111");
        Destroy(this.gameObject);
    }

    //private void OnTriggerEnter(Collider collider)
    //{
    //    Destroy(this.gameObject);

    //}
    //is collider를 비활성화
    //private void OnTriggerEnter(Collider collider)
    //{
    //    if (collider.gameObject.GetComponent<CapsuleCollider>() != null)
    //    {
    //        print(collider.gameObject + "충돌 된 이름");
    //        //콜라이더 기능을 끄고싶다
    //        //collider.gameObject.SetActive(false)
    //        collider.enabled = false;
    //    }
    //}
}