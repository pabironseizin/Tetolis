#include "InputControl.h"
#include "DxLib.h"

/***************************************
* �}�N����`
***************************************/
#define XINPUT_BUTTON_MAX (16)  //�R���g���[���̃{�^����

/***************************************
* �^��`
***************************************/
enum KEY_STATE
{
	E_NONE,  //������
	E_CLICK,  //�������u��
	E_PRESS,  //���������Ă�
	E_RELEASED,  //������
	E_KEY_STATE_MAX
};

/***************************************
* �v���g�^�C�v�錾
***************************************/

/***************************************
* ���͐���@�\:����������
* ����:�Ȃ�
* �߂�l:�Ȃ�
***************************************/
void InputControl_Initialize(void)
{
	int i;  //���[�v�J�E���^

	//���͏�Ԃ̏�����
	for (i = 0; i < XINPUT_BUTTON_MAX; i++)
	{
		button_state[i] = E_NONE;
	}
}

/***************************************
* ���͐���@�\:�X�V����
* ����:�Ȃ�
* �߂�l:�Ȃ�
***************************************/
void InputControl_Update(void)
{
	int i;  //���[�v�J�E���^
	XINPUT_STATE input_controller;  //�R���g���[�����͏��

	//�R���g���[���[�̓��͏����擾
	GetJoypadInputState(DX_INPUT_PAD1, &input_controller);

	//���͏�Ԃ̍X�V
	for (i = 0; i < XINPUT_BUTTON_MAX; i++)
	{
		if (input_controller.Buttons[i] == TRUE)
		{
			switch (button_state[i])
			{

			}
		}
	}


}