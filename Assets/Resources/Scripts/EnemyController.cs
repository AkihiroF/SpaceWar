using System.Collections.Generic;
using DG.Tweening;
using Resources.Scripts.NoMano;
using UnityEngine;

public class EnemyController : MonoBehaviour
{
    [Header("Parameters Array")]
    [Space]
    private int volna = 0;
    private List<ArmyEnemy> enemysPosition;
    
    private float speed;

    [Header("Objects")] [Space]
    [SerializeField]  private GameObject fieldWithEnemy;
    [SerializeField] private GameObject prefabEnemy;
    [SerializeField] private GameObject finisGameObject;



    public delegate void addScore(int score);

    public delegate void damage();

    public event damage PlayerDamage;

    public event addScore NextVolna;

    public event addScore EnemyKill;

    private List<GameObject> enemys;
    private Vector3 _startPositionEnemy;
    private Vector3 _finishPositionEnemy;
    

    public ManipulateEnemy _manipulateEnemy;
    


    private void Start()
    {
        _startPositionEnemy = fieldWithEnemy.transform.position;
        var pos = finisGameObject.transform.position;
        _finishPositionEnemy = new Vector3(pos.x, pos.y - 5, pos.z);
        _manipulateEnemy = new ManipulateEnemy(fieldWithEnemy.transform);
    }

    private void CreateArmyEnemy(List<RowEnemy> enemysPoss)
    {
        volna++;
        NextVolna?.Invoke(volna);
        
        _manipulateEnemy.SetSizeField(enemysPoss);
        enemys = new List<GameObject>();
        for (int i = 0; i < enemysPoss.Count; i++)
        {
            foreach (var _is in enemysPoss[i]._isPlace)
            {
                if (_is)
                {
                    var enemy = CreateEnemyGameObject();
                    enemys.Add(enemy);
                    enemy.GetComponent<EnemyHP>().SetController(this);
                }
            }
        }
        _manipulateEnemy.SetPositionEnemy(enemys, enemysPoss);
        fieldWithEnemy.transform.DOMove(_finishPositionEnemy, speed);
    }
    public void ClearGameObject(GameObject cleanerObject)
    {
        var children = cleanerObject.transform.childCount;
        if(children == 0) return;
        for (int i = 0; i < children; i++)
        {
            Destroy(cleanerObject.transform.GetChild(i).gameObject);
        }
        
    }

    public void KillEnemy(GameObject body, int score)
    {
        EnemyKill?.Invoke(score);
        enemys.Remove(body);
        if (enemys.Count == 0)
        {
            _manipulateEnemy.RemovePositionArmy(_startPositionEnemy);
            ClearGameObject(fieldWithEnemy);
            if (volna != enemysPosition.Count)
            {
                CreateArmyEnemy(enemysPosition[volna]._PolkEnemies);
            }
        }
    }

    public GameObject CreateEnemyGameObject()
    {
        return Instantiate(prefabEnemy, fieldWithEnemy.transform);
    }

    public void DamagePlayer()
    {
        PlayerDamage?.Invoke();
    }

    public void LosePlayer()
    {
        DOTween.Clear();
    }

    public void RemovePositionArmy()
    {
        _manipulateEnemy.RemovePositionArmy(_startPositionEnemy);
    }
    public void StartAttack(List<ArmyEnemy> armyEnemies, float speedattack)
    {
        volna = 0;
        enemysPosition = armyEnemies;
        speed = speedattack;
        CreateArmyEnemy(enemysPosition[volna]._PolkEnemies);
    }
}
