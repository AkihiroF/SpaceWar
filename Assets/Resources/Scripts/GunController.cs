using System;
using System.Collections;
using System.Collections.Generic;
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
        Instantiate(bullet, gunPos.position, Quaternion.identity);
        StartCoroutine(Reload());
    }

    IEnumerator Reload()
    {
        yield return new WaitForSeconds(speed);
        Fire();
    }
}
