#include"Stack.h"
#include<stdio.h>
#include<stdlib.h>

void StackInit(Stack *pstack){
    pstack->topIndex = -1;  // empty 
}

int SIsEmpty(Stack *pstack){
    if(pstack -> topIndex == -1)
        return TRUE;        //비어있음
    else
        return FALSE;       //안에 뭔가 있음
}

void SPush(Stack *pstack , Data data){
    pstack->topIndex +=1;
    pstack->stackArr[pstack->topIndex] = data;
}

Data SPop(Stack *pstack){

    int rIdx =0;

    if(SIsEmpty(pstack)){
        printf("Stack Memory Error");
        exit(-1);
    }

    rIdx = pstack->topIndex;    //데이터 따로 잠깐 저장
    pstack->topIndex -=1;
    return pstack->stackArr[rIdx];
}

Data SPeek(Stack *pstack){

    if(SIsEmpty(pstack)){
        printf("Stack Memory Error");
        exit(-1);
    }

    return pstack->stackArr[pstack->topIndex];

}