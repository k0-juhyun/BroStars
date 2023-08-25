using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Connection Scene의 이미지를 회전시키는 스크립트.
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
        // Z축으로 회전한다. 
        logoImage.Rotate(new Vector3(0f, 0f, rotSpeed * Time.deltaTime)); 
    }
}
