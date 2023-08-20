using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
// 1. �÷��̾��� �̸��� StartScene���� ������ �г������� Text ����.
// 2. �÷��� ��ư�� ������� ConnectionScene���� �̵�.
// 3. ����� �÷��̾� ���ÿ� ���� �÷��̾� ������ ����.

public class MainSceneManager : MonoBehaviour
{
    public Text PlayerNickName;
    public Button btnPlay;
    // Start is called before the first frame update
    void Start()
    {
        // ����ڰ� �Է��� �г������� TEXT UI ǥ��. 
        PlayerNickName.text = PhotonNetwork.NickName;

        btnPlay.onClick.AddListener(OnClickConnect);

        
    }

    public void OnClickConnect()
    {
        print("Ŭ���� �Ͼ���.");
        // 03_ConnectionScene���� �̵�.
        PhotonNetwork.LoadLevel("03_ConnectionScene");
    }
}
