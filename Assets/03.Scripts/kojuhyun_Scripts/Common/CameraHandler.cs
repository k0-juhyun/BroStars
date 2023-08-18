using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class CameraHandler : MonoBehaviourPun
{
    HpHandler hpHandler;
    TargetHandler targetHandler;

    [HideInInspector]
    public GameObject mainCamera;

    [Header("���� ���۽� ������ �͵�")]
    public GameObject Messages;
    public GameObject Canvas;

    [Header("�ǰ� �̹���")]
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
        if (photonView.IsMine == false)
            return;

        if (target == null)
            return;

        float targetZPos = target.transform.position.z + distanceZFromTarget;
        float currentZpos = Mathf.SmoothDamp(this.transform.position.z, targetZPos, ref currentVelocity, smoothTime);

        if(gameStart == false)
        {
            Vector3 startCamPos = new Vector3(startXPos, startYPos, currentZpos);
            transform.position = Vector3.Lerp(transform.position, startCamPos, startCamSpeed);
            if(Vector3.Distance(transform.position,startCamPos) < 0.05f && photonView.IsMine)
            {
                Messages.SetActive(false);
                Canvas.SetActive(true);

                gameStart = true;
            }
        }

        else
        {
            this.transform.position = new Vector3(startXPos, startYPos, currentZpos);
        }

        #region �ǰݽ� ī�޶� ����ũ
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
