using System;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputManager : MonoBehaviour
{
    [SerializeField] private PlayerController _controller;

    private Vector2 direction;
    public void OnMoving(InputValue value)
    {
        direction = value.Get<Vector2>();
    }

    private void Update()
    {
        if(direction == Vector2.zero) return;
        _controller.Move(direction);
    }
}
