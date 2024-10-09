using UnityEngine;
using GamePush;

public class GamePushPresenter : MonoBehaviour
{
    public static GamePushPresenter instance;

    public void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        InitPlayer();
    }

    private void InitPlayer()
    {
        DataPresenter.GetAllData();
        BafsView.instance.RenderCountBafs();
    }
}