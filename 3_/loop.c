#include<stdio.h>

int main(void){

    //printf("ㅎㅇ");



    //++ 연신자
    // int a = 10;
    // printf("a : %d\n" ,a);
    // a++;
    // printf("a : %d\n" ,a);


    // int b = 20;
    // printf(" b : %d\n" , ++b);  //b = b + 1
    // printf(" b : %d\n" , b++);  //얘는 다음 문장에 더한 값을 넘겨줌
    // printf(" b : %d\n" , b);


    // printf("Hello World %d\n" , i++ );
    // int i = 1;
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );

    //반복문
    //for , while , do while

    //for(선언; 조건; 증감) {}
    // for( int i = 1; i <=10; i++){
    //     printf("HelloWorld! %d\n" , i);
    // }

    //while(조건) {}
    int i = 1;
    while (i <= 10)
    {
       printf("HelloWorld %d\n" , i++);
    }
    


    return 0;
}