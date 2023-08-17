using System.Collections;
using System.Collections.Generic;
using UnityEditor.TextCore.Text;
using UnityEngine;
using UnityEngine.UI;

public class CameraHandler : MonoBehaviour
{
    HpHandler hpHandler;
    TargetHandler targetHandler;

    [HideInInspector]
    public GameObject mainCamera;

    [Header("게임 시작시 켜지는 것들")]
    public GameObject Messages;
    public GameObject JemManager;
    public GameObject Canvas;

    [Header("피격 이미지")]
    public Image UrgentImage;

    private Transform target;

    [Header("Camera Settings")]
    public float smoothTime = 0.3f;
    public float distanceZFromTarget = -5;
    public float distanceXFromTarget = -5;
    private float startXPos;
    private float startYPos;
    private float currentVelocity = 0;
    public float shakeMagnitude = 0.1f;
    public float startCamSpeed = 0.1f;

    public bool gameStart;

    private void Awake()
    {
        targetHandler = GetComponentInParent<TargetHandler>();
        mainCamera = this.gameObject;

        this.startXPos = this.transform.position.x;
        this.startYPos = this.transform.position.y;

        hpHandler = FindObjectOfType<HpHandler>();
        target = targetHandler.Target.transform;
    }

    private void LateUpdate()
    {
        if (target == null)
            return;

        float targetZPos = target.transform.position.z + distanceZFromTarget;
        float currentZpos = Mathf.SmoothDamp(this.transform.position.z, targetZPos, ref currentVelocity, smoothTime);

        if(gameStart == false)
        {
            Vector3 startCamPos = new Vector3(startXPos, startYPos, currentZpos);
            transform.position = Vector3.Lerp(transform.position, startCamPos, startCamSpeed);
            if(Vector3.Distance(transform.position,startCamPos) < 0.05f)
            {
                Messages.SetActive(false);
                JemManager.SetActive(true);
                Canvas.SetActive(true);

                gameStart = true;
            }
        }

        else
        {
            this.transform.position = new Vector3(startXPos, startYPos, currentZpos);
        }

        #region 피격시 카메라 쉐이크
        if (hpHandler.isDamaged)
        {
            StartCoroutine(HandleCamerShake(0.5f));
            if(hpHandler.isUrgent) 
            {
                StartCoroutine(HandleActivateUrgentImage(0.3f));
            }
        }
        #endregion
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
        hpHandler.isDamaged = false;
    }

    IEnumerator HandleActivateUrgentImage(float duration)
    {
        UrgentImage.gameObject.SetActive(true);
        yield return new WaitForSeconds(duration);
        UrgentImage.gameObject.SetActive(false);
    }
}
