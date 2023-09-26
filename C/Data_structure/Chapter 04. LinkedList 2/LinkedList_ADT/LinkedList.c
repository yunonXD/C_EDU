#include<stdio.h>
#include"LinkedList.h"


void ListInit(List *plist){
    plist->head = (Node*)malloc(sizeof(Node));      //더미노드
    plist->head->next = NULL;
    plist->comp = NULL;
    plist->numOfData = 0;
}

void LInsert(List *plist,LData data){

    if(plist->comp == NULL)
        FInsert(plist,data);
    else
        SInsert(plist,data);
}

void FInsert(List *plist, LData data){

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;

    newNode->next = plist->head->next;
    plist->head->next = newNode;

    (plist->numOfData)++;
}

void SInsert(List *plist, LData data){

    Node *newNode = (Node*)malloc(sizeof(Node));
    Node *pred = plist->head;
    newNode->data = data;

    while(pred->next != NULL && plist-> comp(data,pred->next->data) !=0)
        pred = pred->next;

    newNode->next = pred->next;
    pred->next = newNode;
    (plist->numOfData)++;
}

int LFirst(List *plist, LData *pdata){

    if(plist->head->next == NULL)
        return FALSE;
    
    plist->before = plist->head;
    plist->cur = plist->head->next;

    *pdata = plist->cur->data;
    return TRUE;
}

int LNext(List *plist, LData *pdata){

    if(plist->cur->next == NULL)
        return FALSE;
    
    plist->before = plist->cur;
    plist->cur = plist->cur->next;

    *pdata = plist->cur->data;
    return FALSE;
}

LData LRemove(List *plist){     
    //단 한번만 호출해야함. 현속호출 ㄴㄴ 애초에 그럴일도 없음.
    //단 LN LF 둘중 하나 한번 이상 호출되었다면 LR 호출 가능
    //즉 억지로 before 해줄 필요 없음.

    Node *rpos = plist->cur;
    LData rdata = rpos->data;

    plist->before->next = plist->cur->next;
    plist->cur = plist->before;

    free(rpos);
    (plist->numOfData)--;
    return rdata;
}

int LCount(List *plist){
        return plist->numOfData;
}

void SetSortRule(List *plist, int(*comp)(LData d1, LData d2)){

    plist->comp = comp;     //초기화

    //comp 가 0을 return
    // 첫 번째 인자인 data 가 정렬 순서상 앞서서 head 에 가까워야 하는 case
    
    //comp 가 1을 return
    // 두 번째 인자인 pred->next->data 가 정렬 순서상 앞서서 head 에 가까워야 하는 경우
}

