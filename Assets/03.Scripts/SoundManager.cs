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
    //        // ȭ�� ��ȯ�� �Ͼ�� ������Ʈ�� �������� �ʵ��� �Ѵ�. 
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
    //        // 3�� ���Ŀ� start BGM ����. 
    //        Invoke("PlayStartBGM", 3f);
    //    }



    //}

    //public void PlayZemBGM()
    //{
    //   // audioSource.PlayOneShot(clips[2]);
    //}


    //private void PlayStartBGM()
    //{
    //    // start ����Ʈ ����.
    //     startEffect.SetActive(true);
      
    //    // PlayBGM() ���� ����.
    //    audioSource.clip = clips[1];
    //    audioSource.Play();
    //    audioSource.loop = true;
    //}
}
