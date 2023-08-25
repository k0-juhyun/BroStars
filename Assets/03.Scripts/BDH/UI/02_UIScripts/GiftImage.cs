using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 

public class GiftImage : MonoBehaviour
{
    public GameObject gift;
    Vector3 originScale;

    // Start is called before the first frame update
    void Start()
    {
        originScale = gift.transform.localScale;

        iTween.ScaleTo(gift, iTween.Hash(
          //"delay", 2,
          "scale", originScale * 1.15f,
          "easetype", iTween.EaseType.easeInOutBack,
          "time", 1f,
          "looptype", iTween.LoopType.pingPong
          ));
    }



}
