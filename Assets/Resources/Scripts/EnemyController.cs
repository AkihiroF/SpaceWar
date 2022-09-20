using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Threading;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class EnemyController : MonoBehaviour
{
    [Header("Parameters Array")]
    [Space] 
    private int row;
    private int collumn;
    [SerializeField] private List<ArmyEnemy> enemysPosition;
    
    
    [SerializeField] private Vector2 sizeEnemy;
    [SerializeField] private float speed;

    [Header("Objects")] [Space] 
    [SerializeField] private RectTransform _parentField;
    [SerializeField]  private GameObject fieldWithEnemy;
    [SerializeField] private GameObject prefabEnemy;
    [SerializeField] private GameObject prefabEmpty;
    [SerializeField] private GameObject finisGameObject;


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

    private int volna = 0;
    


    private void Start()
    {
        enemyField = fieldWithEnemy.GetComponent<RectTransform>();
        enemyLayoutGroup = fieldWithEnemy.GetComponent<GridLayoutGroup>();
        enemyLayoutGroup.cellSize = sizeEnemy;
        _startPositionEnemy = _parentField.position;
        var pos = finisGameObject.transform.position;
        _finishPositionEnemy = new Vector3(pos.x, pos.y - 5, pos.z);
        Debug.Log(_parentField.position);
        CreateArmyEnemy(enemysPosition[volna]._PolkEnemies);
    }

    private void RemovePositionArmy()
    {
        
        _parentField.position =_startPositionEnemy;
        ClearGameObject(fieldWithEnemy);
        
    }

    private void SetSizeField(List<RowEnemy> army)
    {
        row = army.Count;
        collumn = MathParameters.MatchCollumnEnemy(army);
        var size = MathParameters.MathSizeField(row, collumn, sizeEnemy, enemyLayoutGroup.spacing.x+enemyLayoutGroup.padding.bottom);
        Debug.Log(size);
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
        SetSizeField(enemysPoss);
        enemyLayoutGroup.enabled = true;
        enemys = new List<GameObject>();
        for (int i = 0; i < enemysPoss.Count; i++)
        {
            foreach (var _is in enemysPoss[i]._isPlace)
            {
                if (_is)
                {
                    CreateGameObject();
                }
                else
                {
                    CreateEmpty();
                }
            }
        }
        _parentField.DOMove(_finishPositionEnemy, speed);
    }

    public void KillEnemy(GameObject body, int score)
    {
        enemyLayoutGroup.enabled = false;
        EnemyKill?.Invoke(score);
        enemys.Remove(body);
        if (enemys.Count == 0)
        {
            DOTween.Clear();
            RemovePositionArmy();
            enemysPosition.Remove(enemysPosition[0]);
            if (enemysPosition.Count != 0)
            {
                volna++;
                Debug.Log(volna);
                NextVolna?.Invoke(volna);
                CreateArmyEnemy(enemysPosition[0]._PolkEnemies);
            }
        }
    }

    private void CreateGameObject()
    {
        GameObject enemy = Instantiate(prefabEnemy, fieldWithEnemy.transform);
        enemy.GetComponent<EnemyHP>().SetController(this);
        enemys.Add(enemy);
    }

    private void CreateEmpty()
    {
        Instantiate(prefabEmpty, fieldWithEnemy.transform);
    }

    public void DamagePlayer()
    {
        PlayerDamage?.Invoke();
    }
}
