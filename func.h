#ifndef __H__FUNC
#define __H__FUNC

/////////////////////////함수 원형

int GameGetPosition(const char *pnt); //포인터가 가르키는 곳의 데이터를 두개 읽어서 그값을 숫자로 변환해서 반환한다.

void GamePlayerPositionSet(const char *pnt); //별 위치의 좌표를 구해주는 함수
void GameStageSizeSet(const char*pnt); //스테이지를 그려줄 시작점을 상대적으로 새팅
void GameStageToMap(const char *pnt); //1차원 배열을 2차원배열로 바꾸는 작업 ,2차원의 인덱스는 곧 좌표가 된다.
void CursorView(char show); // 화면의 커서를 보이거나 숨기기 ,0을 매개변수로 주면 커서가 사라진다


void gotoxy(int x, int y); // x, y 좌표로 커서를 움직이는 함수 

void SetColor(int color); //콘솔 색깔을 지정하는 함수 

void PlayerDraw(void); //플레이어를 그려주는 함수 

void MapDraw(int x, int y); //x,y를 전달해주면 2차원배열인 map배열의 그 인덱스를 그려주는 함수  
void GameDraw(void); //맵 전체를 출력하는 함수 

void PlayerErase(void); // 플레이어를 지우는 함수다.

void PlayerMoveAction(void); //플레이어의 움직임을 감지하고 플레이어를 이동시켜주는 함수  
void GameStageInit(void); //프로그램에서 초기에 호출되어야하는 함수들의 묶음
int StageClearCheck(void); //스테이지 클리어시 1반환 실패시 0반환
void GameStateDraw(void); // 게임의 정보를 오른쪽에 출력해 준다.
void PlayerMoveCountDraw(void); //플래이어의 움직임 횟수를 출력한다.
void PlayerPushCountDraw(void); //플래이어의 푸쉬 횟수를 출력한다.

void UndoSave(void); // 보관장소가 꽉찼을때 한칸씩앞으로 밀어주고 계속 백업함
void GameUndo(void); //이전 데이터를 그려준다 

void StageClearFileSave(void); //스태이지 클리어를 한 그판의 모든 정보를 파일로 저장

int StageClearFileLoad(void); //스태이지를 어디서주터 시작할지 파일을 읽어들여서 알아낸후 그 스테이지의 번호를 불러준다.

void StageReplayLoad(void);	//char replay_buffer[PLAYER_MOVE_MAX]; 이버퍼에 리플레이 정보를 모두 저장

char Getkey(void); //키를 입력받아서 그키를 반환한다.
char GetkeyRePlay(void); //리플레이하기

#endif