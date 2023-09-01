#ifndef __LIST__STACK_TEST___
#define __LIST__STACK_TEST___

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

typedef struct _stack       //배열 기반 구조체
{
    Data stackArr[STACK_LEN];
    int topIndex;
}ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack *pstack);
int SIsEmpty(Stack *pstack);

void SPush(Stack *pstack , Data data);
Data SPop(Stack *pstack);
Data SPeek(Stack *pstack);

#endif