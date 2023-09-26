#ifndef __POINT__
#define __POINT__

typedef struct _point{
    int xpos;
    int ypos;
} Point;

typedef Point Po;

//Point 초기화
void InintPointPos(Po *ppos);

//Point 변수의 xpos, ypos 값 결정
void SetPointPos(Po *ppos, int xpos, int ypos);

//Point 변수의 xpos, ypos 정보 출력
void ShowPointPos(Po *ppos);

//두 Point 변수 비교
int PointComp(Po* pos1 , Po *pos2);





















#endif