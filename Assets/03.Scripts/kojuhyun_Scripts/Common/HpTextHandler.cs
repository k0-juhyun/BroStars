using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HpTextHandler : MonoBehaviour
{
    HpHandler hpHandler;
    Text text;

    private void Awake()
    {
        hpHandler = GetComponentInParent<HpHandler>();
        text = GetComponent<Text>();
    }

    void Update()
    {
        text.text = hpHandler.curHp.ToString();
    }
}
