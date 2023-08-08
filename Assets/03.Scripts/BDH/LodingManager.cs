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
            // DontDestroyOnLoad를 통해 씬 이동할때 파괴되지 않음.
            DontDestroyOnLoad(gameObject); 
        }
        else
        {
            // DontDestroyOnLoad로 설정된 오브젝트를 파괴. 
            Destroy(gameObject);
        }
    }
}
