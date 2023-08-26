using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class ShellyEffectBullet1 : MonoBehaviour
{
    [Header("Speed")]
    Rigidbody rb;
    public float bulletSpeed = 20f;
    //Vector3 startPos;
    private Vector3 startForward;

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
        Vector3 movement = startForward * bulletSpeed * Time.deltaTime;

        transform.position += movement;
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
        //print("111");
        Destroy(this.gameObject);
    }
}