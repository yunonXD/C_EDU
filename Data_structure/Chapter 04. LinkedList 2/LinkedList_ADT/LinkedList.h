#ifndef __LINKED_LIST_STD__
#define __LINKED_LIST_STD__
#define TRUE 1
#define FALSE 0

typedef int LData;

typedef struct _node{
    LData data;
    struct _node *next;
}Node;

typedef struct _linkedList{

    Node *head;                         // 더미 노드를 가리키는 멤버변수
    Node *cur;                          // 참조 및 삭제를 돕는 멤버변수
    Node *before;                       // 삭제를 돕는 엠버변수
    int numOfData;                      // 저장된 데이터의 수를 기록하기 위한 멤머변수
    int (*comp)(LData d1, LData d2);    // 정렬의 기준을 등록하기 위한 멤버변수
} LinkedList;

typedef LinkedList List;

void ListInit(List *plist);
void LInsert(List *plist,LData data);

int LFirst(List *plist, LData *pdata);
int LNext(List *plist, LData *pdata);
LData LRemove(List *plist);
int LCount(List *plist);
void SetSortRule(List *plist, int(*comp)(LData d1, LData d2));


#endif