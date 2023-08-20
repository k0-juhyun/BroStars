using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
// 1. 플레이어의 이름을 StartScene에서 설정한 닉네임으로 Text 변경.
// 2. 플레이 버튼을 누를경우 ConnectionScene으로 이동.
// 3. 사용자 플레이어 선택에 따른 플레이어 정보를 설정.

public class MainSceneManager : MonoBehaviour
{
    public Text PlayerNickName;
    public Button btnPlay;
    // Start is called before the first frame update
    void Start()
    {
        // 사용자가 입력한 닉네임으로 TEXT UI 표시. 
        PlayerNickName.text = PhotonNetwork.NickName;

        btnPlay.onClick.AddListener(OnClickConnect);

        
    }

    public void OnClickConnect()
    {
        print("클릭이 일어났어요.");
        // 03_ConnectionScene으로 이동.
        PhotonNetwork.LoadLevel("03_ConnectionScene");
    }
}
