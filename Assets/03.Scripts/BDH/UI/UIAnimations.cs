using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIAnimations : MonoBehaviour
{
    private Animator anim;
    private bool endBool = false;
    private float timer = 0;

    // 플레이어에 따라 애니메이션 설정
    private string brawlerName;
    private string animationName; 

    // Dictonary Collection 사용
    // key : 브롤러 이름, value : 애니메이션 변수명 
    private Dictionary<string, string> dict = new Dictionary<string, string>() { {"Shelly" ,"ShellyIdle"},
        {"Nita","NitaIdle" }, {"primo_geo", "PrimoIdle"}, {"leon_sally_geo", "LeonIdle" } };

    private void Awake()
    {
        anim = GetComponent<Animator>(); 
    }

    private void Start()
    {
        // 브롤러 오브젝트 이름 및 애니메이션 초기화 
        brawlerName = this.gameObject.name;
        animationName = dict[brawlerName]; 
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

            // SoundManager를 통한 사운드 실행. 

     
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
