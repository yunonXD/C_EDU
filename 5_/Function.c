#include<stdio.h>

//���� 
void p(int num);

int main(void){

    //function
    //����

    int num = 2;
    p(num);
    //printf("num �� %d �Դϴ�\n" , num);

    //2+3
    num = num  + 3;
    p(num);
    //printf( "num �� %d �Դϴ�\n", num); //5

    num -= 1; // num - num-1
    p(num);
    //printf("num �� %d �Դϴ�\n" , num); //4

    num *= 3;
    p(num);
    //printf("num �� %d �Դϴ�\n", num); //12
    
    num /=6;
    p(num);
    //printf("num �� %d �Դϴ�\n", num); //2


    return 0;
}

//����
void p(int num){
    printf("num �� %d �Դϴ� \n" , num);
}