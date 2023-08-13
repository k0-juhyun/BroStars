using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NitaAttackEffectHandler : MonoBehaviour
{
    public float moveSpeed = 1f;      
    public float jumpForce = 1f;     
    public float bounceDistance = 1f; 
    private float traveledDistance = 0f;

    private int currentBounces = 0;   

    private bool isJumping = false;   

    private Vector3 moveDirection;    

    private Quaternion initialRotation;

    private void Start()
    {
        moveDirection = transform.forward;
        initialRotation = transform.rotation; 
    }

    private void OnEnable()
    {
        StartCoroutine(destroy());
    }

    IEnumerator destroy()
    {
        yield return new WaitForSeconds(0.8f);
        Destroy(this.gameObject);
    }

    private void Update()
    {
        if (!isJumping)
        {
            transform.Translate(moveDirection * moveSpeed * Time.deltaTime);
            traveledDistance += moveSpeed * Time.deltaTime;

            if (traveledDistance >= bounceDistance)
            {
                isJumping = true;
                GetComponent<Rigidbody>().velocity = new Vector3(moveDirection.x * moveSpeed, jumpForce, moveDirection.z * moveSpeed);
                currentBounces++;

                traveledDistance = 0f;
            }
        }

        // 지면에 닿았을 때
        if (Physics.Raycast(transform.position, Vector3.down, 0.5f))
        {
            if (currentBounces < 3)
            {
                isJumping = false;

                GetComponent<Rigidbody>().velocity = new Vector3(moveDirection.x * moveSpeed, GetComponent<Rigidbody>().velocity.y, moveDirection.z * moveSpeed);
            }
            else
            {
                GetComponent<Rigidbody>().velocity = Vector3.zero;
            }
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (currentBounces < 3 && collision.collider.CompareTag("Ground"))
        {
            isJumping = false;

            GetComponent<Rigidbody>().velocity = new Vector3(moveDirection.x * moveSpeed, GetComponent<Rigidbody>().velocity.y, moveDirection.z * moveSpeed);
        }
        else
        {
            GetComponent<Rigidbody>().velocity = Vector3.zero;
        }
    }
}
