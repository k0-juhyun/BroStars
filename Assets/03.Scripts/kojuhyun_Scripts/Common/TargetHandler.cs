using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class TargetHandler : MonoBehaviourPun
{
    public bool isDestroy;

    private Camera mainCamera;

    public GameObject Target;
    public GameObject DyingEffect;
    public GameObject NoneTarget;

    private string playerNickName;


    private Coroutine respawnCoroutine;

    HpHandler hpHandler;
    MoveHandler moveHandler;

    public int teamIdx;
    private void Awake()
    {
        if (photonView.IsMine == false)
            return;
        mainCamera = transform.GetChild(0).GetComponent<Camera>();
        moveHandler = GetComponentInChildren<MoveHandler>();
        playerNickName = Target.gameObject.name;
    }

    private void Start()
    {
        if (photonView.IsMine)
        {
            mainCamera.gameObject.SetActive(true);
        }

        hpHandler = GetComponentInChildren<HpHandler>();

        GameManager.instance.AddPlayer(photonView);
    }

    private void Update()
    {
        if (photonView.IsMine)
        {
            if (hpHandler != null)
            {
                if (hpHandler.isDie)
                {
                    DyingEffect.transform.position = hpHandler.transform.position;
                    NoneTarget.transform.position = hpHandler.transform.position;
                    NoneTarget.SetActive(true);
                    DyingEffect.SetActive(true);
                    Target = NoneTarget;
                    mainCamera.transform.SetParent(null);
                    isDestroy = true;
                    hpHandler.isDie = false;
                }
            }

            if (Target == NoneTarget)
            {
                print("복제");
                StartCoroutine(RespawnPlayer(5.0f));
            }
        }
    }

    [PunRPC]
    public void SetMyTeamIdx(int index)
    {
        teamIdx = index;
        if (photonView.IsMine)
        {
            GameManager.instance.myTeamIdx = index;
        }
        GameManager.instance.SetTeamInfo();
    }

    IEnumerator RespawnPlayer(float delay)
    {
        yield return new WaitForSeconds(delay);

        Destroy(mainCamera.gameObject);

        PhotonNetwork.Instantiate(GameManager.PlayerName[GameManager.instance.index],
        GameManager.instance.spawnPos[GameManager.instance.index], Quaternion.identity);

        print("여기2");
        respawnCoroutine = null;
        PhotonNetwork.Destroy(this.gameObject);
    }
}
