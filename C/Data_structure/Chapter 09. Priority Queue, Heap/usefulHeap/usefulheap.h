#ifndef __SIMPLE_HEAP_H__
#define __SIMPLE_HEAP_H__

#define TRUE	1
#define FALSE	0

#define HEAP_LEN	100

typedef char HData;
typedef int priorityComp(HData d1, HData d2);
//d1 의 우선순위가 높으면 0보다 큰 값
//d2 의 우선순위가 높으면 0 보다 작은 값
//d1 과 d2 의 우선순위가 같다면 0

typedef struct _heap{
	priorityComp *comp;
	int numOfData;  
	HData heapArr[HEAP_LEN];
} Heap;

/*** Heap 관련 연산들 ****/
void HeapInit(Heap * ph , priorityComp pc);
int HIsEmpty(Heap * ph);

void HInsert(Heap * ph, HData data);
HData HDelete(Heap * ph);

int DataPriority(char ch1, char ch2);

#endif