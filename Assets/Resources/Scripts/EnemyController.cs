using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnemyController : MonoBehaviour
{
    [Header("Parameters Array")]
    [Space]
    [SerializeField] private int row;
    [SerializeField] private int collumn;
    [SerializeField] private Vector2 sizeEnemy;

    [Header("Objects")] [Space] 
    [SerializeField]  private GameObject fieldWithEnemy;

    [SerializeField] private GameObject prefabEnemy;

    private List<GameObject> enemys;
    private RectTransform enemyField;
    private GridLayoutGroup enemyLayoutGroup;
    


    private void Start()
    {
        enemyField = fieldWithEnemy.GetComponent<RectTransform>();
        enemyLayoutGroup = fieldWithEnemy.GetComponent<GridLayoutGroup>();
        enemyLayoutGroup.cellSize = sizeEnemy;
        var size = MathParametersSize.MathSizeField(row, collumn, sizeEnemy, enemyLayoutGroup.spacing.x+enemyLayoutGroup.padding.bottom);
        Debug.Log(size);
        enemyField.SetSize(size);
        enemys = new List<GameObject>(row * collumn);
        var sizearray = row * collumn;
        for (int i = 0; i < sizearray; i++)
        {
            GameObject enemy = Instantiate(prefabEnemy,fieldWithEnemy.transform);
            enemys.Add(enemy);
        }
        Debug.Log("Finish");
    }
}
