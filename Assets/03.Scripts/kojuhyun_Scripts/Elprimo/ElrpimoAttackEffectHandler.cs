using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElrpimoAttackEffectHandler : MonoBehaviour
{
    [Header("Speed")]
    [SerializeField]
    private float speed;
    private Transform Player;

    [Header("Scaling")]
    private Vector3 initialScale = Vector3.one;
    private Vector3 targetScale = Vector3.one * 1.4f;

    [SerializeField]
    private float scalingDuration = 1.0f;
    private SphereCollider sphereCollider;

    private void Awake()
    {
        sphereCollider = GetComponent<SphereCollider>();
        Player = GameObject.Find("Elprimo").GetComponent<Transform>();
        transform.forward = Player.transform.forward;
        StartCoroutine(DestroyAfterDelay());
        StartCoroutine(ScaleOverTime());
        StartCoroutine(HandleCollider(0.2f));
    }

    private void OnEnable()
    {
    }

    IEnumerator HandleCollider(float delay)
    {
        yield return new WaitForSeconds(delay);
        sphereCollider.enabled = true;
    }

    void Update()
    {
        transform.position += transform.forward * Time.deltaTime * speed;
    }

    IEnumerator DestroyAfterDelay()
    {
        yield return new WaitForSeconds(0.5f);
        Destroy(this.gameObject);
    }

    IEnumerator ScaleOverTime()
    {
        float startTime = Time.time;
        Vector3 initialSize = transform.localScale;

        while (Time.time - startTime < scalingDuration)
        {
            float progress = (Time.time - startTime) / scalingDuration;
            transform.localScale = Vector3.Lerp(initialSize, targetScale, progress);
            yield return null;
        }

        transform.localScale = targetScale;
    }
}
