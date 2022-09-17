using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [SerializeField] private Transform _bodyPlayer;
    [SerializeField] private float speed;
    [SerializeField] private Vector2 ogranichenie;

    public void Move(Vector2 directionmoving)
    {
        var move = new Vector3(directionmoving.x * speed, 0);
        _bodyPlayer.Translate(move * Time.deltaTime);
        _bodyPlayer.position = new Vector3(Mathf.Clamp(_bodyPlayer.position.x, ogranichenie.x, ogranichenie.y),
            _bodyPlayer.position.y);
    }
}
