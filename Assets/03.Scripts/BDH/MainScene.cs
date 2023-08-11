using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// Scene에서 PlayBtn을 불러오기 위해 SceneManagement 필요
using UnityEngine.SceneManagement; 

public class MainScene : MonoBehaviour
{
   public void PlayBtn()

    {
        // 불러올 씬 이름으로 SceneManagement를 통해서 불러온다. 
        SceneManager.LoadScene("LodingScene");
    }
}
