using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class CanvasHandler : MonoBehaviourPunCallbacks, IPunObservable
{
    public static CanvasHandler instance;

    public bool handleCanvas = false;

    public GameObject[] Canvas;

    private void Awake()
    {
        instance = this;
    }

    void Start()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            StartCoroutine(HandleStartDelay(3));
        }
    }

    IEnumerator HandleStartDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        photonView.RPC("SetHandleCanvas", RpcTarget.AllBuffered, true);
        print("테스트1");
    }

    [PunRPC]
    private void SetHandleCanvas(bool value)
    {
        print("테스트2");
        handleCanvas = value;
        if (handleCanvas)
        {
            print("테스트3");
            ActivateCanvas();
        }
    }

    [PunRPC]
    private void ActivateCanvas()
    {
        for (int i = 0; i < Canvas.Length; i++)
        {
            print("테스트4");
            Canvas[i].SetActive(true);
        }
    }

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            stream.SendNext(handleCanvas);
            print("테스트5");
        }
        else
        {
            handleCanvas = (bool)stream.ReceiveNext();
            print("테스트6");
        }
    }
}
