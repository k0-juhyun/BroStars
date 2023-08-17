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
    // 게임 승리 조건 : 팀 총합 보석을 10개 이상 얻고 카운트다운이 종료될 때까지 버틴 팀이 승리합니다. 
    // 1. 팀원들이 모은 총 보석이 10개 이상. (상대 팀보다 더 많은 수의 보석을 보유해야 함)
    // 2. 만약에 팀원과 상대팀원이 10개 이상 보유한 상태에서도 동일하면 카운트 다운 시작하지 않음. 
    // 3. 균형이 무너지는 순간 카운트 다운 실행. 
    private bool isGameOver;

    // 잼 점수표 : 우리팀, 상대팀
    private int myTeamScore = 0;
    private int EnemyTeamScore = 0;

    // 승리 카운트 15초 
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
                // 우리팀 보석을 10개 이상 획득. 
                isGameOver = true;

                // 우리팀 승리 카운드 15초 시작. 
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
                // 상대팀 보석을 10개 이상 획득. 
                isGameOver = false;

                // 상대팀 승리 카운트 다운 시작. 
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
                    // 우리 팀 승리.!! 

                }
                else
                {
                    // 상태 팀 승리.!! 
                }

              
                winnerCurrentTimer = 0;
                yield break;
            }
        }
    }


}
