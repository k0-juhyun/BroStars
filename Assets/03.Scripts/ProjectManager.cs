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

    [Header("모든 플레이어의 닉네임")]
    public string[] allPlayerNickName;


    public int teamIdx;
    public int winTeamIdx;
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
}
