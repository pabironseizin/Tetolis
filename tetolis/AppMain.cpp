/***************************************
* プログラミング実習（テトリス編）
***************************************/
#include "DxLib.h"
#include "FreamControl.h"
#include "SceneManager.h"
#include "InputControl.h"

/***************************************
* マクロ定義）
***************************************/
#define SCREEN_HEIGHT (720)
#define SCREEN_WIDTH (1280)
#define SCREEN_COLORBIT  (32)
#define FONT_SIZE (20)

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR IpCmdLine, _In_ int nShowCmd)
{
	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	//入力待ち
	WaitKey();

	//Dxライブラリ使用の終了処理
	DxLib_End();

	return 0;
}