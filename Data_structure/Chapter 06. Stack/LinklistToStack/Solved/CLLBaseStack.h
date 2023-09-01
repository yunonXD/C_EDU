#ifndef __STACK2_LINKED_LIST_H__
#define __STACK2_LINKED_LIST_H__

#include"CLinkedList.h"

#define TRUE 1
#define FALSE 0

//CLinkedList 활용해서 stack 구현하기

typedef int Data;

typedef struct _listStack{
    List *plist
}LinkedStack;

typedef LinkedStack Stack;

void StackInit(Stack *pstack);
int SIsEmpty(Stack *pstack);

void SPush(Stack *pstack , Data data);
Data SPop(Stack *pstack);
Data SPeek(Stack *pstack);

#endif