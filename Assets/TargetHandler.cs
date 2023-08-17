using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetHandler : MonoBehaviour
{
    public Camera mainCamera;

    public GameObject Target;
    public GameObject DyingEffect;

    public bool isDestroy;

    HpHandler hpHandler;

    private void Awake()
    {
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
    }
}
