#include<stdio.h>

//선언 
void p(int num);

int main(void){

    //function
    //계산기

    int num = 2;
    p(num);
    //printf("num 은 %d 입니다\n" , num);

    //2+3
    num = num  + 3;
    p(num);
    //printf( "num 은 %d 입니다\n", num); //5

    num -= 1; // num - num-1
    p(num);
    //printf("num 은 %d 입니다\n" , num); //4

    num *= 3;
    p(num);
    //printf("num 은 %d 입니다\n", num); //12
    
    num /=6;
    p(num);
    //printf("num 은 %d 입니다\n", num); //2


    return 0;
}

//정의
void p(int num){
    printf("num 은 %d 입니다 \n" , num);
}