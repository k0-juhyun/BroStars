using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class CameraHandler : MonoBehaviourPun
{
    Joystick joystick;
    HpHandler hpHandler;
    TargetHandler targetHandler;
    ObjectHandler objectHandler;
    PlayTimer timer;

    [HideInInspector]
    public GameObject mainCamera;

    [Header("게임 시작시 켜지는 것들")]
    public GameObject Messages;
    public GameObject Canvas;

    [Header("피격 이미지")]
    public Image UrgentImage;
    public Image RespawnImage;

    private Transform target;

    [Header("Camera Settings")]
    public float smoothTime = 0.3f;
    public float distanceZFromTarget = -110;
    private float startXPos;
    private float startYPos;
    private float currentVelocity = 0;
    public float shakeMagnitude = 0.1f;
    public float startCamSpeed = 0.1f;

    public bool gameStart;
    public bool isReverse;

    private void Awake()
    {
        targetHandler = GetComponentInParent<TargetHandler>();
        objectHandler = FindObjectOfType<ObjectHandler>();

        mainCamera = this.gameObject;

        this.startXPos = this.transform.position.x;
        this.startYPos = this.transform.position.y;

        target = targetHandler.Target.transform;
        timer = target.GetComponentInChildren<PlayTimer>();
        hpHandler = target.GetComponent<HpHandler>();

        if (photonView.IsMine)
        {
            Messages.gameObject.SetActive(false);
        }
    }
    private void Start()
    {

    }

    private void LateUpdate()
    {
        if (GameManager.instance.myTeamIdx == 2)
        {
            distanceZFromTarget = 110;
        }
        if (photonView.IsMine == false)
            return;

        if (target == null)
        {
            #region 죽을때 카메라

            if (targetHandler.isDestroy)
            {
                RespawnImage.gameObject.SetActive(true);
            }

            #endregion
        }

        else
        {
            float targetZPos = target.transform.position.z + distanceZFromTarget;
            float currentZpos = Mathf.SmoothDamp(this.transform.position.z, targetZPos, ref currentVelocity, smoothTime);

            if (gameStart == false)
            {
                Vector3 startCamPos = new Vector3(startXPos, startYPos, currentZpos);
                transform.position = Vector3.Lerp(transform.position, startCamPos, startCamSpeed);
                if (Vector3.Distance(transform.position, startCamPos) < 0.05f && photonView.IsMine)
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

            #region 피격시 카메라 쉐이크
            if (hpHandler.isDamaged)
            {
                StartCoroutine(HandleCamerShake(0.5f));
                if (hpHandler.isUrgent && UrgentImage != null)
                {
                    StartCoroutine(HandleActivateUrgentImage(0.3f));
                }
            }

            if (target.GetComponent<CamShakeHandler>().camShake)
            {
                StartCoroutine(HandleCamerShake(0.3f));
            }
            #endregion
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
        hpHandler.isDamaged = false;
        target.GetComponent<CamShakeHandler>().camShake = false;
    }

    IEnumerator HandleActivateUrgentImage(float duration)
    {
        if (UrgentImage != null)
        {
            UrgentImage.gameObject.SetActive(true);
            yield return new WaitForSeconds(duration);
            UrgentImage.gameObject.SetActive(false);
        }
    }
}
