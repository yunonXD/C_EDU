#include <stdio.h>
#include "BinaryTree.h"

void ShowInData(int data){
	printf("%d\n" , data);
}

void InorderTraverse(BTreeNode * bt , VisitFuncPtr action)//����
{
	if(bt == NULL)    // bt�� NULL�̸� ��� Ż��! 
		return;

	InorderTraverse(bt->left,action); 
	action(bt->data);
	InorderTraverse(bt->right,action); 
}

void PreorderTraverse(BTreeNode * bt)//����
{
	if(bt == NULL)    // bt�� NULL�̸� ��� Ż��! 
		return;

	printf("%d \n", bt->data); 
	PreorderTraverse(bt->left); 
	PreorderTraverse(bt->right); 
}

void PostorderTraverse(BTreeNode * bt)//����
{
	if(bt == NULL)    // bt�� NULL�̸� ��� Ż��! 
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

	puts("����");
	InorderTraverse(bt1,ShowInData);
	printf("\n\n");

	puts("����");
	PreorderTraverse(bt1);
	printf("\n\n");

	puts("����");
	PostorderTraverse(bt1);
	printf("\n\n");

	return 0;
}