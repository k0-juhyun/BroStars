using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }else if(instance != this)
        {
            Destroy(this.gameObject);
            
        }

        DontDestroyOnLoad(gameObject); 
       
    }
    // ���� �¸� ���� : �� ���� ������ 10�� �̻� ��� ī��Ʈ�ٿ��� ����� ������ ��ƾ ���� �¸��մϴ�. 
    // 1. �������� ���� �� ������ 10�� �̻�. (��� ������ �� ���� ���� ������ �����ؾ� ��)
    // 2. ���࿡ ������ ��������� 10�� �̻� ������ ���¿����� �����ϸ� ī��Ʈ �ٿ� �������� ����. 
    // 3. ������ �������� ���� ī��Ʈ �ٿ� ����. 
    private bool isGameOver;

    // �� ����ǥ : �츮��, �����
    private int myTeamScore = 0;
    private int EnemyTeamScore = 0;

    // �¸� ī��Ʈ 15�� 
    private float winerTimer = 15f;
    private float winnerCurrentTimer;

    public int myTeam
    {
        get
        {
            return myTeamScore;
        }
        set
        {
            myTeamScore = value;
            
            if(myTeamScore >= 10 && myTeamScore != EnemyTeamScore)
            {
                // �츮�� ������ 10�� �̻� ȹ��. 
                isGameOver = true;

                // �츮�� �¸� ī��� 15�� ����. 
                StartCoroutine(WinerTeamTimer());
            }
        }
    }

    public int EnemyTeam
    {
        get
        {
            return EnemyTeamScore;
        }

        set
        {
            EnemyTeamScore = value;

            if(EnemyTeamScore >= 10 && myTeamScore != EnemyTeamScore)
            {
                // ����� ������ 10�� �̻� ȹ��. 
                isGameOver = false;

                // ����� �¸� ī��Ʈ �ٿ� ����. 
                StartCoroutine(WinerTeamTimer());
            }
        }
    }

   
    IEnumerator WinerTeamTimer()
    {
        winnerCurrentTimer = winerTimer;

        while (winnerCurrentTimer > 0)
        {
            winnerCurrentTimer -= Time.deltaTime;
            
            yield return null;

            if (winnerCurrentTimer <= 0)
            {
                if(isGameOver == true)
                {
                    // �츮 �� �¸�.!! 

                }
                else
                {
                    // ���� �� �¸�.!! 
                }

              
                winnerCurrentTimer = 0;
                yield break;
            }
        }
    }


}
