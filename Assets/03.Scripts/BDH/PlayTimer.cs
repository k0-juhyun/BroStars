using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;


// 1. 게임 플레이 기본적으로 타이머 3분 30초 설정
public class PlayTimer : MonoBehaviour
{
    private TMP_Text timerText;

    private float exitTimer = 210f;
    private float currentTimer;
    private int minute;
    private int second;

    private void Awake()
    {
        timerText = GameObject.Find("TimerText").GetComponent<TMP_Text>();
    }

    private void Start()
    {
        StartCoroutine(StartTimer());
    }

    IEnumerator StartTimer()
    {
        currentTimer = exitTimer;

        while (currentTimer > 0)
        {
            currentTimer -= Time.deltaTime;
            minute = (int)currentTimer / 60;
            second = (int)currentTimer % 60;
            timerText.text = minute.ToString("00") + ":" + second.ToString("00");
            yield return null;

            if (currentTimer <= 0)
            {
                print("게임 종료");
                currentTimer = 0;

                yield break;
            }

        }
    }
}
