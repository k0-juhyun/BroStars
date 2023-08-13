using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class J_animatorHandler : MonoBehaviour
{
    Animator anim;

    private void Awake()
    {
        anim = GetComponentInChildren<Animator>(); 
    }

    public void playTargetAnim(string target)
    {
        anim.Play(target);
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
