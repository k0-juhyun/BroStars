using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Connection Scene�� �̹����� ȸ����Ű�� ��ũ��Ʈ.
public class BrawlLogoRotate : MonoBehaviour
{
    private RectTransform logoImage;
    private float rotSpeed = 200f; 
    private void Awake()
    {
        logoImage = this.GetComponent<RectTransform>(); 
    }

    // Update is called once per frame
    void Update()
    {
        // Z������ ȸ���Ѵ�. 
        logoImage.Rotate(new Vector3(0f, 0f, rotSpeed * Time.deltaTime)); 
    }
}
