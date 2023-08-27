using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class TargetHandler : MonoBehaviourPun
{
    public bool isDestroy;
    [HideInInspector]
    public bool isReverseController = false;

    private Camera mainCamera;

    public GameObject Target;
    public GameObject DyingEffect;
    public GameObject NoneTarget;

    private string playerNickName;


    private Coroutine respawnCoroutine;

    HpHandler hpHandler;
    MoveHandler moveHandler;
    CameraHandler cameraHandler;

    public int teamIdx;

    private void Awake()
    {
        if (photonView.IsMine == false)
            return;
        mainCamera = transform.GetChild(0).GetComponent<Camera>();
        cameraHandler = GetComponentInChildren<CameraHandler>();
        moveHandler = GetComponentInChildren<MoveHandler>();
        playerNickName = Target.gameObject.name;
    }

    private void Start()
    {
        if (photonView.IsMine)
        {
            mainCamera.gameObject.SetActive(true);
            photonView.RPC(nameof(SetMyTeamIdx), RpcTarget.AllBuffered, ProjectManager.instance.teamIdx);
        }

        hpHandler = GetComponentInChildren<HpHandler>();

        GameManager.instance.AddPlayer(photonView);
    }

    private void Update()
    {
        if (hpHandler != null)
        {
            if (hpHandler.isDie)
            {
                Vector3 dyingEffectPosition = hpHandler.transform.position;
                bool isDyingEffectActive = true;

                NoneTarget.transform.position = dyingEffectPosition;
                NoneTarget.SetActive(true);
                DyingEffect.SetActive(true);
                Destroy(Target);
                Target = NoneTarget;
                mainCamera.transform.SetParent(null);
                isDestroy = true;
                hpHandler.isDie = false;

                photonView.RPC("UpdateDyingEffect", RpcTarget.Others, dyingEffectPosition, isDyingEffectActive);
            }
        }

        if (Target == NoneTarget)
        {
            print("º¹Á¦");
            StartCoroutine(RespawnPlayer(5.0f));
        }
    }

    [PunRPC]
    void UpdateDyingEffect(Vector3 position, bool isActive)
    {
        DyingEffect.transform.position = position;
        DyingEffect.SetActive(!isActive);
    }

    [PunRPC]
    public void SetMyTeamIdx(int index)
    {
        if (photonView.IsMine)
        {
            if (index == 2)
            {
                transform.rotation = new Quaternion(0, 180, 0, 0);
                isReverseController = true;
            }
        }

        teamIdx = index;

        if (photonView.IsMine)
        {
            GameManager.instance.myTeamIdx = index;
            GameManager.instance.SetTeamInfo();
        }

        if (teamIdx == 1)
        {
            Target.gameObject.layer = LayerMask.NameToLayer("myTeam");
        }

        else if (teamIdx == 2)
        {
            Target.gameObject.layer = LayerMask.NameToLayer("enemyTeam");
        }
    }

    IEnumerator RespawnPlayer(float delay)
    {
        yield return new WaitForSeconds(delay);

        Destroy(mainCamera.gameObject);

        GameObject RespawnPlayer = PhotonNetwork.Instantiate(GameManager.PlayerName[ProjectManager.instance.myBrawlerIndex],
        GameManager.instance.spawnPos[GameManager.instance.index], Quaternion.identity);

        if (RespawnPlayer.GetComponent<TargetHandler>().isReverseController)
        {
            RespawnPlayer.transform.rotation = Quaternion.Euler(0, 180, 0);
        }

        respawnCoroutine = null;
        PhotonNetwork.Destroy(this.gameObject);
    }
}
