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

    // Scene���� Bgm�� ����. 
    // Scene ��ȯ �÷ο� ������� ����.
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

    [Header("����")]
    // AudioSource ����
    public AudioSource audioBGM;
    public AudioSource audioSFX;

    // AudioSource�� audio clip�� ���� �� �ִ� �迭.
    public AudioClip[] bgms;
    public AudioClip[] sfxs;

    //BGM Play �޼ҵ�
    public void PlayBGM(EBgm bgmIdx)
    {
        //�÷��� �� bgm ����
        audioBGM.clip = bgms[(int)bgmIdx];
        audioBGM.Play();
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
