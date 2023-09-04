#include <string.h>
#include <stdlib.h>
#include "InfixToPostfix.h"
#include "PostCalculator.h"

int EvalInfixExp(char exp[])
{
	int len = strlen(exp);
	int ret;
	char * expcpy = (char*)malloc(len+1);		//원본 보존 복사본
	strcpy(expcpy, exp);

	ConvToRPNExp(expcpy);    				//후위 표식법으로 전환
	ret = EvalRPNExp(expcpy);				//후위 수식 계산

	free(expcpy);
	return ret;
}
