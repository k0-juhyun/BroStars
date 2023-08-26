using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

// 1. ���� �÷��� �⺻������ Ÿ�̸� 3�� 30�� ����
public class PlayTimer : MonoBehaviourPunCallbacks
{
    private TMP_Text timerText;

    private float exitTimer = 210f;
   // private float exitTimer = 30f;
    private float currentTimer;
    private int minute;
    private int second;

    PhotonView pv; 

    private void Awake()
    {
        pv = GetComponentInParent<PhotonView>();
        timerText = GameObject.Find("TimerText").GetComponent<TMP_Text>();
    }

    private void Start()
    {
        if(PhotonNetwork.IsMasterClient)
        {
            photonView.RPC("Timer", RpcTarget.All);
        }
    }

    [PunRPC]
    private void Timer()
    {
        // PhotonNetwork�� ���ؼ� �����͸� ���� �����ϵ���.! -> PRC ALL. 

        StartCoroutine(StartTimer());
    }

    IEnumerator StartTimer()
    {
        currentTimer = exitTimer;

        while (currentTimer > 0)
        {
            currentTimer -= Time.deltaTime;
            minute = (int)currentTimer / 60;
            second = (int)currentTimer % 60;
            timerText.text = minute.ToString("00") + ":" + second.ToString("00");
            yield return null;

            if (currentTimer <= 0)
            {
                // ���� ���� -> PhotonNetwork ������ ����.
                OnGameExit();
                currentTimer = 0;

                yield break;
            }

        }
    }

    private void OnGameExit()
    {
        // PhotonNetwork ���� ������ Room���� ������. 
        PhotonNetwork.Disconnect();
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        base.OnDisconnected(cause);
        
        //PhotonNetwork.LoadLevel("02_MainScene");
    }

}
