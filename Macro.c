#include<stdio.h>


#define PI 3.14             // 지시자 - 매크로 - 메크로몸체         Object-like macro
#define SQUARE(X) X*X       // 함수 매크로                         Function like macro

#define NAME                "Yeet"
#define AGE                 24
#define PRINT_ADDR          puts("adress: tyeeee \n");

int main(int argc, char *argv[]){

    printf("name : %s \n", NAME);
    printf("age : %d \n", AGE);
    PRINT_ADDR;


    printf("%d" , SQUARE(123));


    return 0;
}