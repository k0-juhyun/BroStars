using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager_01 : MonoBehaviour
{
    public static SoundManager_01 instance;

    private void Awake()
    {
        if(instance != null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    // Scene마다 Bgm의 종류. 
    // Scene 전환 플로우 순서대로 나열.
    public enum EBgm
    {
        BGM_StartScene,
        BGM_MainScene,
        BGM_ConnectionScene,
        BGM_LodingScene,
        BGM_GamePlayScene,
        BGM_BDH,
        BGM_PlayerResultScene,
        BGM_PlayerScoreScene
    }

    // SFX 
    public enum ESfx
    {
        SFX_BUTTON,
        SFX_JUMP
    }

    [Header("사운드")]
    // AudioSource 변수
    public AudioSource audioBGM;
    public AudioSource audioSFX;

    // AudioSource의 audio clip을 담을 수 있는 배열.
    public AudioClip[] bgms;
    public AudioClip[] sfxs;

    //BGM Play 메소드
    public void PlayBGM(EBgm bgmIdx)
    {
        //플레이 할 bgm 설정
        audioBGM.clip = bgms[(int)bgmIdx];
        audioBGM.Play();
    }

    // BGM STOP 메소드 
    public void StopBGM()
    {
        audioBGM.Stop();
    }

    //SFX Play 메소드 
    public void PlaySFX(ESfx sfxIdx)
    {
        //플레이
        audioSFX.PlayOneShot(sfxs[(int)sfxIdx]);
    }


}
