#include<stdio.h>

void fct(void);

int main(){

    fct();

    return 0;
}

//재귀적으로 함수 호출이 가능한 이유는 함수를 "카피" 해서 호출하기 때문
void fct(void){
    printf("  CALL!!! \n");
    fct();
}