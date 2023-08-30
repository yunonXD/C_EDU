#ifndef ___DB_LINKED_LIST___
#define ___DB_LINKED_LIST___
#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node{
    Data data;
    struct _node *next;
    struct _node *prev;
}Node;

typedef struct _DLinkedList{
    Node *head;
    Node *cur;
    int numOfData;
}DBLinkedList;

typedef DBLinkedList List;

void ListInit(List *plist);
void LInsert(List *plist, Data data);

int LFirst(List *plist, Data *data);
int LNext(List *plist, Data *data);
//int LRemove(List *plist, Data *data);
int LPrevious(List *plist, Data *pdata);
int LCount(List *plist);

#endif