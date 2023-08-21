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

    public int teamIdx;
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

        GameManager.instance.AddPlayer(photonView);
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

        }
    }

    [PunRPC]
    public void SetMyTeamIdx(int index)
    {
        teamIdx = index;
        if (photonView.IsMine)
        {
            GameManager.instance.myTeamIdx = index;
        }
        GameManager.instance.SetTeamInfo();
    }
}
