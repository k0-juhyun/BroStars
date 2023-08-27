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
        // �޽��� ��Ÿ����
        killLog.text = log;
        yield return new WaitForSeconds(2.0f); // �޽��� ǥ�� �ð�

        // �޽��� �����
        killLog.text = "";
        yield return new WaitForSeconds(0.5f); // ����� �� ��� �ð�

        isAnimating = false;
    }
}
