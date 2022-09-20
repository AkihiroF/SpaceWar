using DG.Tweening;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [SerializeField] private Transform _bodyPlayer;
    [SerializeField] private float speed;
    [SerializeField] private Vector2 ogranichenie;

    public void Move(Vector2 directionmoving)
    {
        var move = new Vector3(directionmoving.x * speed, 0);
        _bodyPlayer.position = Vector3.Lerp(_bodyPlayer.position, _bodyPlayer.position + move, Time.deltaTime);
        _bodyPlayer.position = new Vector3(Mathf.Clamp(_bodyPlayer.position.x, ogranichenie.x, ogranichenie.y),
            _bodyPlayer.position.y);
    }

    public void RotatePlayer(Vector2 directionmoving)
    {
        if (directionmoving == Vector2.left)
        {
            _bodyPlayer.DORotate(new Vector3(0, -35, 0), 0.3f);
        }

        if (directionmoving == Vector2.right)
        {
            _bodyPlayer.DORotate(new Vector3(0, 35, 0), 0.3f);
        }

        if (directionmoving == Vector2.zero)
        {
            _bodyPlayer.DORotate(Vector3.zero, speed);
        }
    }
    
}
