using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyStates : MonoBehaviour
{
    //���ʹ� FSM ������

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
        //���� Ȱ��ȭ�� ���� ������� ����
        switch (currentState)
        {
            case States.Move:
                //���� �Ҷ�
                {

                }
                break;
            case States.Attack:
                //���� �Ҷ�
                {

                }
                break;
            case States.Damage:
                //������������
                {

                }
                break;
            case States.Die:
                //������
                {

                }
                break;
        }
    }
}
