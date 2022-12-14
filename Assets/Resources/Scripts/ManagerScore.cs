using System;
using System.Collections;
using DG.Tweening;
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

    [SerializeField] private GameObject _panelStart;

    [SerializeField] private GameObject _MasageVolna;

    [SerializeField] private LevelArmy _levelEasy;
    [SerializeField] private LevelArmy _levelMedium;
    [SerializeField] private LevelArmy _levelHard;

    [Header("Scripts")] [Space] 
    [SerializeField]
    private EnemyController _enemyController;

    [SerializeField] private InputManager _inputManager;
    [SerializeField] private GunController _gun;
    [SerializeField] private MovingBackground _background;

    [Header("Parameters")] [Space]
    
    
    [SerializeField] private Vector2 sizeHeart;

    [SerializeField] private int hpPlayerMax;
    [SerializeField] private float _speedEasy;
    [SerializeField] private float _speedMedium;
    [SerializeField] private float _speedHard;

    [SerializeField] private float _speedEnableMasage;

    private RectTransform _livesTransform;
    private GridLayoutGroup _livesGroup;
    private int countVoln;
    
    

    void Start()
    {
        _panelGameOver.SetActive(false);
        _livesGroup = _panelLives.GetComponent<GridLayoutGroup>();
        _livesTransform = _panelLives.GetComponent<RectTransform>();
        _inputManager.enabled = false;
        _MasageVolna.SetActive(false);
    }

    private void AddScore(int score)
    {
        _totalScore += score;
        textScore.text = $"Score: {_totalScore}";
    }

    private void CreateIconHP(int hp)
    {
        _panelLives.SetActive(true);
        var size = MathParameters.MathSizeField(1, hp, sizeHeart, _livesGroup.spacing.x+_livesGroup.padding.bottom);
        _livesGroup.cellSize = sizeHeart;
        _livesTransform.SetSize(size);
        for (int i = 0; i < hp; i++)
        {
            Instantiate(_prefabHP, _panelLives.transform);
        }
    }

    private void ChechVolna(int volna)
    {
        if (volna == countVoln)
        {
            Finish(true);
            return;
        }

        StartCoroutine(SeeMasage(volna));
    }


    private void Damage()
    {
        if(_panelLives.transform.childCount != 0) Destroy(_panelLives.transform.GetChild(0).gameObject);
        hpPlayerMax -= 1;
        if (hpPlayerMax == 0)
        {
            Finish(false);
        }
    }

    private void Finish(bool win)
    {
        if (win)
        {
            _inputManager.enabled = false;
            _enemyController.LosePlayer();
            _panelGameOver.SetActive(true);
            _panelGameOver.GetComponent<TextMeshProUGUI>().text = $"You are win!!! Your score = {_totalScore}";
            _gun.Restart(true);
            _panelLives.SetActive(false);
            
            _enemyController.ClearGameObject(_panelLives);
        }
        else
        {
            _gun.Restart(true);
            _inputManager.enabled = false;
            _enemyController.LosePlayer();
            _panelGameOver.SetActive(true);
            _panelGameOver.GetComponent<TextMeshProUGUI>().text = $"You are Lose! Your score = {_totalScore}";
            _panelLives.SetActive(false);
            _enemyController.ClearGameObject(_panelLives);
        }
        _enemyController.EnemyKill -= AddScore;
        _enemyController.PlayerDamage -= Damage;
        _enemyController.NextVolna -= ChechVolna;
    }

    private IEnumerator SeeMasage(int volnaa)
    {
        _MasageVolna.SetActive(true);
        var trans = _MasageVolna.GetComponent<TextMeshProUGUI>();
        trans.text = $"Volna {volnaa}";
        trans.DOFade(1, _speedEnableMasage);
        yield return new WaitForSeconds(2 + _speedEnableMasage);
        trans.DOFade(0, _speedEnableMasage);
        yield return new WaitForSeconds(_speedEnableMasage);
        _MasageVolna.SetActive(false);
    }

    public void StartGame(int slognost)
    {
        _enemyController.EnemyKill += AddScore;
        _enemyController.PlayerDamage += Damage;
        _enemyController.NextVolna += ChechVolna;
        _panelStart.SetActive(false);
        AddScore(0);
        _gun.Restart(false);
        _gun.Fire();
        switch (slognost)
        {
            case 0:
                CreateIconHP(hpPlayerMax);
                _enemyController.StartAttack(_levelEasy.Enemies, _speedEasy);
                countVoln = _levelEasy.Enemies.Count;
                _inputManager.enabled = true;
                _background.StartMoving(MathParameters.MatchTimeBackground(_levelEasy.Enemies.Count, _speedEasy));
                break;
            case 1:
                CreateIconHP(hpPlayerMax-1);
                hpPlayerMax -= 1;
                _enemyController.StartAttack(_levelMedium.Enemies, _speedMedium);
                countVoln = _levelMedium.Enemies.Count;
                _inputManager.enabled = true;
                _background.StartMoving(MathParameters.MatchTimeBackground(_levelMedium.Enemies.Count, _speedMedium));
                break;
            case 2:
                CreateIconHP(1);
                hpPlayerMax = 1;
                _enemyController.StartAttack(_levelHard.Enemies, _speedHard);
                countVoln = _levelHard.Enemies.Count;
                _inputManager.enabled = true;
                _background.StartMoving(MathParameters.MatchTimeBackground(_levelHard.Enemies.Count, _speedHard));
                break;
        }
    }

    public void RestartGame()
    {
        _gun.Restart(true);
        _inputManager.enabled = false;
        _MasageVolna.SetActive(false);
        _panelGameOver.SetActive(false);
        _panelStart.SetActive(true);
        _enemyController.RemovePositionArmy();
        _totalScore =0;
        textScore.text = String.Empty;
        DOTween.Clear();
        
    }
}

