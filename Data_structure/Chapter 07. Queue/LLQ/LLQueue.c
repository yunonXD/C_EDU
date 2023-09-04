#include<stdlib.h>
#include<stdio.h>
#include"LLQueue.h"

void QueueInit(Queue *pq){

    pq ->front  =NULL;
    pq ->rear   =NULL;
}

int QIsEmpty(Queue *pq){

    if(pq ->front == NULL)      //차피 노드가 비면 F, R 둘 다 NULL 임
        return TRUE;
    else
        return FALSE;
}


void Enqueue(Queue *pq, Data data){

    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode->data = data;

    if(QIsEmpty(pq)){       //없으면 새 노드는 rear front 모두가 가리키게
        pq->front = newnode;
        pq->rear = newnode;
    }
    else{
        pq->rear->next = newnode;
        pq->rear = newnode;
    }
}

Data Dequeue(Queue *pq){

    if(QIsEmpty(pq)){
        puts("There is no more data");
        exit(-1);
    }

    Node *rpos = pq->front;
    Data backupdata = rpos->data;
    pq->front = pq->front->next;

    free(rpos);
    return backupdata;
}

Data QPeek(Queue *pq){

    return pq->front->data;
}