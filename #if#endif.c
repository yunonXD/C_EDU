#include<stdio.h>
#include<stdlib.h>

#define ADD 1
#define MIN 0

int main(int argc, char *argv[]){

    int num1=0;
    int num2=0;

    printf("input 2 num :");
    scanf("%d %d", &num1, &num2);

#if ADD     //선행처리에서 if안에 들어오면 endif 까지 컴파일 대상에 포함
    printf("%d + %d = %d \n", num1, num2, num1+num2);
#endif

#if MIN
    printf("%d - %d = %d \n", num1, num2, num1-num2);
#endif
    return 0;
}