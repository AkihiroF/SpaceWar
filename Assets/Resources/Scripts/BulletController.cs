using DG.Tweening;
using UnityEngine;

public class BulletController : MonoBehaviour
{
    private float _damage;

    public void SetParameter(float damage, GunController controller)
    {
        _damage = damage;
    }

    public float DamageForEnemy()
    {
        transform.DOComplete();
        transform.position = new Vector3(255, 255);
        return _damage;
    }
}
