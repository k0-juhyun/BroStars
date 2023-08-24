using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIAnimations : MonoBehaviour
{
    private Animator anim;
    private bool endBool = false;
    private float timer = 0 ; 

    private void Awake()
    {
        anim = GetComponent<Animator>(); 
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
            anim.Play("Victory Idle", -1, 0f);
            timer = 0;
        }
       
    }

    public void EndAnimation()
    {
        endBool = true;
       

    }



}
