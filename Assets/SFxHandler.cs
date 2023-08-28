using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SFxHandler : MonoBehaviour
{
    AudioSource audioSource;

    public AudioClip Normal;
    public AudioClip Ulti;
    public AudioClip Hurt;
    public AudioClip Kill;
    public AudioClip Die;
    public AudioClip LeonUltiEnd;
    public AudioClip SpawnBruce;

    private void Awake()
    {
        audioSource = GetComponent<AudioSource>();
    }

    public void playSound(string action)
    {
        switch (action)
        {
            case "Normal":
                audioSource.clip = Normal;
                break;
            case "Ulti":
                audioSource.clip = Ulti;
                break;
            case "Hurt":
                audioSource.clip = Hurt;
                break;
            case "Kill":
                audioSource.clip = Kill;
                break;
            case "Die":
                audioSource.clip = Die;
                break;
            case "LeonUltiEnd":
                audioSource.clip = LeonUltiEnd;
                break;
            case "SpawnBruce":
                audioSource.clip = SpawnBruce;
                break;
        }
        audioSource.Play();
    }
}
