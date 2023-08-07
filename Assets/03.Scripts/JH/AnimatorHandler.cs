using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimatorHandler : MonoBehaviour
{
    Animator anim;

    private void Awake()
    {
        anim = GetComponent<Animator>();
    }

    public void playerTargetAnim(string target)
    {
        anim.Play(target);
    }
}
