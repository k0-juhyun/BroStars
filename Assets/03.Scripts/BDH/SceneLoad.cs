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
        AsyncOperation operation = SceneManager.LoadSceneAsync("BDH");
        operation.allowSceneActivation = false;

        // operation.isDone; -> 작업의 완료 유무를 Boolean형으로 반환한다. 
        // operation.progress; -> 진행정도를 float 형 0,1을 반환합니다. (0 - 진행중, 1 - 진행완료) 
        // operation.allowSceneActivation; -> true면 로딩이 완료되면 바로 씬을 넘기고, false면 progress가 0.9f에서 멈춥니다. 

        // 반복문으로 로딩시간이 올라가도록 한다. 
        while (!operation.isDone)
        {
            yield return null;
            if(progressbar.value < 0.9f)
            {
                // progressbar의 value값을 조금씩 증가시켜준다. 
                progressbar.value = Mathf.MoveTowards(progressbar.value, 0.9f, Time.deltaTime);
              
                loadText.text = Mathf.Round(progressbar.value * 100).ToString();
            }else if(operation.progress >= 0.9f)
            {
                progressbar.value = Mathf.MoveTowards(progressbar.value, 1f, Time.deltaTime);
            }

            // progressbar.value가 1이 되면 로딩이 완료.
            if(progressbar.value >= 1f)
            {
                loadText.text = "100";
            }

            if(Input.GetKeyDown(KeyCode.Space) && progressbar.value >= 1f && operation.progress >= 0.9f)
            {
                operation.allowSceneActivation = true; 
            }
        }
    
        
    }
}
