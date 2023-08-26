using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NicknameHandler : MonoBehaviourPun
{
    private Text nickNameText;

    private void Awake()
    {
        nickNameText = GetComponent<Text>();
    }

    private void Start()
    {
        nickNameText.text = photonView.Owner.NickName;
    }
}
