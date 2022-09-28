using System.Collections;
using DG.Tweening;
using UnityEngine;

public class GunController : MonoBehaviour
{
    [SerializeField] private GameObject bullet;
    [SerializeField] private float speed;
    [SerializeField] private Transform gunPos;

    [SerializeField] private float _damage;

    private GameObject _activeBullet;
    private bool finish = false;
    

    public void Fire()
    {
        if(finish) return;
        _activeBullet.transform.position = gunPos.position;
        _activeBullet.transform.DOMove(GetDirectionBullet(), speed);
        StartCoroutine(Reload());
        
    }

    public void Restart(bool znach)
    {
        finish = znach;
        if (znach == false)
        {
            _activeBullet = Instantiate(bullet, gunPos.position, Quaternion.identity);
            _activeBullet.GetComponent<BulletController>().SetParameter(_damage, this);
        }
        else
        {
            Destroy(_activeBullet);
        }
    }

    private Vector2 GetDirectionBullet()
    {
        RaycastHit2D[] raycastHit2D = Physics2D.RaycastAll(_activeBullet.transform.position, Vector2.up * 100);
        if (raycastHit2D.Length <= 1) return Vector2.zero;
        if (raycastHit2D[1].collider.gameObject.layer == 7) return raycastHit2D[2].point + Vector2.up;
        return raycastHit2D[1].point + Vector2.up;
    }

    private  IEnumerator Reload()
    {
        yield return new WaitForSeconds(speed);
        Fire();
    }
}
