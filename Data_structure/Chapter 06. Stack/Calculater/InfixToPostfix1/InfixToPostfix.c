#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "ListBaseStack.h"
#include "InfixToPostfix.h"
//���� ǥ��� �������� ��ȯ�ϴ� ����

int GetOpPrec(char op){

	switch(op){
	case '*':
	case '/':
		return 5;
	case '+':
	case '-':
		return 3;
	case '(':
		return 1;
	}

	return -1;   // ��ϵ��� ���� ������
}

int WhoPrecOp(char op1, char op2){

	int op1Prec = GetOpPrec(op1);
	int op2Prec = GetOpPrec(op2);

	if(op1Prec > op2Prec)				//op1 �� �켱������ �� ���ٸ�
		return 1;
	else if(op1Prec < op2Prec)			//op2 �� �켱������ �� ���ٸ�
		return -1;
	else
		return 0;						//���ٸ�(�켱����)
}
// �� ���� �ϳ��� �Լ��� ������


void ConvToRPNExp(char exp[]){			//���� to ���� ��ȯ��

	Stack stack;
	int expLen = strlen(exp);
	char * convExp = (char*)malloc(expLen+1);		//��ȯ�� ������ ���� ����

	int i, idx=0;
	char tok, popOp;
	
	memset(convExp, 0, sizeof(char)*expLen+1);		//������ ������ 0 ���� �ʱ�ȭ
	StackInit(&stack);

	for(i=0; i<expLen; i++){
		tok = exp[i];
		if(isdigit(tok))	convExp[idx++] = tok;	//tok �� ����� ���� �ǿ����ڶ��
		else{					//�����ڶ��	
			switch(tok){

			case '(':		//���� �Ұ�ȣ��� ���ÿ� �ױ�
				SPush(&stack, tok);
				break;

			case ')':		//�ݴ� �Ұ�ȣ��� �ݺ��ؼ� ( ���������� �迭�� convExp�� ����
				while(1){

					popOp = SPop(&stack);
					if(popOp == '(')
						break;
					convExp[idx++] = popOp;
				}
				break;

			case '+': case '-': 
			case '*': case '/':
				//tok �� ������ �����ڸ� ���ÿ� �����ϱ� ���� ����
				while(!SIsEmpty(&stack) && WhoPrecOp(SPeek(&stack), tok) >= 0)
					convExp[idx++] = SPop(&stack);

				SPush(&stack, tok);
				break;
			}
		}
	}

	while(!SIsEmpty(&stack))
		convExp[idx++] = SPop(&stack);

	strcpy(exp, convExp);
	free(convExp);
}