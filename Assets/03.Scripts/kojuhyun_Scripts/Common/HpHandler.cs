using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Unity.VisualScripting;

public class HpHandler : MonoBehaviourPun
{
    BushManager bushManager;
    SoundHandler soundHandler;
    TargetHandler targetHandler;
    GemHandler gemHandler;
    LogHandler logHandler;
    HitHandler hitHandler;
    KillLogUiHandler killLogUiHandler;
    KillLogTextHandler killLogTextHandler;
    CapsuleCollider cc;
    SFxHandler sfxHandler;

    [Header("HP Bar")]
    public Slider HpBar;

    [Header("아군/적군 캔버스")]
    public GameObject allyCanvas;
    public GameObject enemyCanvas;


    [Header("Particle System")]
    public GameObject HealPrefab;
    public GameObject Mesh;
    public GameObject FootEffect;
    public GameObject MyCanvas;

    [Header("플레이어 스탯")]
    public float curHp;
    public float maxHp;
    public float AttackDamage;
    public float SkillDamage;
    public float hpRegenValue;
    private float hpPercentage;

    [HideInInspector]
    private bool isTransparented;
    public bool isDamaged;
    [HideInInspector]
    public bool isUrgent;
    [HideInInspector]
    public bool isDie;
    private bool isDead;
    bool isKillLogVisible = false;


    // 추가 오브젝트
    private GameObject gem;
    PhotonView lastAttacker;

    private void Awake()
    {
        // 추가 스크립트.
        gem = Resources.Load<GameObject>("Crystal_Sparkle");

        curHp = maxHp;

        bushManager = GetComponent<BushManager>();
        soundHandler = GetComponentInChildren<SoundHandler>();
        targetHandler = GetComponentInParent<TargetHandler>();
        gemHandler = GetComponent<GemHandler>();
        logHandler = FindObjectOfType<LogHandler>();
        hitHandler = GetComponent<HitHandler>();
        killLogUiHandler = FindObjectOfType<KillLogUiHandler>();
        killLogTextHandler = FindObjectOfType<KillLogTextHandler>();
        sfxHandler =GetComponentInChildren<SFxHandler>();
        cc = GetComponent<CapsuleCollider>();

        if (this.gameObject.name != "Bruce")
        {
            targetHandler.Target = this.gameObject;
        }
    }
    private void Start()
    {
        if (targetHandler != null)
        {
            if (targetHandler.teamIdx == GameManager.instance.myTeamIdx)
            {
                allyCanvas.gameObject.SetActive(true);
                enemyCanvas.gameObject.SetActive(false);
                HpBar = allyCanvas.GetComponentInChildren<Slider>();
            }
            else
            {
                allyCanvas.gameObject.SetActive(false);
                enemyCanvas.gameObject.SetActive(true);
                HpBar = enemyCanvas.GetComponentInChildren<Slider>();
            }
        }
        HpBar.value = curHp / maxHp;
    }

    public void HandleCanvasInBush()
    {
        if (bushManager.isBush)
        {
            if (targetHandler.teamIdx == GameManager.instance.myTeamIdx)
            {
                allyCanvas.SetActive(true);
                enemyCanvas.SetActive(false);
            }
            else
            {
                allyCanvas.SetActive(false);
                enemyCanvas.SetActive(false);
            }
        }
    }

    [PunRPC]
    public float HandleHP(float damage, int attackerViewID)
    {
        PhotonView attacker = PhotonView.Find(attackerViewID);
        //attacker = GameManager.instance.allPhotonView[attackerViewID];
        if (attacker != null)
        {
            lastAttacker = attacker;
        }

        if (damage < 0)
        {
            if (this.gameObject.name != "Bruce")
            {
                isDamaged = true;
                if (isDamaged)
                {
                    StartCoroutine(HandlePlayerMat());
                    sfxHandler.playSound("Hurt");
                }
            }
        }

        else if (damage > 0)
        {
            // heal
        }

        curHp += damage;
        return curHp;
    }

    [PunRPC]
    public void RegenerateHpInBush()
    {
        if (bushManager.isBush && curHp < maxHp)
        {
            HandleHP(1, 0);
            HealPrefab.SetActive(true);
            soundHandler.enabled = true;
        }
        else
        {
            soundHandler.enabled = false;
            HealPrefab.SetActive(false);
        }
    }

