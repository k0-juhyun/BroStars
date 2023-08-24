using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;

public class ProjectManager : MonoBehaviourPun
{
    public static ProjectManager instance;

    [Header("사용자의 정보")]
    public string myNickName;
    public int myBrawlerIndex;
    public int myPosIndex;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Update()
    {
        //print("사용자의 닉네임 : " + myNickName);
        //print("사용자의 브롤러 인덱스 : " + myBrawlerIndex.ToString());
        //print("사용자의 룸 입장한 인덱스 : " + myPosIndex.ToString());
    }

}
