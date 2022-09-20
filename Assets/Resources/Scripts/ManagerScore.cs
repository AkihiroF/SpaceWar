using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ManagerScore : MonoBehaviour
{

    private int _totalScore;

    [Header("ObjectOutput")] [Space]
    
    [SerializeField] private TextMeshProUGUI textScore;

    [SerializeField] private GameObject _panelGameOver;

    [SerializeField] private GameObject _panelLives;

    [SerializeField] private GameObject _prefabHP;

    [Header("Scripts")] [Space] 
    [SerializeField]
    private EnemyController _enemyController;

    [Header("Parameters")] [Space]
    
    
    [SerializeField] private Vector2 sizeHeart;

    [SerializeField] private int hpPlayer;


    private RectTransform _livesTransform;
    private GridLayoutGroup _livesGroup;
    

    void Start()
    {
        _livesGroup = _panelLives.GetComponent<GridLayoutGroup>();
        _livesTransform = _panelLives.GetComponent<RectTransform>();
        _enemyController.EnemyKill += AddScore;
        _enemyController.PlayerDamage += Damage;
        AddScore(0);
    }

    private void AddScore(int score)
    {
        _totalScore += score;
        textScore.text = $"Score: {_totalScore}";
    }

    private void CreateIconHP()
    {
        var size = MathParameters.MathSizeField(1, hpPlayer, sizeHeart, _livesGroup.spacing.x+_livesGroup.padding.bottom);
        _livesGroup.cellSize = sizeHeart;
        _livesTransform.SetSize(size);
        for (int i = 0; i < hpPlayer; i++)
        {
            
        }
    }

    private void Damage()
    {
        
    }
}

