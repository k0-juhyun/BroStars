using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class J_GunController : MonoBehaviour
{
    //최대 총알 발사 횟수
    public int maxBulletcount = 5;
    //현재 발사 횟수
    private int currentBulletcount = 0;
    //총알 간격
    //private float fireRateTime = 0.2f;
    

    //적군 리스트
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
        //가장 가까운 적군
        Transform nearestEnemy = GetNearestEnemy();
        if(nearestEnemy != null)
        {
            //가장 가까운 적군의 방향
            Vector3 targetDir = (nearestEnemy.position - this.transform.position).normalized;
            //ShootBullet
            ShootBullet();

        }
    }

    Transform GetNearestEnemy()
    {
        float closestDistance = Mathf.Infinity;
        Transform nearestEnemy = null;

        //  모든 적을 발견하고 가장 가까운 적을 발견하는 반복
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

    // 목록에 적 추가
    public void AddEnemy(Transform enemyTransform)
    {
        enemies.Add(enemyTransform);
    }

    // 목록에 적 제거
    public void RemoveEnemy(Transform enemyTransform)
    {
        enemies.Remove(enemyTransform);
    }
}