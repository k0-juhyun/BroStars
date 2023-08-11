using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraHandler : MonoBehaviour
{
    public static CameraHandler instance;

    PlayerManager playerManager;

    [HideInInspector]
    public GameObject mainCamera;

    private Transform target;

    [Header("Camera Settings")]
    public float smoothTime = 0.3f;
    public float distanceZFromTarget = -5;
    public float distanceXFromTarget = -5;
    public float shakeDuration = 2f;
    public float shakeSpeed = 22;
    public float magnitude = 1;
    public float rotationDamper = 2;
    private float currentVelocity = 0;
    private float startXPos;
    private float startYPos;

    public bool isPlaying;

    private void Awake()
    {
        instance = this;

        this.startXPos = this.transform.position.x;
        this.startYPos = this.transform.position.y;

        mainCamera = this.gameObject;

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

        //if (currentZpos > -91 && currentZpos < -115)
    }
    
    IEnumerator HandleShake()
    {
        var cameraTransform = mainCamera.transform;
        var cameraOriginRotation = cameraTransform.rotation.eulerAngles;
        var direction = (transform.position - cameraTransform.position).normalized;
        //var time = 0;
        yield return null;
    }
}
