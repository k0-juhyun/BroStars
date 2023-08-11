using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FistCut : MonoBehaviour
{
    public GameObject elprimo; // elprimo 오브젝트를 인스펙터에서 할당

    public Material capMaterial; // 잘린 부분의 캡 재질

    private void Start()
    {
        if (elprimo != null)
        {
            GameObject[] gameObjects = MeshCut.Cut(gameObject, transform.position, Vector3.down, capMaterial);
        }
    }
}
