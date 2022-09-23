
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class EnemyController : MonoBehaviour
{
    [Header("Parameters Array")]
    [Space] 
    private int row;
    private int collumn;
    private List<ArmyEnemy> enemysPosition;
    
    
    [SerializeField] private Vector2 sizeEnemy;
    private float speed;

    [Header("Objects")] [Space] 
    [SerializeField] private RectTransform _parentField;
    [SerializeField]  private GameObject fieldWithEnemy;
    [SerializeField] private GameObject prefabEnemy;
    [SerializeField] private GameObject prefabEmpty;
    [SerializeField] private GameObject finisGameObject;

    [SerializeField] private GameObject prefabBullet;

    private bool fire = true;


    public delegate void addScore(int score);

    public delegate void damage();

    public event damage PlayerDamage;

    public event addScore NextVolna;

    public event addScore EnemyKill;

    private List<GameObject> enemys;
    private RectTransform enemyField;
    private GridLayoutGroup enemyLayoutGroup;
    private Vector3 _startPositionEnemy;
    private Vector3 _finishPositionEnemy;

    public List<GameObject> fireenemy;

    private int volna = 0;
    private GameObject bullet;
    private Rigidbody2D _rbBullet;
    


    private void Start()
    {
        enemyField = fieldWithEnemy.GetComponent<RectTransform>();
        enemyLayoutGroup = fieldWithEnemy.GetComponent<GridLayoutGroup>();
        enemyLayoutGroup.cellSize = sizeEnemy;
        _startPositionEnemy = _parentField.position;
        var pos = finisGameObject.transform.position;
        _finishPositionEnemy = new Vector3(pos.x, pos.y - 5, pos.z);
        bullet = Instantiate(prefabBullet);
        _rbBullet = bullet.GetComponent<Rigidbody2D>();
        _rbBullet.isKinematic = true;
    }

    public void RemovePositionArmy()
    {
        
        _parentField.position =_startPositionEnemy;
        ClearGameObject(fieldWithEnemy);
        
    }

    private void SetSizeField(List<RowEnemy> army)
    {
        row = army.Count;
        collumn = MathParameters.MatchCollumnEnemy(army);
        var size = MathParameters.MathSizeField(row, collumn, sizeEnemy, enemyLayoutGroup.spacing.x+enemyLayoutGroup.padding.bottom);
        enemyField.SetSize(size);
    }

    private void ClearGameObject(GameObject cleanerObject)
    {
        var children = cleanerObject.transform.childCount;
        if(children == 0) return;
        Debug.Log(children);
        for (int i = 0; i < children; i++)
        {
            Destroy(cleanerObject.transform.GetChild(i).gameObject);
        }
    }

    private void CreateArmyEnemy(List<RowEnemy> enemysPoss)
    {
        volna++;
        NextVolna?.Invoke(volna);
        SetSizeField(enemysPoss);
        enemyLayoutGroup.enabled = true;
        fireenemy = new List<GameObject>();
        enemys = new List<GameObject>();
        for (int i = 0; i < enemysPoss.Count; i++)
        {
            foreach (var _is in enemysPoss[i]._isPlace)
            {
                if (_is)
                {
                    CreateGameObject(i == enemysPoss.Count-1);
                }
                else
                {
                    CreateEmpty();
                }
            }
        }
        _parentField.DOMove(_finishPositionEnemy, speed);
    }

    public void KillEnemy(GameObject body, int score, GameObject nextfire)
    {
        enemyLayoutGroup.enabled = false;
        EnemyKill?.Invoke(score);
        enemys.Remove(body);
        fireenemy.Remove(body);
        if(nextfire != null) fireenemy.Add(nextfire);
        if (enemys.Count == 0)
        {
            DOTween.Clear();
            RemovePositionArmy();
            enemysPosition.Remove(enemysPosition[0]);
            if (enemysPosition.Count != 0)
            {
                CreateArmyEnemy(enemysPosition[0]._PolkEnemies);
            }
        }
    }

    private int numb = 0;

    private void CreateGameObject(bool last)
    {
        GameObject enemy = Instantiate(prefabEnemy, fieldWithEnemy.transform);
        enemy.GetComponent<EnemyHP>().SetController(this);
        enemys.Add(enemy);
        numb++;
        enemy.name = $"{numb}";
        if(last) fireenemy.Add(enemy);
    }

    private void CreateEmpty()
    {
        Instantiate(prefabEmpty, fieldWithEnemy.transform);
    }

    public void StartFire()
    {
        if(fire) return;
        fire = true;
        _rbBullet.isKinematic = false;
        Fire();
    }

    private void Fire()
    {
        var enemy = Random.Range(0, fireenemy.Count-1);
        _rbBullet.isKinematic = true;
        StartCoroutine(FireEnemy(fireenemy[enemy].transform, bullet));
    }

    public void DamagePlayer()
    {
        PlayerDamage?.Invoke();
    }

    public void StartAttack(List<ArmyEnemy> armyEnemies, float speedattack)
    {
        enemysPosition = armyEnemies;
        speed = speedattack;
        CreateArmyEnemy(enemysPosition[0]._PolkEnemies);
    }

    public void LosePlayer()
    {
        DOTween.Clear();
    }

    private IEnumerator FireEnemy(Transform enemy, GameObject bullet)
    {
        _rbBullet.isKinematic = false;
        bullet.transform.position = enemy.position;
        yield return new WaitForSeconds(1);
        Fire();
    }
    
}
