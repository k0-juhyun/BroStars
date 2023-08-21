using Photon.Pun.Demo.Asteroids;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShellyEffectBullet1 : MonoBehaviour
{
    Rigidbody rb;
    public float bulletSpeed = 10.33f;
    Vector3 startPos;

    SphereCollider sphereCollider;

    //private AudioSource audioSource;
    //public AudioClip shotGunClip;


    public float AutoDestroyTime = 5f;
    //public poolableobject 

    //public ShellyAttackHandler attackHandler;

    // Start is called before the first frame update
    void Start()
    {
        //audioSource = GetComponent<AudioSource>();
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
        
        //shllyAttackHandler에서 Shot이 실행될때 한 번 소리가 발생한다
        
        //audioSource.PlayOneShot(shotGunClip);
       
        
    }
    private void OnCollisionEnter(Collision collision)
    {
        var otherRB = collision.gameObject.GetComponent<Rigidbody>();
        if (otherRB != null)
        {
            otherRB.AddForce(transform.forward * otherRB.mass * 10, ForceMode.Impulse);
            Destroy(gameObject, 0.6f);
        }



        //상대방과 거리의 따른 데미지 및 콜리젼

        // 충돌체의 태그가 player일때
        if (collision.gameObject.CompareTag("Player"))
        {
            //DamageHandler damageHandler = GetComponent<DamageHandler>();
            //1차 사거리
            float firstDistance = 1.5f;
            //2차 사거리
            float secondDistance = 3.5f;
            //3차 사거리
            float thirdDistance = 5f;

            // 총알과 player가 충돌했을때 나와 충돌플레이어 사이의거리
            float range = Vector3.Distance(transform.position, collision.transform.position);

            //사거리 안에 있으면 
            if (range < firstDistance)
            {
                //damageHandler
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
        }

    }
}