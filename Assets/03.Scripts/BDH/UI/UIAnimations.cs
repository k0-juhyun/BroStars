using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIAnimations : MonoBehaviour
{
    private Animator anim;
    private bool endBool = false;
    private float timer = 0;

    // �÷��̾ ���� �ִϸ��̼� ����
    private string brawlerName;
    private string animationName; 

    // Dictonary Collection ���
    // key : ��ѷ� �̸�, value : �ִϸ��̼� ������ 
    private Dictionary<string, string> dict = new Dictionary<string, string>() { {"Shelly" ,"ShellyIdle"},
        {"Nita","NitaIdle" }, {"primo_geo", "PrimoIdle"}, {"leon_sally_geo", "LeonIdle" } };

    private void Awake()
    {
        anim = GetComponent<Animator>(); 
    }

    private void Start()
    {
        // ��ѷ� ������Ʈ �̸� �� �ִϸ��̼� �ʱ�ȭ 
        brawlerName = this.gameObject.name;
        animationName = dict[brawlerName]; 
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

            // SoundManager�� ���� ���� ����. 

     
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
