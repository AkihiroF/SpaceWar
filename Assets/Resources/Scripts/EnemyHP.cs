using UnityEngine;

public class EnemyHP : MonoBehaviour
{
    [SerializeField] private float _HP;
    [SerializeField] private int score;

    private EnemyController _controller;

    public void Damage(float damage)
    {
        _HP -= damage;
        if (_HP <= 0)
        {
            _controller.KillEnemy(this.gameObject, score);
            DestroyEnemy();
        }
    }

    public void SetController(EnemyController controller) => _controller = controller;

    private void OnTriggerEnter2D(Collider2D other)
    {
        var gameobj = other.gameObject;
        if (gameobj.CompareTag("Player") | gameobj.CompareTag("FInishForEnemy"))
        {
            _controller.DamagePlayer();
            _controller.KillEnemy(this.gameObject, 0);
            DestroyEnemy();
        }
    }

    private void DestroyEnemy() => Destroy(this.gameObject);
}
