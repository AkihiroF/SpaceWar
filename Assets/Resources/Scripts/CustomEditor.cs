#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;

[UnityEditor.CustomEditor(typeof(EnemyHP))]
public class CustomEditor : Editor
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();
        GUILayout.Space(15);
        EnemyHP e = (EnemyHP)target;
        if(GUILayout.Button("UpEnemy"))
        {
            e.Damage(120);
        }
    }
}
#endif