using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIAnimations : MonoBehaviour
{
    private Animator anim;
    private bool endBool = false;
    private float timer = 0;
    private int count;

    // 플레이어에 따라 애니메이션 설정
    private string brawlerName;
    private string animationName;
    private string SoundName; 

    // Dictonary Collection 사용
    // key : 브롤러 이름, value : 애니메이션 변수명 
    private Dictionary<string, string> dictAnim = new Dictionary<string, string>() { {"Shelly" ,"ShellyIdle"},
        {"Nita","NitaIdle" }, {"primo_geo", "PrimoIdle"}, {"leon_sally_geo", "LeonIdle" } };

    private Dictionary<string, string> dictSounds = new Dictionary<string, string>()
    {
        {"Shelly" ,"shelly_start_01"},
        {"Nita","nita_start_vo_01" }, {"primo_geo", "el_primo_start_vo_01"}, {"leon_sally_geo", "leon_start_vo_01" }
    };

    private void Awake()
    {
        anim = GetComponent<Animator>(); 
    }

    private void Start()
    {
        // 브롤러 오브젝트 이름 및 애니메이션 초기화 
        brawlerName = this.gameObject.name;
        animationName = dictAnim[brawlerName];
        SoundName = dictSounds[brawlerName];

        // 1. 캐릭터 별 등장 사운드(Character,name_start) SoundManager를 통한 사운드 실행. 
        count = SoundManager_01.instance.mainBrawlsSfxs.Length;

        for (int i = 0; i < count; i++)
        {
            if (SoundName == SoundManager_01.instance.mainBrawlsSfxs[i].name)
            {
                // 해당 인덱스 사운드 실행. 
                SoundManager_01.instance.audioSFX.PlayOneShot(SoundManager_01.instance.mainBrawlsSfxs[i]);
            }
        }
    }


    private void Update()
    {
        if(endBool == true)
        {
            timer += Time.deltaTime;
        }
        
        // 3초간 지연 시간을 만든다. 
         while(timer >= 3f)
        {
            
            endBool = false;

        
            for (int i = 0; i < count; i++)
            {
                if(SoundName == SoundManager_01.instance.mainBrawlsSfxs[i].name)
                {
                    // 해당 인덱스 사운드 실행. 
                    SoundManager_01.instance.audioSFX.PlayOneShot(SoundManager_01.instance.mainBrawlsSfxs[i]);
                }
            }
            Debug.Log(SoundName);
            Debug.Log(SoundManager_01.instance.mainBrawlsSfxs[0].name);
     
            // 애니메이션 실행
            anim.Play(animationName, -1, 0f);
            timer = 0;
        }
    }

    public void EndAnimation()
    {
        endBool = true;
    }
}
