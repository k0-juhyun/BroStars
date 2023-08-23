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

    // Update is called once per frame
    void Update()
    {
        if (photonView.IsMine)
        {
           // nickNameText.text = ProjectManager.instance.myNickName;
        }
    }
}
