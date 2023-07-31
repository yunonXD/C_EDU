#include<stdio.h>

int f(int n);


int f(int n){
    if( n == 0)  return 1;

    else return n * f(n-1);

}


int main(void){


    printf("1! = %d\n" , f(1));
    printf("2! = %d\n" , f(2));
    printf("3! = %d\n" , f(3));
    printf("4! = %d\n" , f(4));
    printf("5! = %d\n" , f(5));
    printf("6! = %d\n" , f(6));





    return 0;
}
