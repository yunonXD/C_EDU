#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

    //srand(time(NULL));      //rand(난수)초기화
    //int num = rand() % 3 + 1;   //3개의 경우의 수 단 시작 수는 0

    printf(" 난수 초기화 이전.. \n");
    for(int i =0; i < 10; i++){
        printf( "%d " , rand()%10);
    }

    printf("\n ================== \n");

    srand(time(NULL));
    printf(" 난수 초기화 이후.. \n");
    for(int i =0; i < 10; i++){
        printf( "%d " , rand()%10);
    }



    return 0;
}