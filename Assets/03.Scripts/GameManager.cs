using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

// 1. 게임 플레이 기본적으로 타이머 3분 30초 설정
// 2. 팀별로 Gem 10개 획득 시 인 게임 15초 카운트 시작 처리 

public class GameManager : MonoBehaviour
{
    public Canvas mainUI;
    private TMP_Text timerText;
    private float exitTimer = 210f;
    private float winerTimer = 15f;
    private float currentTimer;
    private float winnerCurrentTimer;

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

    private void Update()
    {
        // 팀 별 잼(Gem)의 갯수가 10개일 때
        //if(zemCount >= 10)
        //{
            // 페이드 인 효과 적용하면 서 
            // winerTeamTimer 오브젝트 활성화
            // 페이드 아웃 효과 적용 
        //}
    }

    IEnumerator WinerTeamTimer()
    {
        winnerCurrentTimer = winerTimer;

        while(winnerCurrentTimer > 0)
        {
            winnerCurrentTimer -= Time.deltaTime;
            // 텍스트 적용
            yield return null; 

            if(winnerCurrentTimer <= 0)
            {
                print("게임 승리");
                winnerCurrentTimer = 0;
                yield break; 
            }
        }
    }


    IEnumerator StartTimer()
    {
        currentTimer = exitTimer;

        while(currentTimer > 0)
        {
            currentTimer -= Time.deltaTime;
            minute = (int)currentTimer / 60;
            second = (int)currentTimer % 60;
            timerText.text = minute.ToString("00") + ":" + second.ToString("00");
            yield return null;

            if(currentTimer <= 0)
            {
                print("게임 종료");
                currentTimer = 0;
         
                yield break;
            }

        }
    }

}
