using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyStates : MonoBehaviour
{
    //에너미 FSM 만들자

    public enum States
    {
        Move,
        Attack,
        Damage,
        Die,
    }
    public States currentState = States.Move;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //현재 활성화된 상태 기반으로 실행
        switch (currentState)
        {
            case States.Move:
                //무브 할때
                {

                }
                break;
            case States.Attack:
                //어택 할때
                {

                }
                break;
            case States.Damage:
                //데미지입을때
                {

                }
                break;
            case States.Die:
                //죽을때
                {

                }
                break;
        }
    }
}
