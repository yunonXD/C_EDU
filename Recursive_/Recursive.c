#include<stdio.h>

void Recursive(int num);

int main(){

    Recursive(3);

    return 0;
}

//재귀적으로 함수 호출이 가능한 이유는 함수를 "카피" 해서 호출하기 때문
void Recursive(int num){

    if(num<=0)
        return;



    printf("  CALL!!!  %d\n",num);
    Recursive(num -1);
}