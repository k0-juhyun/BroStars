using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TotalZemCountHandler : MonoBehaviour
{
    public Text AllyZem;
    public Text EnemyZem;

    void Start()
    {
        
    }

    void Update()
    {
        AllyZem.text = GameManager.instance.myTeam.myTeamScore.ToString();
        EnemyZem.text = GameManager.instance.enemyTeam.EnemyTeamScore.ToString();
    }
}
