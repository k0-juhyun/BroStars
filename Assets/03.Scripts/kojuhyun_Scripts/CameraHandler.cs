using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraHandler : MonoBehaviour
{
    public static CameraHandler instance;

    #region Components
    PlayerManager playerManager;
    #endregion

    #region GameObject Value
    [HideInInspector]
    public GameObject mainCamera;
    private Transform target;
    #endregion

    #region Float Value
    private float currentVelocity = 0;
    private float startXPos;
    private float startYPos;

    [Header("Camera Settings")]
    public float smoothTime = 0.3f;
    public float distanceZFromTarget = -5;
    public float distanceXFromTarget = -5;
    #endregion

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

        if (currentZpos > -91 && currentZpos < -115)
            Debug.LogError("¹üÀ§ ¹þ¾î³²");
    }
}
