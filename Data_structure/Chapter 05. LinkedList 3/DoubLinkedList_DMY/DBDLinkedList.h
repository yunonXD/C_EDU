#ifndef __DB_LINKED_LIST_DMY__
#define __DB_LINKED_LIST_DMY__

#define TRUE	1
#define FALSE	0

typedef int Data;

typedef struct _node{
	Data data;
	struct _node *next;
	struct _node *prev;
} Node;

typedef struct _dbLinkedList{
	Node *head;
	Node *cur;
	Node *tail;
	int numOfData;
} DBLinkedList;

typedef DBLinkedList List;

void ListInit(List * plist);
void LInsert(List * plist, Data data);

int LFirst(List * plist, Data * pdata);
int LNext(List * plist, Data * pdata);
int LPrevious(List * plist, Data * pdata);

Data LRemove(List *plist);
int LCount(List * plist);

#endif