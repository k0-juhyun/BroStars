using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandleChange : MonoBehaviour
{
    public GameObject[] Brawlers;

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            print("Elprimo");
            Brawlers[0].SetActive(false);    
            Brawlers[1].SetActive(true);
        }
        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            print("Shelly");
            Brawlers[2].SetActive(true);
            Brawlers[1].SetActive(false);
        }
    }
}
