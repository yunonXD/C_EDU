#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

    //srand(time(NULL));      //rand(����)�ʱ�ȭ
    //int num = rand() % 3 + 1;   //3���� ����� �� �� ���� ���� 0

    printf(" ���� �ʱ�ȭ ����.. \n");
    for(int i =0; i < 10; i++){
        printf( "%d " , rand()%10);
    }

    printf("\n ================== \n");

    srand(time(NULL));
    printf(" ���� �ʱ�ȭ ����.. \n");
    for(int i =0; i < 10; i++){
        printf( "%d " , rand()%10);
    }



    return 0;
}