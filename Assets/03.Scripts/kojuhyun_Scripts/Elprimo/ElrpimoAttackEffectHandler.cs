using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class ElrpimoAttackEffectHandler : MonoBehaviourPun
{
    [Header("Speed")]
    [SerializeField]
    private float speed;

    [Header("Scaling")]
    private Vector3 initialScale = Vector3.one;
    private Vector3 targetScale = Vector3.one * 1.4f;

    [SerializeField]
    private float scalingDuration = 1.0f;

    private Transform Player;
    private void OnEnable()
    {
        StartCoroutine(DestroyAfterDelay());
        StartCoroutine(ScaleOverTime());
    }

    void Update()
    {
        transform.position += transform.forward * Time.deltaTime * speed;
    }

    IEnumerator DestroyAfterDelay()
    {
        yield return new WaitForSeconds(0.5f);
        if (photonView.IsMine)
            PhotonNetwork.Destroy(this.gameObject);
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
