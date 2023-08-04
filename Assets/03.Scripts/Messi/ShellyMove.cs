using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShellyMove : MonoBehaviour
{
    [SerializeField]
    public float speed = 5f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float h = Input.GetAxis("Horizontal");   
        float v = Input.GetAxis("Vertical");
        Vector3 dir = h * Vector3.right + v * Vector3.forward;
        //Vector3 dir = new Vector3(0, h, 0);
        dir.Normalize();

        transform.position += dir * speed * Time.deltaTime; 

        

    }
}
