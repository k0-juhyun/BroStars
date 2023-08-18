using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZemManager : MonoBehaviour
{
    // 소환할 Zem 오브젝트
    public GameObject zem;
    // zem을 생성할 오브젝트 
    public GameObject rangeObject;
    // zem을 생성할 오브젝트의 BoxCollider  
    BoxCollider rangeCollider;

    // Zem 이펙트 ParticleSystem. 
    private ParticleSystem zemEffect;

    // zem을 생성할 오브젝트의 BoxCollider의 중심 위치
    private float centerX;
    private float centerZ;

    private void Awake()
    {
        zemEffect = this.gameObject.GetComponentInChildren<ParticleSystem>();
        rangeCollider = rangeObject.GetComponent<BoxCollider>();
        StartCoroutine(RandomCreateCoroutine());
    }

    private void Start()
    {

        // BoxCollider의 중심 위치를 가져온다. 
        centerX = rangeCollider.bounds.center.x;
        centerZ = rangeCollider.bounds.center.z;

    }

    IEnumerator RandomCreateCoroutine()
    {
        while (true)
        {
            // 실제 플레이에서 잼 생성 시간은 7초 간격으로 생성된다. 
            yield return new WaitForSeconds(7f);

            // Zem 이펙트 활성화.
            if (!zemEffect.isPlaying)
            {
                zemEffect.Play();
            }

            yield return new WaitForSeconds(0.2f);

            // Zem을 생성할 위치는 BoxCollider의 중심 위치
            Vector3 zemsRandomPosition = new Vector3(centerX, rangeObject.transform.position.y, centerZ);

            // Zem 생성 사운드 실행.
            SoundManager.instance.PlayZemBGM();

            // Zem을 생성한다.
            GameObject zems = Instantiate(zem, zemsRandomPosition, Quaternion.identity);

            // CreateRandomPosition()의 위치를 목표 지점으로 설정한다. 
            Vector3 targetPosition = CreateRandomPosition();

            // Zem이 향하는 방향을 만들고 싶다.
            Vector3 dir = (targetPosition - zemsRandomPosition).normalized;

            // 목표 지점으로 향하는 방향을 생성.
            Vector3 targetDir = (dir + zems.transform.up).normalized;

            // Rigidbody를 이용하여 위로 상승 후 떨어짐.
            zems.GetComponent<Rigidbody>().AddForce(targetDir, ForceMode.Impulse);
        }
    }



    // 잼이 떨어지는 위치(EndPoint) 를 생성하는 메소드
    Vector3 CreateRandomPosition()
    {
        Vector3 originPosition = rangeObject.transform.position;

        // BoxCollider의 사이즈를 가져오는 bound.size 사용
        float rangeX = rangeCollider.bounds.size.x;
        float rangeZ = rangeCollider.bounds.size.z;

        // bound.size의 랜덤한 위치를 x,z를 생성한다. 
        rangeX = Random.Range((rangeX / 2) * -1, rangeX / 2);
        rangeZ = Random.Range((rangeZ / 2) * -1, rangeZ / 2);

        // 랜덤한 벡터값 생성 
        Vector3 randomPosition = new Vector3(rangeX, 0f, rangeZ);

        // 잼을 떨어지는 위치를 지정한다.
        Vector3 createPosition = originPosition + randomPosition;

        return createPosition;
    }
}
