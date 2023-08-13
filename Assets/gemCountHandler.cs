using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class gemCountHandler : MonoBehaviour
{
    private TMP_Text tmp;
    PlayerManager playerManager;
    void Start()
    {
        playerManager = FindObjectOfType<PlayerManager>();  
        tmp = this.gameObject.GetComponent<TMP_Text>();
    }

    void Update()
    {
        tmp.text = playerManager.gem.ToString();
    }
}
