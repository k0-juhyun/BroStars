using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class CamShakeHandler : MonoBehaviour
{
    JHJoyStick jhJoystick;
    JayJoyStick jayJoystick;

    public bool camShake;
    private void Awake()
    {
        jhJoystick = GetComponentInChildren<JHJoyStick>();
        jayJoystick = GetComponentInChildren<JayJoyStick>();
    }
}
