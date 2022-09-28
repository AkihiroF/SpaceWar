using DG.Tweening;
using UnityEngine;

public class MovingBackground : MonoBehaviour
{
    [SerializeField] private GameObject _bodyBackGround;
    [SerializeField] private Transform _endPoint;
    private Vector3 startpos;


    private void Start()
    {
        startpos = transform.position;
    }

    public void StartMoving(float speed)
    {
        transform.position = startpos;
        _bodyBackGround.transform.DOMove(_endPoint.position, speed);
    }
}
