using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class J_Bullet : MonoBehaviour
{
    public float speed = 10f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.position += Vector3.forward * speed * Time.deltaTime;
    }
}
