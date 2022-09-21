using System.Collections;
using UnityEngine;

public class GunController : MonoBehaviour
{
    [SerializeField] private GameObject bullet;
    [SerializeField] private float speed;
    [SerializeField] private Transform gunPos;
    

    public void Fire()
    {
        StartCoroutine(Reload());
        Instantiate(bullet, gunPos.position, Quaternion.identity);
    }

    public void Restart()
    {
        StopCoroutine(Reload());
    }

    private  IEnumerator Reload()
    {
        yield return new WaitForSeconds(speed);
        Fire();
    }
}
