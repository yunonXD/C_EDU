#include<stdio.h>
#include"Stack.h"

int main(int argc, char *argv[]){

    //Stack 생성 및 초기화
    Stack stack;
    StackInit(&stack);

    //데이터 삽입//
    SPush(&stack, 1);   SPush(&stack, 2);
    SPush(&stack, 3);   SPush(&stack, 4);
    SPush(&stack, 5);

    //데이터 pop
    while (!SIsEmpty(&stack))
        printf("%d ", SPop(&stack));

    return 0;
}

/*

    5
    4
    3
    2
    1
---------
출력 : 5 4 3 2 1 pop
*/