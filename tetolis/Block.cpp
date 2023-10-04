#include "Block.h"
#include "DxLib.h"
#include "InputControl.h"

/***************************************
* マクロ定義
***************************************/
#define FIELD_HEIGHT  (21)  //フィールドのマスの高さ
#define FIELD_EIDTH  (12)
#define BLOCK_TROUT_SIZE  (4)
#define BLOCK_SIZE  (36)
#define BLOCK_TYPE_MAX  (7)
#define BLOCK_NEXT_POS_X  (700)
#define BLOCK_NEXT_POS_Y  (500)
#define BLOCK_STOCK_POS_X  (500)
#define BLOCK_STOCK_POS_Y  (350)
#define DROP_BLOCK_INIT_X  (4)
#define DROP_BLOCK_INIT_Y  (-1)
#define DROP_SPEED  (60)
#define TURN_CROCKWICE  (0)
#define TURN_ANTICROCKWICE  (1)