using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShellyEffectBullet : MonoBehaviour
{
    Rigidbody rb;
    public float bulletSpeed = 10.33f;
    Vector3 startPos;


    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.velocity = transform.forward * bulletSpeed;
        startPos = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        transform.forward = rb.velocity.normalized;
    }

    //bullet이 LineRenendrer까지만 날라가고싶다
}
