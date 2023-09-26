#include<stdio.h>


void SwapIntPtr(int *p1, int *p2){

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
}

int main(void){


    int num1 = 10;
    int num2 = 20;
    
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("*ptr1 , *ptr2 : %d %d \n" , *ptr1 , *ptr2);


    SwapIntPtr(&num1, &num2);
    printf("*ptr1 , *ptr2 : %d %d \n" , *ptr1 , *ptr2);



    return 0;
}