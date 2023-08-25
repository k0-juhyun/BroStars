using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 

public class ShopButton : MonoBehaviour
{
    public GameObject Image;
    Vector3 originPos;
    Vector3 originScale;
    // Start is called before the first frame update
    private void Start()
    {
      
        originPos = Image.transform.position;
        originScale = Image.transform.localScale; 

        iTween.MoveTo(Image, iTween.Hash(
            //"delay", 0.2f,
           "x", originPos.x -0.75f,
           "easetype", iTween.EaseType.easeInOutBounce,
           "time", 1f,
           "looptype", iTween.LoopType.pingPong
            ));

        iTween.ScaleTo(Image, iTween.Hash(
         //"delay", 0.2f,
         "scale", originScale * 0.75f,
         "easetype", iTween.EaseType.easeInOutBack,
         "time", 1f,
         "looptype", iTween.LoopType.pingPong
         ));
    }


}
