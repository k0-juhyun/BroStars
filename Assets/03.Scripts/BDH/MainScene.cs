using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// Scene���� PlayBtn�� �ҷ����� ���� SceneManagement �ʿ�
using UnityEngine.SceneManagement;

public class MainScene : MonoBehaviour
{
    public void PlayBtn()
    {
        // �ҷ��� �� �̸����� SceneManagement�� ���ؼ� �ҷ��´�. 
        SceneManager.LoadScene("02_LodingScene");
    }
}
