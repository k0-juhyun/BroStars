using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// Scene���� PlayBtn�� �ҷ����� ���� SceneManagement �ʿ�
using UnityEngine.SceneManagement;


public class StartSceneBtn : MonoBehaviour
{
    public void PlayStartBtn()
    {
        // �ҷ��� �� �̸����� SceneManagement�� ���ؼ� �ҷ��´�. 
        SceneManager.LoadScene("02_MainScene");
    }
}
