#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE	1			
#define FALSE	0

/*** ArrayList의 정의 ****/
#define LIST_LEN	100
typedef int LData;

typedef struct __ArrayList{

	LData arr[LIST_LEN]; //리스트 저장소 배열
	int numOfData;		//저장된 데이터 수
	int curPosition;	//데이터 참조 위치 기록
} ArrayList;


/*** ArrayList와 관련된 연산들 ****/
typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif