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
    private void OnTriggerEnter(Collider collider)
    {
        //ParticleSystem particles = Instantiate(bulletPrefab[0]);
        //particles.Play();
        //Destroy(particles.gameObject);
        //rb.velocity = Vector3.zero;
        //rb.isKinematic = true;
        //rb.detectCollisions = false;

        //if(sphereCollider != null)
        //{
        //    sphereCollider.enabled = false;
        //}

        ////if (specialBullet != null)
        //{
        //    var otherRB = collision.gameObject.GetComponent<Rigidbody>();
        //    if (otherRB != null)
        //    {
        //        //otherRB.AddForce(transform.forward * otherRB.mass * 0.3f, ForceMode.Impulse);
        //    }
        //}
        //Destroy(collision.gameObject);
        Destroy(this.gameObject);

    }
    //is collider�� ��Ȱ��ȭ
    //private void OnTriggerEnter(Collider collider)
    //{
    //    if (collider.gameObject.GetComponent<CapsuleCollider>() != null)
    //    {
    //        print(collider.gameObject + "�浹 �� �̸�");
    //        //�ݶ��̴� ����� ����ʹ�
    //        //collider.gameObject.SetActive(false)
    //        collider.enabled = false;
    //    }
    //}
}