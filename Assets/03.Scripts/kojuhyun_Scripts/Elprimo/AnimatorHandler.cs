using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
public class AnimatorHandler : MonoBehaviourPun
{
    Animator anim;

    private void Awake()
    {
        if(!photonView.IsMine)
        {
            this.enabled = false;
        }       
        anim = GetComponentInChildren<Animator>();
    }
    [PunRPC]
    public void playTargetAnim(string target)
    {
        anim.Play(target);
    }

    [PunRPC]
    public void SetTriggerParameters(string target)
    {
        anim.SetTrigger(target);
    }
}
