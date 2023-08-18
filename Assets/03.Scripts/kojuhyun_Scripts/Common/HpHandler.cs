using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HpHandler : MonoBehaviour
{
    BushManager bushManager;
    SoundHandler soundHandler;
    TargetHandler targetHandler;
    GemHandler gemHandler;

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
        gem = Resources.Load<GameObject>("Prefabs/Crystal_Sparkle");

        curHp = maxHp;

        bushManager = GetComponent<BushManager>();
        soundHandler = GetComponentInChildren<SoundHandler>();
        targetHandler = GetComponentInParent<TargetHandler>();
        gemHandler = GetComponent<GemHandler>();
    }



    public float HandleHP(float damage)
    {
        if (damage < 0)
        {
            isDamaged = true; // 피격 상태 설정
            if (isDamaged)
            {
                StartCoroutine(HandlePlayerMat());
            }
        }

        else if (damage > 0)
        {
            // heal
        }

        curHp += damage;
        return curHp;
    }

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

    public void UpdateHp()
    {
        hpPercentage = curHp / maxHp;
        HpBar.value = curHp / maxHp;
        if (hpPercentage < 0.2f ? isUrgent = true : isUrgent = false)

            if (curHp <= 0)
            {
                isDie = true;
                if (targetHandler.isDestroy)
                {


                    // 보유하고 있는 잼을 뿌린다. 
                    // 플레이어가 죽은 위치를 기준으로 잼을 떨어지는 위치로 설정한 후 랜덤한 위치로 생성한다.
                    int length = gemHandler.gem;

                    // 잼의 갯수만큼 반복문을 돌면서 랜덤한 위치에 생성한 후 
                    for (int i = 0; i < length; i++)
                    {
                        Vector3 gemsRandomPosition = CreateRandomPosition(this.transform);

                        // Zem을 생성한다.
                        Instantiate(gem, gemsRandomPosition, Quaternion.identity);
                    }

                    // 보유한 브롤의 잼의 숫자를 0으로 초기화. 
                    gemHandler.gem = 0;

                    // 해당 브롤러를 파괴한다. 
                    Destroy(this.gameObject);

                }
            }
    }

    // 잼을 떨어지는 위치를 랜덤한 위치로 생성하는 메소드
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