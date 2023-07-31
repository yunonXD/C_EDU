#include<stdio.h>

int main(void){

    //10진수 입력 받아 16진수로 변환
    printf("\n\n == 10진수를 입력해주세요.");
    int num;
    scanf("%d", &num);

    
    printf("10진수 :%d\n16진수: %o\n" , num,num);


    return 0;
}


