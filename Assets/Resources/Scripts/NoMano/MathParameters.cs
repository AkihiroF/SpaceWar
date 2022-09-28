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

    public static float MatchTimeBackground(int collvoVoln, float speed)
    {
        return collvoVoln * speed;
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

    public static List<Vector2> MatchPositionEnemy(int row, int collumn, float spacing)
    {
        var positions = new List<Vector2>();
        var polX = collumn / 2;
        var polY = row / 2;
        var startpos_x = -polX - spacing * polX;
        var startpos_y = polY + spacing * polY;
        var startpos = new Vector2(startpos_x, startpos_y);
        for (int i = 0; i < row; i++)
        {
            var pos_y = startpos.y - i - spacing * i;
            for (int j = 0; j < collumn; j++)
            {
                var pos_x = startpos.x + j + spacing * j;
                positions.Add(new Vector2(pos_x, pos_y));
            }
        }
        return positions;
    }
}
