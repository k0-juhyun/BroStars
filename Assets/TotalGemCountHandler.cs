using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TotalGemCountHandler : MonoBehaviour
{
    public Text[] gemCounts;

    void Update()
    {
        gemCounts[0].text = GameManager.instance.myTeam.myTeamScore.ToString();
        gemCounts[1].text = GameManager.instance.enemyTeam.EnemyTeamScore.ToString();
    }
}
