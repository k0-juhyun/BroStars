using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 

public class ShopButton : MonoBehaviour
{
    public GameObject Image;
    Vector3 originPos;

    // Start is called before the first frame update
    private void Start()
    {
        //originPos = Image.transform.localPosition;
        originPos = Image.transform.localPosition;

        iTween.MoveTo(Image, iTween.Hash(
            "delay", 0.2f,
           "x", originPos.x,
           "easetype", iTween.EaseType.easeInOutBounce,
           "time", 1f,
           "looptype", iTween.LoopType.pingPong
            ));
    }


}
