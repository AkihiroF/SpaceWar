using DG.Tweening;
using UnityEngine;

public class MovingBackground : MonoBehaviour
{
    [SerializeField] private float speed;
    [SerializeField] private GameObject _bodyBackGround;
    [SerializeField] private Transform _endPoint;


    public void StartMoving()
    {
        _bodyBackGround.transform.DOMove(_endPoint.position, speed);
    }
}