    [PunRPC]
    public void UpdateHp()
    {
        hpPercentage = curHp / maxHp;
        HpBar.value = curHp / maxHp;
        if (hpPercentage < 0.3f)
        {
            isUrgent = true;
        }
        else
        {
            isUrgent = false;
        }

        if (curHp <= 0)
        {
            isDie = true;
            Mesh.gameObject.SetActive(false);
            FootEffect.gameObject.SetActive(false);
            MyCanvas.gameObject.SetActive(false);
            if (targetHandler != null)
            {
                sfxHandler.playSound("Die");
                if (targetHandler.isDestroy)
                {
                    int length = gemHandler.gem;

                    for (int i = 0; i < length; i++)
                    {
                        Vector3 gemsRandomPosition = CreateRandomPosition(this.transform);
                        photonView.RPC(nameof(HandleDieEffect), RpcTarget.All, gemsRandomPosition);
                    }
                    if (targetHandler.teamIdx == 1)
                    {
                        gemHandler.MinusMyTeamGem(length);
                    }
                    else if (targetHandler.teamIdx == 2)
                    {
                        gemHandler.MinusEnemyTeamGem(length);
                    }
                    cc.isTrigger = true;
                    gemHandler.gem = 0;
                    if (lastAttacker != null)
                    {
                        Debug.Log(lastAttacker.Owner.NickName + " 가 " + this.gameObject.name + "를 죽였습니다.");
                        Die(lastAttacker.ViewID);
                    }
                }

            }
            else
            {
                if (this.gameObject.name == "Bruce")
                {
                    print("Why");
                    PhotonNetwork.Destroy(this.gameObject);
                }
            }
        }
    }

    public void Die(int attackerViewID)
    {
        if (!isDead)
        {
            photonView.RPC(nameof(HandleDeath), RpcTarget.All, attackerViewID, photonView.ViewID);
            isDead = true;
        }
    }

    [PunRPC]
    public void HandleDeath(int attackerViewID, int playerViewID)
    {
        int teamIdx = targetHandler.teamIdx;

        PhotonView attacker = PhotonView.Find(attackerViewID);
        PhotonView player = PhotonView.Find(playerViewID);

        if (!logHandler.teamPlayerKills.ContainsKey(teamIdx))
        {
            logHandler.teamPlayerKills[teamIdx] = new Dictionary<string, int>();
        }

        if (attacker != null && player != null)
        {
            string attackerName = attacker.Owner.NickName;
            string playerName = player.Owner.NickName;

            if (!logHandler.teamPlayerKills[teamIdx].ContainsKey(attackerName))
            {
                logHandler.teamPlayerKills[teamIdx][attackerName] = 1;
            }
            else
            {
                logHandler.teamPlayerKills[teamIdx][attackerName]++;
            }

            //if (teamIdx == 1)
            //{
            //    killLogUiHandler.myTeamKill = true;
            //    killLogUiHandler.enemyTeamKill = false;
            //}
            //else if (teamIdx == 2)
            //{
            //    killLogUiHandler.myTeamKill = false;
            //    killLogUiHandler.enemyTeamKill = true;
            //}

            logHandler.RecordKill(attackerName);
            logHandler.RecordDeath(playerName);

            Debug.Log(attackerName + "가 " + playerName + "을(를) 죽였습니다.");
            string killLogText = attackerName + "가 " + playerName + "을(를) 처치했습니다.";

            if (!isKillLogVisible)
            {
                killLogTextHandler.SetKillLog(killLogText);
                isKillLogVisible = true;
            }

            string playerWithMostKillsInTeam = logHandler.GetPlayerWithMostKillsInTeam(teamIdx);
            int mostKillsInTeam = logHandler.teamPlayerKills[teamIdx][playerWithMostKillsInTeam];

            Debug.Log("팀 " + teamIdx + "에서 가장 많은 킬을 기록한 플레이어: " + playerWithMostKillsInTeam + " (" + mostKillsInTeam + " 킬)");
        }
    }


    [PunRPC]
    private void HandleDieEffect(Vector3 ranPos)
    {
        // Zem을 생성한다.
        if (photonView.IsMine)
        {
            PhotonNetwork.Instantiate("Crystal_Sparkle", ranPos, Quaternion.identity);
        }
    }

    // 잼을 떨어지는 위치를 랜덤한 위치로 생성하는 메소드
    [PunRPC]
    private Vector3 CreateRandomPosition(Transform pos)
    {

        float rangeX = pos.position.x;
        float rangeZ = pos.position.z;


        rangeX = Random.Range(pos.position.x - 0.4f, pos.position.x + 0.4f);
        rangeZ = Random.Range(pos.position.z - 0.4f, pos.position.z + 0.4f);


        Vector3 randomPosition = new Vector3(rangeX, 4.1f, rangeZ);
        return randomPosition;
    }


    private void HandleDamageTransparent(float parameter)
    {
        int meshCount = Mesh.transform.childCount;

        for (int i = 0; i < meshCount; i++)
        {
            SkinnedMeshRenderer playerMesh = Mesh.transform.GetChild(i).GetComponent<SkinnedMeshRenderer>();
            Color materialColor = playerMesh.materials[0].color;
            materialColor.g = parameter;
            materialColor.b = parameter;
            playerMesh.materials[0].color = materialColor;
        }
    }

    IEnumerator HandlePlayerMat()
    {
        HandleDamageTransparent(0.2f);
        yield return new WaitForSeconds(0.5f);
        HandleDamageTransparent(1);
    }
}