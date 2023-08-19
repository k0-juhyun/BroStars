using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeonAttackEffectHandler : MonoBehaviour
{
    [Header("Speed")]
    public float moveSpeed = 2;
    public float duration = 2;
    public float rotationSpeed = 20;

    private Vector3 initialForward;

    BoxCollider boxColiider;

    private void Start()
    {
        initialForward = transform.forward;
    }

    private void OnEnable()
    {
        StartCoroutine(HandleCollider(0.5f));
        transform.forward = initialForward;
        boxColiider = GetComponent<BoxCollider>();
        StartCoroutine(DestroyAfterDelay(duration));
    }

    private void Update()
    {
        rotationSpeed += 2;
        Vector3 movement = initialForward * Time.deltaTime * moveSpeed;
        transform.position += movement;

        transform.eulerAngles += new Vector3(0, rotationSpeed, 0);
    }

    IEnumerator DestroyAfterDelay(float duration)
    {
        yield return new WaitForSeconds(duration);
        Destroy(this.gameObject);
    }

    IEnumerator HandleCollider(float delay)
    {
        yield return new WaitForSeconds(delay);
        boxColiider.enabled = true;
    }

    private void OnCollisionEnter(Collision collision)
    {
        Destroy(this.gameObject);
    }
}