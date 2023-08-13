using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CameraHandler : MonoBehaviour
{
    PlayerManager playerManager;
    HpHandler playerStats;
    J_PlayerManager jPlayerManager;

    [HideInInspector]
    public GameObject mainCamera;

    private Transform target;

    [Header("Camera Settings")]
    public float smoothTime = 0.3f;
    public float distanceZFromTarget = -5;
    public float distanceXFromTarget = -5;
    private float startXPos;
    private float startYPos;
    private float currentVelocity = 0;
    public float shakeMagnitude = 0.1f;

    private void Awake()
    {
        mainCamera = this.gameObject;

        this.startXPos = this.transform.position.x;
        this.startYPos = this.transform.position.y;

        playerManager = FindObjectOfType<PlayerManager>();
        playerStats = FindObjectOfType<HpHandler>();
        target = GameObject.FindWithTag("Player").GetComponent<Transform>();
    }

    private void LateUpdate()
    {
        if (target == null)
            return;

        float targetZPos = target.transform.position.z + distanceZFromTarget;
        float currentZpos = Mathf.SmoothDamp(this.transform.position.z, targetZPos, ref currentVelocity, smoothTime);

        this.transform.position = new Vector3(startXPos, startYPos, currentZpos);

        if (playerStats.isDamaged)
        {
            StartCoroutine(HandleCamerShake(0.5f));
        }
    }

    IEnumerator HandleCamerShake(float duration)
    {
        float endTime = Time.time + duration;

        while (Time.time < endTime)
        {
            Vector3 shakeOffset = Random.insideUnitSphere * shakeMagnitude;
            shakeOffset.z = 0;
            this.transform.position = new Vector3(startXPos, startYPos, this.transform.position.z) + shakeOffset;

            yield return null;
        }

        this.transform.position = new Vector3(startXPos, startYPos, this.transform.position.z);
        playerStats.isDamaged = false;
    }
}
