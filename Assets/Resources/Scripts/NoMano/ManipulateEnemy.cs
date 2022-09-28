using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace Resources.Scripts.NoMano
{
    public class ManipulateEnemy
    {
    
        //Objects
        private Transform _enemyField;

        private int _row;
        private int _collumn;


        public ManipulateEnemy(Transform enemyField)
        {
            _enemyField = enemyField;
        }
    
    
        public void RemovePositionArmy(Vector3 startPositionEnemy)
        {
            _enemyField.DOComplete();
            _enemyField.position = startPositionEnemy;

        }

        public void SetSizeField(List<RowEnemy> army)
        { 
            _row = army.Count;
            _collumn = MathParameters.MatchCollumnEnemy(army);
        }

        public void SetPositionEnemy(List<GameObject> enemysPoss, List<RowEnemy> empty)
        {
            int place = 0;
            int currentenemy = 0;
            var pos = MathParameters.MatchPositionEnemy(_row, _collumn,0.5f);
            for (int i = 0; i < empty.Count; i++)
            {
                foreach (var enemy in empty[i]._isPlace)
                {
                    if (enemy)
                    {
                        enemysPoss[currentenemy].transform.localPosition = pos[place];
                        enemysPoss[currentenemy].name = "" + currentenemy;
                        currentenemy++;
                    }
                    place++;
                }
            }
        }
    }
}
