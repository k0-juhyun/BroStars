using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class TargetHandler : MonoBehaviourPun
{
    private Camera mainCamera;

    public GameObject Target;
    public GameObject DyingEffect;

    public bool isDestroy;

    HpHandler hpHandler;
    private void Awake()
    {
        mainCamera = transform.GetChild(0).GetComponent<Camera>();
    }

    private void Start()
    {
        if(photonView.IsMine)
        {
            mainCamera.gameObject.SetActive(true);
        }

        hpHandler = GetComponentInChildren<HpHandler>();
    }

    private void Update()
    {
        if (hpHandler != null)
        {
            if (hpHandler.isDie)
            {
                DyingEffect.transform.position = hpHandler.transform.position;
                DyingEffect.SetActive(true);
                isDestroy = true;
                hpHandler.isDie = false;
            }
        }

        else if (hpHandler == null)
        {
            Destroy(this.gameObject);
        }
    }
}
