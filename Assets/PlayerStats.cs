using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStats : MonoBehaviour
{
    public int curHp;
    public int maxHp;
    public int AttackDamage;
    public int SkillDamage;
    public int gem;

    public bool isDamaged;
    private void Start()
    {
        curHp = maxHp;
    }

    public int HandleHP(int damage)
    {
        if(damage < 0)
        {
            isDamaged = true; // �ǰ� ���� ����
        }

        else if(damage > 0) 
        {
            // heal
        }
        curHp += damage;
        return curHp;
    }
}
