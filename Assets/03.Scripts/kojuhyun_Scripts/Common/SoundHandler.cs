using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundHandler : MonoBehaviour
{
    HpHandler hpHandler;
    AudioSource audioSource;
    BushManager bushManager;

    [SerializeField]
    private float soundPeriod;

    private void Awake()
    {
        bushManager = GetComponentInParent<BushManager>();
        hpHandler = GetComponentInParent<HpHandler>();
        audioSource = GetComponent<AudioSource>();
    }

    private void OnEnable()
    {
        StartCoroutine(HandleSound());
    }

    IEnumerator HandleSound()
    {
        while (bushManager.isBush)
        {
            audioSource.Play();
            yield return new WaitForSeconds(soundPeriod);
        }
    }
}
