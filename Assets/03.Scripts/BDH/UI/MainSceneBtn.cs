using System.Collections;
using System.Collections.Generic;
using UnityEngine;
// Scene���� PlayBtn�� �ҷ����� ���� SceneManagement �ʿ�
using UnityEngine.SceneManagement;

public class MainSceneBtn : MonoBehaviour
{
    public void PlayBattleBtn()
    {
        // �ҷ��� �� �̸����� SceneManagement�� ���ؼ� �ҷ��´�. 
        SceneManager.LoadScene("03_ConnectionScene");
    }
}
