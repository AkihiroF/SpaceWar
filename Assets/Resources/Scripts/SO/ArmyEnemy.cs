using System;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Army")]
public class ArmyEnemy : ScriptableObject
{
    public List<RowEnemy> _PolkEnemies;
}

[Serializable]
public class RowEnemy
{
    public List<bool> _isPlace;
}