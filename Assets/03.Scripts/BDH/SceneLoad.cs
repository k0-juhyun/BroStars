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

    // 비동기 로드를 사용하기 위해 코루틴을 이용한다. 
    IEnumerator LoadScene()
    {
        yield return null;
        // AsyncOperation를 통하여 로딩이 끝나고 멈추도록 설정합니다. 
        AsyncOperation operation = SceneManager.LoadSceneAsync("LoadingScene");
        operation.allowSceneActivation = false;

        // 반복문으로 로딩시간이 올라가도록 한다. 
        while (!operation.isDone)
        {
            yield return null;
            if(progressbar.value < 1f)
            {
                // progressbar의 value값을 조금씩 증가시켜준다. 
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
