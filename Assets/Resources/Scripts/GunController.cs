using System.Collections;
using UnityEngine;

public class GunController : MonoBehaviour
{
    [SerializeField] private GameObject bullet;
    [SerializeField] private float speed;
    [SerializeField] private Transform gunPos;
    private bool finish = false;
    

    public void Fire()
    {
        if(finish) return;
        StartCoroutine(Reload());
        Instantiate(bullet, gunPos.position, Quaternion.identity);
    }

    public void Restart(bool znach)
    {
        finish = znach;
    }

    private  IEnumerator Reload()
    {
        yield return new WaitForSeconds(speed);
        Fire();
    }
}
