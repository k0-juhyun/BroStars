using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Photon.Pun;

public class Zem : MonoBehaviourPun
{
    // ���� ȸ�� �ӵ��� �����ϴ� ����.
    private float rotateSpeed = 5f;
    // ���� ȸ���� ��ǥ ȸ�� ���� �����ϴ� ����.
    Quaternion zemRotation;

    AudioSource audioSource;
    // �� ���� �� ����� ����� Ŭ��. 
    public AudioClip createSound;
    // ���� ĳ���Ϳ� ����� �� ����� ����� Ŭ��.
    public AudioClip _absortionSound;

    // �� ī��Ʈ UI TextMeshProUGUI ������Ʈ
    private TMP_Text zemScore;

    private void Awake()
    {
        //audioSource = GetComponent<AudioSource>();
        GetComponent<BoxCollider>().enabled = false;
        // �� ī��� UI ������Ʈ 
        zemScore = GameObject.Find("ZemCount").GetComponent<TMP_Text>();
    }

    // Start is called before the first frame update
    void Start()
    {

        // �ʱ� ȸ������ ����.
        zemRotation = this.transform.rotation;

    }

    // Update is called once per frame
    void Update()
    {
        if (this.transform.position.y <= 0.3f + 4f)
        {
            GetComponent<Rigidbody>().velocity = Vector3.zero;
            GetComponent<BoxCollider>().enabled = true;
        }

        // �ʱ� ȸ������ �������� ���� �ӵ��� ȸ���ϰ� �ʹ�.
        zemRotation *= Quaternion.AngleAxis(2.5f, Vector3.up);
        this.transform.rotation = Quaternion.Lerp(transform.rotation, zemRotation, 1f * rotateSpeed * Time.deltaTime);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            StartCoroutine(AbsorptedToCollider(collision));


            if (photonView.IsMine)
            {
                if (collision.gameObject.layer == LayerMask.NameToLayer("myTeam"))
                {
                    // GemHandler�� PlusGem() �޼ҵ带 ���� gem ���� ī��� ����. 
                    GemHandler gemCountUp = collision.gameObject.GetComponent<GemHandler>();
                    // RPC ALL�� PlusGem()�� ����Ͽ� Gem�� ������ ������Ų��. 
                    gemCountUp.PlusGem();
                    GameManager.instance.myTeam.myTeamScore++;
                    PhotonNetwork.Destroy(gameObject);
                }
                else if (collision.gameObject.layer == LayerMask.NameToLayer("enemyTeam"))
                {
                    // GemHandler�� PlusGem() �޼ҵ带 ���� gem ���� ī��� ����. 
                    GemHandler gemCountUp = collision.gameObject.GetComponent<GemHandler>();
                    // RPC ALL�� PlusGem()�� ����Ͽ� Gem�� ������ ������Ų��. 
                    gemCountUp.PlusGem();
                    GameManager.instance.enemyTeam.EnemyTeamScore++;
                    PhotonNetwork.Destroy(gameObject);
                }

            }
        }

        IEnumerator AbsorptedToCollider(Collision collision)
        {
            float time = 0;
            float absortionTime = 0.7f;
            Vector3 startPos = transform.position;
            Vector3 originalScale = transform.localScale;

            // �� ȹ�� ���� �߰� 
            SoundManager_01.instance.PlaySFX(SoundManager_01.ESfx.GEM_GAINSOUND);

            // �� ȹ�� ����Ʈ �߰�.


            while (time < absortionTime)
            {
                time += Time.deltaTime;

                transform.position =
                    Vector3.Lerp(
                        startPos,
                        collision.transform.position + new Vector3(0, 1, 0),
                        time / absortionTime);
                transform.localScale =
                    Vector3.Lerp(
                        originalScale,
                        new Vector3(0, 0, 0),
                        time / absortionTime);

                yield return null;
            }


        }

    }
}
