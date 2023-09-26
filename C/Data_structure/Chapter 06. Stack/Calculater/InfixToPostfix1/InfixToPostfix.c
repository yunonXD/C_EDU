#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "ListBaseStack.h"
#include "InfixToPostfix.h"
//후위 표기법 수식으로 변환하는 과정

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

	return -1;   // 등록되지 않은 연산자
}

int WhoPrecOp(char op1, char op2){

	int op1Prec = GetOpPrec(op1);
	int op2Prec = GetOpPrec(op2);

	if(op1Prec > op2Prec)				//op1 의 우선순위가 더 높다면
		return 1;
	else if(op1Prec < op2Prec)			//op2 의 우선순위가 더 높다면
		return -1;
	else
		return 0;						//같다면(우선순위)
}
// 위 둘은 하나의 함수로 봐야함


void ConvToRPNExp(char exp[]){			//중위 to 후위 변환식

	Stack stack;
	int expLen = strlen(exp);
	char * convExp = (char*)malloc(expLen+1);		//변환된 수식을 담을 공간

	int i, idx=0;
	char tok, popOp;
	
	memset(convExp, 0, sizeof(char)*expLen+1);		//마련한 공간을 0 으로 초기화
	StackInit(&stack);

	for(i=0; i<expLen; i++){
		tok = exp[i];
		if(isdigit(tok))	convExp[idx++] = tok;	//tok 에 저장된 값이 피연산자라면
		else{					//연산자라면	
			switch(tok){

			case '(':		//여는 소괄호라면 스택에 쌓기
				SPush(&stack, tok);
				break;

			case ')':		//닫는 소괄호라면 반복해서 ( 만날때까지 배열을 convExp에 저장
				while(1){

					popOp = SPop(&stack);
					if(popOp == '(')
						break;
					convExp[idx++] = popOp;
				}
				break;

			case '+': case '-': 
			case '*': case '/':
				//tok 에 저정된 연산자를 스택에 저장하기 위한 과정
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