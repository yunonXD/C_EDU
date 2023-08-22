#include<stdio.h>

#define ADD 1
//#define MIN 0

int main(int argc, char *argv[]){

    int num1 =0, num2=0;
    printf(" input 2 num : ");
    scanf("%d %d", &num1, &num2);

#ifdef ADD          //매크로 ADD 가 "정의" ? 그럼 컴파일 대상에 포함.
    printf("%d + %d = %d \n", num1, num2, num1+num2);
#endif

#ifdef MIN          //매크로 MIN 가 "정의" ? 그럼 컴파일 대상에 포함.
    printf("%d - %d = %d \n", num1, num2,num1-num2);
#endif

#ifndef MIN
    printf("min is not defined. \n");
#endif

    return 0;
}