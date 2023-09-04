#ifndef __QUEUE__HEADER__TEST__
#define __QUEUE__HEADER__TEST__

#define QUE_LEN 100
#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _cQueue{
    int front;
    int rear;
    Data queArr[QUE_LEN];
}CQueue;

typedef CQueue Queue;

void QueueInit(Queue *pq);
int QIsEmpty(Queue *pq);

void Enqueue(Queue *pq, Data data);
Data Dequeue(Queue *pq);
Data QPeek(Queue *pq);

#endif