#include"Queue.h"
#include<stdlib.h>
#include<stdio.h>

void QueueInit(Queue *pq){

    pq ->front =0;
    pq ->rear =pq ->front;   //empty 중요한건 "같은숫자"
}

int QIsEmpty(Queue *pq){

    if(pq ->front ==pq->rear)
        return TRUE;
    else
        return FALSE;
}

int NextPosIdx(int pos){
    //큐 연산에 의해 F R 로 이동할 때 이동해야 할 위치를
    //알려주는 함수, 원형큐의 형태를 유지시켜줌.

    if(pos ==QUE_LEN-1)    //배열의 마지막 인덱스면 0 return
        return 0;
    else    
        return pos+1;       //배열이 마지막이 아니면 한칸 이동
}

void Enqueue(Queue *pq, Data data){

    if(NextPosIdx(pq ->rear) ==pq ->front){
        puts("Full of memroy.");
        exit -1;
    }

    pq ->rear =NextPosIdx(pq->rear);
    pq ->queArr[pq ->rear] =data;
}

Data Dequeue(Queue *pq){

    if(QIsEmpty(pq)){
        puts("No more Data");
        exit -1;
    }

    pq ->front =NextPosIdx(pq->front);
    return pq ->queArr[pq ->front];
}

Data QPeek(Queue *pq){

    return pq ->queArr[pq ->front];
}