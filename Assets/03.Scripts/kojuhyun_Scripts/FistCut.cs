using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FistCut : MonoBehaviour
{
    public GameObject elprimo; // elprimo ������Ʈ�� �ν����Ϳ��� �Ҵ�

    public Material capMaterial; // �߸� �κ��� ĸ ����

    private void Start()
    {
        if (elprimo != null)
        {
            GameObject[] gameObjects = MeshCut.Cut(gameObject, transform.position, Vector3.down, capMaterial);
        }
    }
}
