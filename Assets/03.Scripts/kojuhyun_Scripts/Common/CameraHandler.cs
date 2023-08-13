using System.Collections;
using System.Collections.Generic;
using UnityEditor.TextCore.Text;
using UnityEngine;
using UnityEngine.UI;

public class CameraHandler : MonoBehaviour
{
    ElprimoManager playerManager;
    HpHandler playerStats;
    J_PlayerManager jPlayerManager;

    [HideInInspector]
    public GameObject mainCamera;

    [Header("게임 시작시 켜지는 것들")]
    public GameObject Messages;
    public GameObject JemManager;
    public GameObject Canvas;

    private Transform target;

    [Header("Camera Settings")]
    public float smoothTime = 0.3f;
    public float distanceZFromTarget = -5;
    public float distanceXFromTarget = -5;
    private float startXPos;
    private float startYPos;
    private float currentVelocity = 0;
    public float shakeMagnitude = 0.1f;

    private bool gameStart;

    private void Awake()
    {
        mainCamera = this.gameObject;

        this.startXPos = this.transform.position.x;
        this.startYPos = this.transform.position.y;

        playerManager = FindObjectOfType<ElprimoManager>();
        playerStats = FindObjectOfType<HpHandler>();
        target = GameObject.FindWithTag("Player").GetComponent<Transform>();
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
            transform.position = Vector3.Lerp(transform.position, startCamPos, 0.1f);
            if(Vector3.Distance(transform.position,startCamPos) < 0.05f)
            {
                Messages.SetActive(false);
                JemManager.SetActive(true);
                Canvas.SetActive(true);

                print("GameStart");
                gameStart = true;
            }
        }

        else
        {
            this.transform.position = new Vector3(startXPos, startYPos, currentZpos);
        }

        #region 피격시 카메라 쉐이크
        if (playerStats.isDamaged)
        {
            StartCoroutine(HandleCamerShake(0.5f));
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
        playerStats.isDamaged = false;
    }
}
