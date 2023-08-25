using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    //public static SoundManager instance;

    //private AudioSource audioSource;
    //public GameObject startEffect; 
    //public AudioClip[] clips;


    //private void Awake()
    //{
    //    if(instance == null)
    //    {
    //        instance = this;
    //        // 화면 전환이 일어나도 오브젝트가 삭제되지 않도록 한다. 
    //        DontDestroyOnLoad(gameObject);
    //    }
    //    else if(instance != this)
    //    {
    //        Destroy(gameObject);
    //    }

    //    audioSource = GetComponent<AudioSource>();


        
    //}

    //private void Start()
    //{
    //    PlayBGM();

    //}
  

    //private void PlayBGM()
    //{
    //    if (!audioSource.isPlaying)
    //    {
    //        audioSource.PlayOneShot(clips[0]);
    //        // 3초 이후에 start BGM 시작. 
    //        Invoke("PlayStartBGM", 3f);
    //    }



    //}

    //public void PlayZemBGM()
    //{
    //   // audioSource.PlayOneShot(clips[2]);
    //}


    //private void PlayStartBGM()
    //{
    //    // start 이펙트 실행.
    //     startEffect.SetActive(true);
      
    //    // PlayBGM() 사운드 실행.
    //    audioSource.clip = clips[1];
    //    audioSource.Play();
    //    audioSource.loop = true;
    //}
}
