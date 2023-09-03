#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){

    int num1=0, num2=0;

    scanf("%d %d", &num1, &num2);

    if(num1 >= 1 && num2 <=10000){
        printf("%d \n", num1 + num2);
        printf("%d \n", num1 - num2);
        printf("%d \n", num1 * num2);
        printf("%d \n", num1 / num2);
        printf("%d \n", num1 % num2);
    }
    else
        puts("no");


    return 0;
}