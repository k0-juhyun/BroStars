using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shellyBullet1 : MonoBehaviour
{
    [Header("Speed")]
    Rigidbody rb;
    public float bulletSpeed = 10.33f;
    Vector3 startPos;
    private Vector3 startForward;

    SphereCollider sphereCollider;

    [SerializeField]
    [Header("Particle")]
    public ParticleSystem[] bulletPrefab;

    //[Header("KnockBack")]
    //public float knockBackSpeed = 0.5f;

    // Start is called before the first frame update
    void Start()
    {
        //this.gameObject.transform.SetParent(null);
        //rb = GetComponent<Rigidbody>();
        startForward = transform.forward;
    }
    private void OnEnable()
    {
        transform.forward = startForward;
        sphereCollider = GetComponent<SphereCollider>();
    }

    // Update is called once per frame
    void Update()
    {
        //rb.velocity = transform.forward * bulletSpeed;
        //rb.velocity = transform.forward * bulletSpeed;

        Vector3 movement = startForward * bulletSpeed * Time.deltaTime;

        transform.position += movement;

        //transform.eulerAngles += new Vector3(0,)



    }

    IEnumerator DestroyAfterDelay(float duration)
    {
        yield return new WaitForSeconds(duration);
        Destroy(this.gameObject);
    }

    IEnumerator HandleCollider(float delay)
    {
        yield return new WaitForSeconds(delay);
        sphereCollider.enabled = true;
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