#include<stdio.h>


#define PI 3.14             // 지시자 - 매크로 - 메크로몸체         Object-like macro
#define SQUARE(X) X*X       // 함수 매크로                         Function like macro
#define SQUARE2(X) ((X)*(X))    //함수 매크로 문제 생성을 미리 방지

#define NAME                "Yeet"
#define AGE                 24
#define PRINT_ADDR          puts("adress: tyeeee \n");

int main(int argc, char *argv[]){

    printf("name : %s \n", NAME);
    printf("age : %d \n", AGE);
    PRINT_ADDR;


    printf("%d \n" , SQUARE(123));      //15129
    printf("%d \n" , SQUARE(3+2));      //11
    printf("%d \n", SQUARE2(3+2));      //25


    return 0;
}