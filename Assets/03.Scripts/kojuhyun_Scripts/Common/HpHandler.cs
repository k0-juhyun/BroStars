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

    [Header("HP Bar")]
    public Slider HpBar;

    [Header("Particle System")]
    public GameObject HealPrefab;
    public GameObject Mesh;

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

    // 추가 오브젝트
    private GameObject gem;


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

        if (this.gameObject.name != "Bruce")
        {
            targetHandler.Target = this.gameObject;
        }
    }


    [PunRPC]
    public float HandleHP(float damage)
    {
        if (damage < 0)
        {
            if (this.gameObject.name != "Bruce")
            {
                isDamaged = true;
                if (isDamaged)
                {
                    StartCoroutine(HandlePlayerMat());
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
            HandleHP(1);
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
            if (targetHandler.isDestroy)
            {
                int length = gemHandler.gem;

                for (int i = 0; i < length; i++)
                {
                    Vector3 gemsRandomPosition = CreateRandomPosition(this.transform);
                    photonView.RPC(nameof(HandleDieEffect), RpcTarget.All, gemsRandomPosition);
                }

                gemHandler.gem = 0;

                Destroy(this.gameObject);
            }

            if (this.gameObject.name == "Bruce")
            {
                Destroy(this.gameObject);
            }
        }
    }

    [PunRPC]
    private void HandleDieEffect(Vector3 ranPos)
    {
        // Zem을 생성한다.
        Instantiate(gem, ranPos, Quaternion.identity);
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