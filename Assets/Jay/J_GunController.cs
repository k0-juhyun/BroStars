using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class J_GunController : MonoBehaviour
{
    //�ִ� �Ѿ� �߻� Ƚ��
    public int maxBulletcount = 5;
    //���� �߻� Ƚ��
    private int currentBulletcount = 0;
    //�Ѿ� ����
    //private float fireRateTime = 0.2f;
    

    //���� ����Ʈ
    private List<Transform> enemies = new List<Transform>();

    public GameObject bulletPrefabs;
    public Transform bulletSpawnPoint;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void Update()
    {
       if(currentBulletcount < maxBulletcount)
        {
            ShootBullet();
        }      
    }
    public void ShootBullet()
    {
        Instantiate(bulletPrefabs, bulletSpawnPoint.position, bulletSpawnPoint.rotation);
        currentBulletcount++;
    }
    public void AutoAim()
    {
        //���� ����� ����
        Transform nearestEnemy = GetNearestEnemy();
        if(nearestEnemy != null)
        {
            //���� ����� ������ ����
            Vector3 targetDir = (nearestEnemy.position - this.transform.position).normalized;
            //ShootBullet
            ShootBullet();

        }
    }

    Transform GetNearestEnemy()
    {
        float closestDistance = Mathf.Infinity;
        Transform nearestEnemy = null;

        //  ��� ���� �߰��ϰ� ���� ����� ���� �߰��ϴ� �ݺ�
        foreach (Transform enemy in enemies)
        {
            float distance = Vector3.Distance(transform.position, enemy.position);
            if (distance < closestDistance)
            {
                closestDistance = distance;
                nearestEnemy = enemy;
            }
        }

        return nearestEnemy;
    }

    // ��Ͽ� �� �߰�
    public void AddEnemy(Transform enemyTransform)
    {
        enemies.Add(enemyTransform);
    }

    // ��Ͽ� �� ����
    public void RemoveEnemy(Transform enemyTransform)
    {
        enemies.Remove(enemyTransform);
    }
}