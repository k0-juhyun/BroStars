using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandleCanvas : MonoBehaviour
{
    CameraHandler cameraHandler;

    private void Awake()
    {
        cameraHandler = FindObjectOfType<CameraHandler>();
    }

    private void Update()
    {
        if(cameraHandler != null) 
        {
            if (cameraHandler.gameStart)
            {
                cameraHandler.transform.GetChild(0).gameObject.SetActive(true);
                cameraHandler.transform.GetChild(1).gameObject.SetActive(true);
                return;
            }
            else
                return;
        }
    }
}
