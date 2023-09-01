#ifndef __LINKEDLIST__STACK_TEST___
#define __LINKEDLIST__STACK_TEST___

#define TRUE 1
#define FALSE 0

typedef int LData;

typedef struct _node{
    LData data;
    struct _node *next;
}Node;

typedef struct _linkedliststack{
    Node *head;
}LinkedListStack;

typedef LinkedListStack Stack;

void StackInit(Stack *pstack);
int SIsEmpty(Stack *pstack);

void SPush(Stack *pstack , LData data);
LData SPop(Stack *pstack);
LData SPeek(Stack *pstack);

#endif