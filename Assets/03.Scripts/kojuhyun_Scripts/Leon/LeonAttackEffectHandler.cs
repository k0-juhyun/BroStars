using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeonAttackEffectHandler : MonoBehaviour
{
    [Header("Speed")]
    public float moveSpeed = 2;
    public float duration = 2;
    public float rotationSpeed = 20;

    private Transform Player;
    private Vector3 initialForward;

    MeshCollider meshCollider;

    private void OnEnable()
    {
        transform.forward = initialForward;
        meshCollider = GetComponentInChildren<MeshCollider>();
        StartCoroutine(DestroyAfterDelay(duration));
        StartCoroutine(HandleCollider(0.5f));
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
        meshCollider.enabled = true;
    }
}