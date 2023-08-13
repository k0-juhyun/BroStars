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
        AsyncOperation operation = SceneManager.LoadSceneAsync("BDH");
        operation.allowSceneActivation = false;

        // operation.isDone; -> �۾��� �Ϸ� ������ Boolean������ ��ȯ�Ѵ�. 
        // operation.progress; -> ���������� float �� 0,1�� ��ȯ�մϴ�. (0 - ������, 1 - ����Ϸ�) 
        // operation.allowSceneActivation; -> true�� �ε��� �Ϸ�Ǹ� �ٷ� ���� �ѱ��, false�� progress�� 0.9f���� ����ϴ�. 

        // �ݺ������� �ε��ð��� �ö󰡵��� �Ѵ�. 
        while (!operation.isDone)
        {
            yield return null;
            if(progressbar.value < 0.9f)
            {
                // progressbar�� value���� ���ݾ� ���������ش�. 
                progressbar.value = Mathf.MoveTowards(progressbar.value, 0.9f, Time.deltaTime);
              
                loadText.text = Mathf.Round(progressbar.value * 100).ToString();
            }else if(operation.progress >= 0.9f)
            {
                progressbar.value = Mathf.MoveTowards(progressbar.value, 1f, Time.deltaTime);
            }

            // progressbar.value�� 1�� �Ǹ� �ε��� �Ϸ�.
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
