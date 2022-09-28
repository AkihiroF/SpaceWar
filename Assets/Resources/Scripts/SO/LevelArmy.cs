using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ArmyLevel")]
public class LevelArmy : ScriptableObject
{
    public List<ArmyEnemy> Enemies;
}
