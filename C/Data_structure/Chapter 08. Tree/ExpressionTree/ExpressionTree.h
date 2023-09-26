#include"BinaryTree2.h"

//수식 트리 구성
BTreeNode *MakeExpTree(char exp[]);

//수식 트리 계산
int EvaluateExpTree(BTreeNode *bt);

void SHowPrefixTypeExp(BTreeNode *bt);      //전위
void SHowInfixTypeExp(BTreeNode *bt);       //중위
void SHowPostfixTypeExp(BTreeNode *bt);     //후위