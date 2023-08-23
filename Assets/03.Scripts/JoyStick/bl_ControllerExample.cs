using UnityEngine;

public class bl_ControllerExample : MonoBehaviour {

	[SerializeField]private bl_Joystick Joystick;//Joystick reference for assign in inspector

    [SerializeField]private float Speed = 5;

    void Update()
    {
        float v = Joystick.Vertical; //get the vertical value of jayjoystick
        float h = Joystick.Horizontal;//get the horizontal value of jayjoystick

        Vector3 translate = (new Vector3(h, 0, v) * Time.deltaTime) * Speed;
        transform.Translate(translate);
    }
}