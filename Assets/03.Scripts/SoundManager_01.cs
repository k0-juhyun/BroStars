using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager_01 : MonoBehaviour
{
    public static SoundManager_01 instance;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }

        audioSFX = GetComponentInChildren<AudioSource>();
    }

    // Scene���� Bgm�� ����. 
    
    public enum EBgm
    {
        BGM_StartScene,
        BGM_MainScene,
        BGM_BDH,
        BGM_PlayerResultScene,
        BGM_PlayerScoreScene
    }

    // SFX 
    public enum ESfx
    {
        Main_SFX_Change_Btn,
        Main_SFX_Cancel_Btn,
        BGM_GAMETIMER,
        GEM_GAINSOUND,
        GEM_CREATESOUND


    }

    
    // AudioSource ����
    public AudioSource audioBGM;
    [HideInInspector]
    public AudioSource audioSFX;

    // AudioSource�� audio clip�� ���� �� �ִ� �迭.
    public AudioClip[] bgms;
    public AudioClip[] sfxs;
    public AudioClip[] mainBrawlsSfxs;

    //BGM Play �޼ҵ�
    public void PlayBGM(EBgm bgmIdx)
    {
        //�÷��� �� bgm ����
        audioBGM.clip = bgms[(int)bgmIdx];
        audioBGM.Play();
        audioBGM.loop = true; 
    }

    // BGM STOP �޼ҵ� 
    public void StopBGM()
    {
        audioBGM.Stop();
    }

    //SFX Play �޼ҵ� 
    public void PlaySFX(ESfx sfxIdx)
    {
        //�÷���
        audioSFX.PlayOneShot(sfxs[(int)sfxIdx]);
    }

   

}
