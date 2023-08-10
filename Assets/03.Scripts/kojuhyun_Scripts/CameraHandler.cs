using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraHandler : MonoBehaviour
{
    PlayerManager playerManager;

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
 
    private void Awake()
    {
        mainCamera = this.gameObject;

        this.startXPos = this.transform.position.x;
        this.startYPos = this.transform.position.y;

        playerManager = FindObjectOfType<PlayerManager>();
        target = playerManager.gameObject.GetComponent<Transform>();
    }

    private void LateUpdate()
    {
        if (target == null)
            return;

        float targetZPos = target.transform.position.z + distanceZFromTarget;
        float currentZpos = Mathf.SmoothDamp(this.transform.position.z, targetZPos, ref currentVelocity, smoothTime);

        this.transform.position = new Vector3(startXPos, startYPos, currentZpos);
    }
}
