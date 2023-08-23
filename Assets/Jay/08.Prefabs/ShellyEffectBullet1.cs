using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class ShellyEffectBullet1 : MonoBehaviour
{
    [Header("Speed")]
    Rigidbody rb;
    public float bulletSpeed = 10.33f;
    Vector3 startPos;

    //public GameObject attackBulelt;
    //public GameObject specialBullet;
    SphereCollider sphereCollider;
    //[Header("Particle")]
    //public ParticleSystem bulletSmoke;
    //public ParticleSystem muzzleSmoke;

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
        rb.velocity = transform.forward * bulletSpeed;
    }
    private void OnCollisionEnter(Collision collision)
    {

        //bulletSmoke.Play();
        //muzzleSmoke.Play();
        var otherRB = collision.gameObject.GetComponent<Rigidbody>();
        
            if (otherRB != null)
            {
                otherRB.AddForce(transform.forward * otherRB.mass * 0.3f, ForceMode.Impulse);
              //print("2222");

             }
        
        //Destroy(collision.gameObject);
        Destroy(this.gameObject);

    }
}