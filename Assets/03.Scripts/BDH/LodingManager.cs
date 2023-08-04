using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LodingManager : MonoBehaviour
{
    public static LodingManager Instance;

    private void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
            // DontDestroyOnLoad�� ���� �� �̵��Ҷ� �ı����� ����.
            DontDestroyOnLoad(gameObject); 
        }
        else
        {
            // DontDestroyOnLoad�� ������ ������Ʈ�� �ı�. 
            Destroy(gameObject);
        }
    }
}
