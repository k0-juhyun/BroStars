using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectHandler : MonoBehaviour
{
    CameraHandler[] cameraHandlers;
    bool[] cameraHandlerGameStartValues;
    public bool allCameraHandlersGameStart = false;

    private void Start()
    {
        cameraHandlers = FindObjectsOfType<CameraHandler>();
        cameraHandlerGameStartValues = new bool[cameraHandlers.Length];
        StartCoroutine(CheckAllCameraHandlersGameStartCoroutine());
    }

    private IEnumerator CheckAllCameraHandlersGameStartCoroutine()
    {
        while (true)
        {
            for (int i = 0; i < cameraHandlers.Length; i++)
            {
                cameraHandlerGameStartValues[i] = cameraHandlers[i].gameStart;
            }

            CheckAllCameraHandlersGameStart();

            yield return new WaitForSeconds(1.0f);
        }
    }

    private void CheckAllCameraHandlersGameStart()
    {
        foreach (bool value in cameraHandlerGameStartValues)
        {
            if (!value)
            {
                return;
            }
        }

        allCameraHandlersGameStart = true;
    }
}
