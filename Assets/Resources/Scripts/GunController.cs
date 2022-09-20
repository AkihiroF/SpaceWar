using System.Collections;
using UnityEngine;

public class GunController : MonoBehaviour
{
    [SerializeField] private GameObject bullet;
    [SerializeField] private float speed;
    [SerializeField] private Transform gunPos;

    private void Start()
    {
        Fire();
        
    }

    private void Fire()
    {
        StartCoroutine(Reload());
        Instantiate(bullet, gunPos.position, Quaternion.identity);
    }

    private  IEnumerator Reload()
    {
        yield return new WaitForSeconds(speed);
        Fire();
    }
}
