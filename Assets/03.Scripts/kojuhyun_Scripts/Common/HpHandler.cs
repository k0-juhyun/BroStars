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

    [Header("�÷��̾� ����")]
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

    // �߰� ������Ʈ
    private GameObject gem;


    private void Awake()
    {
        // �߰� ��ũ��Ʈ.
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
            isDamaged = true; // �ǰ� ���� ����
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


                    // �����ϰ� �ִ� ���� �Ѹ���. 
                    // �÷��̾ ���� ��ġ�� �������� ���� �������� ��ġ�� ������ �� ������ ��ġ�� �����Ѵ�.
                    int length = gemHandler.gem;

                    // ���� ������ŭ �ݺ����� ���鼭 ������ ��ġ�� ������ �� 
                    for (int i = 0; i < length; i++)
                    {
                        Vector3 gemsRandomPosition = CreateRandomPosition(this.transform);

                        // Zem�� �����Ѵ�.
                        Instantiate(gem, gemsRandomPosition, Quaternion.identity);
                    }

                    // ������ ����� ���� ���ڸ� 0���� �ʱ�ȭ. 
                    gemHandler.gem = 0;

                    // �ش� ��ѷ��� �ı��Ѵ�. 
                    Destroy(this.gameObject);

                }
            }
    }

    // ���� �������� ��ġ�� ������ ��ġ�� �����ϴ� �޼ҵ�
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