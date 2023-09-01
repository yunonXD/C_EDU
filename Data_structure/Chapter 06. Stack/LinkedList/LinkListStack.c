#include<stdio.h>
#include<stdlib.h>
#include "LinkListStack.h"

void StackInit(Stack *pstack){
    pstack->head = NULL;
}

int SIsEmpty(Stack *pstack){
    if(pstack->head == NULL)
        return TRUE;        //비어있음
    else
        return FALSE;       //차있음
}

void SPush(Stack *pstack , LData data){
    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode->data = data;

    newnode->next = pstack->head;
    pstack->head = newnode;
}

LData SPop(Stack *pstack){
    Node *rpos = pstack->head;
    LData rdata = pstack->head->data;

    if(SIsEmpty(pstack)){
        puts("Stack Memory error");
        exit(-1);
    }

    pstack->head = pstack->head->next;
    free(rpos);
    return rdata;
}

LData SPeek(Stack *pstack){
    if(SIsEmpty(pstack)){
        puts("Stack Memory Error");
        exit(-1);
    }
    return pstack->head->data;
}