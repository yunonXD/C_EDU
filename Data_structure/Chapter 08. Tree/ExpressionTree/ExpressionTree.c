#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ListBaseStack.h"
#include "BinaryTree2.h"


BTreeNode *MakeExpTree(char exp[]){
    Stack stack;                //피 연산자 스택으로 옮김
    BTreeNode *pnode;           
    //연산자를 만나면 스택 -> 두개의 피 연산자 꺼내 자식 노드로 연결
    int expLen = strlen(exp);
    //자식 노드 연결해서 만들어진 트리는 다시 스택으로 옮김

    for(int i =0; i<expLen; i++){
        pnode = MakeBTreeNode();            //노드 형성
        if(isdigit(exp[i]))                 //각각의 문자에 대해 피연산자인지 확인
            SetData(pnode, exp[i]-'0');     //문자 정수로 바꾸기 (스택에 있는 내용은 문자열 상태)
        else{                               //연산자면 각각 오른쪽 왼쪽 자식노드로 연결
            MakeRightSubTree(pnode, SPop(&stack));
            MakeLeftSubTree(pnode, SPop(&stack));
            SetData(pnode, exp[i]);
        }
        SPush(&stack,pnode);                //피연산자면 바로 스택으로 또한 완전 연결된 서브트리도 스택으로
    }
    return SPop(&stack);                    //완성된 수식트리는 스택으로 
}

int EvaluateExpTree(BTreeNode * bt){
	int op1, op2;

	if(GetLeftSubTree(bt)==NULL && GetRightSubTree(bt)==NULL)
		return GetData(bt);

	op1 = EvaluateExpTree(GetLeftSubTree(bt));
	op2 = EvaluateExpTree(GetRightSubTree(bt));

	switch(GetData(bt))
	{
	case '+':
		return op1+op2;
	case '-':
		return op1-op2;
	case '*':
		return op1*op2;
	case '/':
		return op1/op2;
	}

	return 0;
}



void ShowNodeData(int data){
	if(0<=data && data<=9)
		printf("%d ", data);        //피연산자
	else
		printf("%c ", data);        //연산자
}

void ShowPrefixTypeExp(BTreeNode * bt){
	PreorderTraverse(bt, ShowNodeData);
}

void ShowInfixTypeExp(BTreeNode * bt){
	InorderTraverse(bt, ShowNodeData);
} 

void ShowPostfixTypeExp(BTreeNode * bt){
	PostorderTraverse(bt, ShowNodeData);
}