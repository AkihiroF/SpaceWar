using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class MathParameters
{
    public static Vector2 MathSizeField(int row, int collumn, Vector2 sizeenemy, float spacining)
    {
        var size_x = (sizeenemy.x + spacining) * collumn;
        var size_y = (sizeenemy.y + spacining) * row;
        return new Vector2(size_x, size_y);
    }

    public static int MatchCollumnEnemy(List<RowEnemy> army)
    {
        int collumn = 0;
        foreach (RowEnemy row in army)
        {
            if (row._isPlace.Count > collumn) collumn = row._isPlace.Count;
        }

        return collumn;
    }
}
