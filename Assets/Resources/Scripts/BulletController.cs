using UnityEngine;

public class BulletController : MonoBehaviour
{
    [SerializeField] private Rigidbody2D _rb;
    [SerializeField] private float force;
    [SerializeField] private float _damage;


    private void OnEnable()
    {
        _rb.AddForce(Vector2.up * force, ForceMode2D.Impulse);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("DeleteBullet"))
        {
            Destroy(this.gameObject);
        }

        if (collision.gameObject.CompareTag("Enemy"))
        {
            collision.GetComponent<EnemyHP>().Damage(_damage);
            Destroy(this.gameObject);
        }
    }
    
}
