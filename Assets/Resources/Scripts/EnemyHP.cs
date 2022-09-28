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
            Delete();
        }
    }

    public void SetController(EnemyController controller) => _controller = controller;

    private void OnTriggerEnter2D(Collider2D other)
    {
        var gameobj = other.gameObject;
        if (gameobj.layer ==  7)
        {
            Damage(gameobj.GetComponent<BulletController>().DamageForEnemy());
        }

        if (gameobj.layer == 8 | gameobj.layer == 9)
        {
            _controller.DamagePlayer();
            _controller.KillEnemy(this.gameObject, 0);
            Delete();
        }
    }

    private void Delete() => Destroy(this.gameObject);
}
