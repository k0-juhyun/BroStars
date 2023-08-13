using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

// 1. ���� �÷��� �⺻������ Ÿ�̸� 3�� 30�� ����
// 2. ������ Gem 10�� ȹ�� �� �� ���� 15�� ī��Ʈ ���� ó�� 

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
        // �� �� ��(Gem)�� ������ 10���� ��
        //if(zemCount >= 10)
        //{
            // ���̵� �� ȿ�� �����ϸ� �� 
            // winerTeamTimer ������Ʈ Ȱ��ȭ
            // ���̵� �ƿ� ȿ�� ���� 
        //}
    }

    IEnumerator WinerTeamTimer()
    {
        winnerCurrentTimer = winerTimer;

        while(winnerCurrentTimer > 0)
        {
            winnerCurrentTimer -= Time.deltaTime;
            // �ؽ�Ʈ ����
            yield return null; 

            if(winnerCurrentTimer <= 0)
            {
                print("���� �¸�");
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
                print("���� ����");
                currentTimer = 0;
         
                yield break;
            }

        }
    }

}
