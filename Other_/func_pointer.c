#include<stdio.h>

//함수포인터 예제

int Sosimple(int num1, int num2){
    
    return 0;
}


int main(void){

    int (*Fptr) (int, int);     //함수 포인터 선언

    Fptr = Sosimple;        //상수의 값을 변수에 저장

    Fptr(3,4);


    return 0;
}