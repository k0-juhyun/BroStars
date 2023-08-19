using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class MessageHandler : MonoBehaviourPun
{
    void Start()
    {
        if(photonView.IsMine == false)
        {
            this.gameObject.SetActive(false);
        }
    }
}
