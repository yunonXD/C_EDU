#ifndef __CIRCLE_LINKED_LIST__
#define __CIRCLE_LINKED_LIST__

typedef int Data;

typedef struct _node{
    Data data;
    struct _node *next;
}Node;

typedef struct _CLL{
    Node *tail;
    Node *cur;
    Node *before;
    int numOfData;
}CList;

typedef CList List;

void ListInit(List *plist);
void LInsert(List *plist, Data data);
void LInsertFront(List *plist, Data data);

int LFirst(List *plist, Data pdata);
int LNext(List *plist, Data *pdata);
Data LRemove(List *plist);
int LCount(List *plist);


#endif