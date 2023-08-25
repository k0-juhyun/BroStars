using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 
public class TabImage : MonoBehaviour
{
    public GameObject tabImage;
    Vector3 originScale;

    // Start is called before the first frame update
    void Start()
    {
        originScale = tabImage.transform.localScale;

        iTween.ScaleTo(tabImage, iTween.Hash(      
          "scale", originScale * 1.15f,
          "easetype", iTween.EaseType.easeInOutBack,
          "time", 0.5f,
          "looptype", iTween.LoopType.pingPong
          ));
    }
}
