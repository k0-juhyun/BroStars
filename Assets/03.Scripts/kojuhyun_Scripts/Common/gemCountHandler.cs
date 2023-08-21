using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class gemCountHandler : MonoBehaviour
{
    private TMP_Text tmp;
    GemHandler gemHandler;
    void Start()
    {
        gemHandler = GetComponentInParent<GemHandler>();
        tmp = this.gameObject.GetComponent<TMP_Text>();
    }

    void Update()
    {
        tmp.text = gemHandler.gem.ToString();
    }
}
