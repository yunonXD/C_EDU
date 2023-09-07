#include <stdio.h>
#include "BinaryTree.h"

void ShowInData(int data){
	printf("%d\n" , data);
}

void InorderTraverse(BTreeNode * bt , VisitFuncPtr action)//중위
{
	if(bt == NULL)    // bt가 NULL이면 재귀 탈출! 
		return;

	InorderTraverse(bt->left,action); 
	action(bt->data);
	InorderTraverse(bt->right,action); 
}

void PreorderTraverse(BTreeNode * bt)//전위
{
	if(bt == NULL)    // bt가 NULL이면 재귀 탈출! 
		return;

	printf("%d \n", bt->data); 
	PreorderTraverse(bt->left); 
	PreorderTraverse(bt->right); 
}

void PostorderTraverse(BTreeNode * bt)//후위
{
	if(bt == NULL)    // bt가 NULL이면 재귀 탈출! 
		return;

	PostorderTraverse(bt->left); 
	PostorderTraverse(bt->right); 
	printf("%d \n", bt->data); 
}


int main(void)
{
	BTreeNode * bt1 = MakeBTreeNode();
	BTreeNode * bt2 = MakeBTreeNode();
	BTreeNode * bt3 = MakeBTreeNode();
	BTreeNode * bt4 = MakeBTreeNode();

	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);

	MakeLeftSubTree(bt1, bt2);
	MakeRightSubTree(bt1, bt3);
	MakeLeftSubTree(bt2, bt4);

	puts("중위");
	InorderTraverse(bt1,ShowInData);
	printf("\n\n");

	puts("전위");
	PreorderTraverse(bt1);
	printf("\n\n");

	puts("후위");
	PostorderTraverse(bt1);
	printf("\n\n");

	return 0;
}