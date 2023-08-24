using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;

public class ProjectManager : MonoBehaviourPun
{
    public static ProjectManager instance;

    [Header("������� ����")]
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
        //print("������� �г��� : " + myNickName);
        //print("������� ��ѷ� �ε��� : " + myBrawlerIndex.ToString());
        //print("������� �� ������ �ε��� : " + myPosIndex.ToString());
    }

}
