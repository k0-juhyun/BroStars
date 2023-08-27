using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class KillLogTextHandler : MonoBehaviour
{
    private Text killLog;
    private bool isAnimating = false;

    private void Start()
    {
        killLog = GetComponent<Text>();
        killLog.text = "";
    }

    public void SetKillLog(string log)
    {
        if (!isAnimating)
        {
            isAnimating = true;
            StartCoroutine(AnimateKillLog(log));
        }
    }

    private IEnumerator AnimateKillLog(string log)
    {
        // 메시지 나타내기
        killLog.text = log;
        yield return new WaitForSeconds(2.0f); // 메시지 표시 시간

        // 메시지 지우기
        killLog.text = "";
        yield return new WaitForSeconds(0.5f); // 지우기 후 대기 시간

        isAnimating = false;
    }
}
