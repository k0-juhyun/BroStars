using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

using UnityEngine.SceneManagement;

public class SceneLoad : MonoBehaviour
{
    public Slider progressbar;
    public TMP_Text loadText;

    public void Start()
    {
        StartCoroutine(LoadScene()); 
    }

    // �񵿱� �ε带 ����ϱ� ���� �ڷ�ƾ�� �̿��Ѵ�. 
    IEnumerator LoadScene()
    {
        yield return null;
        // AsyncOperation�� ���Ͽ� �ε��� ������ ���ߵ��� �����մϴ�. 
        AsyncOperation operation = SceneManager.LoadSceneAsync("LoadingScene");
        operation.allowSceneActivation = false;

        // �ݺ������� �ε��ð��� �ö󰡵��� �Ѵ�. 
        while (!operation.isDone)
        {
            yield return null;
            if(progressbar.value < 1f)
            {
                // progressbar�� value���� ���ݾ� ���������ش�. 
                progressbar.value = Mathf.MoveTowards(progressbar.value, 1f, Time.deltaTime);
            }
            else
            {
                loadText.text = "Progress Bar";
            }

            if(Input.GetKeyDown(KeyCode.Space) && progressbar.value >= 1f && operation.progress >= 0.9f)
            {
                operation.allowSceneActivation = true; 
            }
        }
    
        
    }
}
