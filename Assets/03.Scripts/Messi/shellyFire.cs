using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shellyFire : MonoBehaviour
{
    [SerializeField]
    public GameObject bFactory;
    public Transform firePos;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //fire�� �ϸ� 
        if(Input.GetButtonDown("Fire1"))
        {
            //�Ѿ��� ����
            GameObject bullet = Instantiate(bFactory);
            bullet.transform.position = firePos.transform.position;
            bullet.transform.rotation = firePos.transform.rotation;
        }

    }
}
