using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIAnimations : MonoBehaviour
{
    private Animator anim;
    private bool endBool = false;
    private float timer = 0;
    private int count;

    // �÷��̾ ���� �ִϸ��̼� ����
    private string brawlerName;
    private string animationName;
    private string SoundName; 

    // Dictonary Collection ���
    // key : ��ѷ� �̸�, value : �ִϸ��̼� ������ 
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
        // ��ѷ� ������Ʈ �̸� �� �ִϸ��̼� �ʱ�ȭ 
        brawlerName = this.gameObject.name;
        animationName = dictAnim[brawlerName];
        SoundName = dictSounds[brawlerName];

        // 1. ĳ���� �� ���� ����(Character,name_start) SoundManager�� ���� ���� ����. 
        count = SoundManager_01.instance.mainBrawlsSfxs.Length;

        for (int i = 0; i < count; i++)
        {
            if (SoundName == SoundManager_01.instance.mainBrawlsSfxs[i].name)
            {
                // �ش� �ε��� ���� ����. 
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
        
        // 3�ʰ� ���� �ð��� �����. 
         while(timer >= 3f)
        {
            
            endBool = false;

        
            for (int i = 0; i < count; i++)
            {
                if(SoundName == SoundManager_01.instance.mainBrawlsSfxs[i].name)
                {
                    // �ش� �ε��� ���� ����. 
                    SoundManager_01.instance.audioSFX.PlayOneShot(SoundManager_01.instance.mainBrawlsSfxs[i]);
                }
            }
            Debug.Log(SoundName);
            Debug.Log(SoundManager_01.instance.mainBrawlsSfxs[0].name);
     
            // �ִϸ��̼� ����
            anim.Play(animationName, -1, 0f);
            timer = 0;
        }
    }

    public void EndAnimation()
    {
        endBool = true;
    }
}
