using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class J_Bullet : MonoBehaviour
{
    //public float speed = 10f;

    [SerializeField]
    shellyFire SF;

    Vector3 bulletEndDistance;
    // Start is called before the first frame update
    void Start()
    {
        SF = GameObject.Find("AttackTrail").GetComponent<shellyFire>(); 
        bulletEndDistance = transform.position + transform.forward * SF.TrailDistance;
    }

    // Update is called once per frame
    void Update()
    {
        if(transform.position == bulletEndDistance)
        {
            //
            Destroy(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject );
        }
        //transform.position += Vector3.forward * speed * Time.deltaTime;
    }
}
