using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Zem : MonoBehaviour
{
    // 잼의 회전 속도를 설정하는 변수.
    private float rotateSpeed = 5f;
    // 잼이 회전할 목표 회전 값을 저장하는 변수.
    Quaternion zemRotation;

    private bool isGround = false; 

    AudioSource audioSource;
    // 잼 생성 시 재생할 오디오 클립. 
    public AudioClip createSound;
    // 잼이 캐릭터에 흡수될 때 재생할 오디오 클립.
    public AudioClip _absortionSound;

    private void Awake()
    {
        //audioSource = GetComponent<AudioSource>();
        GetComponent<BoxCollider>().enabled = false;
        //this.transform.rotation = Quaternion.Euler(new Vector3(90f, 0f, 0f));
    }

    // Start is called before the first frame update
    void Start()
    {
        // 초기 회전값을 저장.
        zemRotation = this.transform.rotation;

    }

    // Update is called once per frame
    void Update()
    {
        
        if(this.transform.position.y <= 0.3f + 4f)
        {
            //GetComponent<Rigidbody>().useGravity = false;
            GetComponent<Rigidbody>().velocity = Vector3.zero;
            GetComponent<BoxCollider>().enabled = true; 
        }

        // 초기 회전값을 기준으로 일정 속도를 회전하고 싶다.
        zemRotation *= Quaternion.AngleAxis(2.5f, Vector3.up);
        this.transform.rotation = Quaternion.Lerp(transform.rotation, zemRotation, 1f * rotateSpeed * Time.deltaTime);

    }

   
    //private void OnTriggerEnter(Collider other)
    //{
    //    if (other.CompareTag("Player") ||
    //        other.CompareTag("Company") ||
    //        other.CompareTag("Competition"))
    //    {
    //        StartCoroutine(AbsorptedToCollider(other));
    //        other.GetComponent<PlayerStats>().IncreaseScore();
    //    }
    //}

    //IEnumerator AbsorptedToCollider(Collider other)
    //{

    //    float time = 0;
    //    float absortionTime = 0.7f;
    //    Vector3 startPos = transform.position;
    //    Vector3 originalScale = transform.localScale;

    //    _audioSource.clip = _absortionSound;
    //    _audioSource.Play();

    //    while (time < absortionTime)
    //    {
    //        time += Time.deltaTime;

    //        transform.position =
    //            Vector3.Lerp(
    //                startPos,
    //                other.transform.position + new Vector3(0, 1, 0),
    //                time / absortionTime);
    //        transform.localScale =
    //            Vector3.Lerp(
    //                originalScale,
    //                new Vector3(0, 0, 0),
    //                time / absortionTime);

    //        yield return null;
    //    }

    //    Destroy(gameObject);
    //}
}
