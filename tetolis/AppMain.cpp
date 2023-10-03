/***************************************
* �v���O���~���O���K�i�e�g���X�ҁj
***************************************/
#include "DxLib.h"
#include "FreamControl.h"
#include "SceneManager.h"
#include "InputControl.h"

/***************************************
* �}�N����`�j
***************************************/
#define SCREEN_HEIGHT (720)
#define SCREEN_WIDTH (1280)
#define SCREEN_COLORBIT  (32)
#define FONT_SIZE (20)

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR IpCmdLine, _In_ int nShowCmd)
{
	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏���������
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	//���͑҂�
	WaitKey();

	//Dx���C�u�����g�p�̏I������
	DxLib_End();

	return 0;
}