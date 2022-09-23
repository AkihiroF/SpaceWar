using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class EnemyHP : MonoBehaviour
{
    [SerializeField] private float _HP;
    [SerializeField] private int score;

    private EnemyController _controller;
    public GameObject enemyup;
    

    public void Damage(float damage)
    {
        _HP -= damage;
        if (_HP <= 0)
        {
            var en = UpEnemy();
            enemyup = en;
            _controller.KillEnemy(this.gameObject, score, en);
            _controller.StartFire();
            DestroyEnemy();
        }
    }

    private GameObject UpEnemy()
    {
        RaycastHit2D[] hit = Physics2D.RaycastAll(transform.position, Vector2.up*200);
        if (hit.Length <= 1) return null;
        if (hit[1].collider.CompareTag("Enemy"))
        {
            return hit[1].transform.gameObject;
        }
        return null;
    }

    public void SetController(EnemyController controller) => _controller = controller;

    private void OnTriggerEnter2D(Collider2D other)
    {
        var gameobj = other.gameObject;
        if (gameobj.CompareTag("Player") | gameobj.CompareTag("FInishForEnemy"))
        {
            _controller.DamagePlayer();
            _controller.KillEnemy(this.gameObject, 0, UpEnemy());
            DestroyEnemy();
        }
    }

    private void DestroyEnemy() => Destroy(this.gameObject);
    
}
