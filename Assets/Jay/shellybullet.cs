using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shellybullet : MonoBehaviour
{
    Rigidbody rb;
    public float bulletSpeed = 3;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.velocity = transform.forward * bulletSpeed;
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.forward = rb.velocity.normalized;

    }
    private void OnCollisionEnter(Collision collision)
    {
        var otherRB = collision.gameObject.GetComponent<Rigidbody>();
        if(otherRB != null)
        {
            otherRB.AddForce(transform.forward * otherRB.mass * 20, ForceMode.Impulse);
        }

    }
}
