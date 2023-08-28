using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class WinnerCount : MonoBehaviour
{
    public GameObject[] team;
    public Text[] Counts;
    public int winnerCount;
    void Start()
    {
        
    }

    void Update()
    {
        winnerCount = (int)GameManager.instance.winerTimer;

        if(GameManager.instance.counting)
        {
            if(GameManager.instance.myTeam.myTeamScore >= 10)
            {
                team[0].SetActive(true);
                Counts[0].text = winnerCount.ToString();
            }

            else if(GameManager.instance.enemyTeam.EnemyTeamScore >= 10) 
            {
                team[1].SetActive(true);
                Counts[1].text = winnerCount.ToString();
            }
        }
        else
        {
            team[0].SetActive(false);
            team[1].SetActive(false);
        }
    }
}
