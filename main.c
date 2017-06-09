/*
 -웹의 그림을 문자데이터로 대치한다

0: 빈 칸
1: 목적지
2: 벽
3: 움직일 박스
4: 채워진 목적지

-플레이어 위치정보는 스테이지 데이터 맨앞 네자리 

*/
#include "func.h"



extern int exit_flag;
extern int stage_clear_flag;
extern int stage;

int main(void) {

	stage_clear_flag = 1;
	stage = StageClearFileLoad();

	for (;;) {
		if (stage_clear_flag != 0) {
			system("cls"); //화면을지운다
			GameStageInit();
			GameStateDraw();
		}

		PlayerMoveAction();

		if (exit_flag != 0)break;
	}
	return 0;
}