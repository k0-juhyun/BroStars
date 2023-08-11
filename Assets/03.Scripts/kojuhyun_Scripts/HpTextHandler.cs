using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HpTextHandler : MonoBehaviour
{
    HpHandler playerStats;
    Text text;

    private void Awake()
    {
        playerStats = FindObjectOfType<HpHandler>();
        text = GetComponent<Text>();
    }

    void Update()
    {
        text.text = playerStats.curHp.ToString();
    }
}
