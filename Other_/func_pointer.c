#include<stdio.h>

//함수포인터 예제

int Sosimple(int num1, int num2){
    
    return 0;
}


int main(void){

    int (*Fptr) (int, int);

    Fptr = Sosimple;

    Fptr(3,4);


    return 0;
}