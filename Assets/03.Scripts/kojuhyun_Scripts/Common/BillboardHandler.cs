using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BillboardHandler : MonoBehaviour
{
    private Transform mainCamera;

    private void Start()
    {
        //mainCamera = Camera.main.transform;
        StartCoroutine(FindMainCamera());
    }

    private void LateUpdate()
    {
        
        if(mainCamera != null)
        {
            transform.LookAt(transform.position + mainCamera.rotation * Vector3.forward,
                mainCamera.rotation * Vector3.up);
        }
    }

    IEnumerator FindMainCamera()
    {
        while(mainCamera ==null)
        {
            mainCamera = Camera.main.transform;
            yield return null;
        }
    }

}
