#include<stdio.h>

void SimpleFunc(void){
    printf("Yeet");
}


int main(void){

    int num = 20;
    void *ptr;

    ptr = &num;
    printf("%p \n" , ptr);

    ptr = SimpleFunc;       //단 void 이므로 다른 메모리 접근을 위한 *는 불가능 >> type 이 없음
    printf("%p \n" , ptr);
    return 0;




    return 0;
}