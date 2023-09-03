#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){

    int num1=0, num2=0;

    scanf("%d %d", &num1, &num2);

    if(num1 < 0 || num2<10)
        printf("%d", num1*num2);
    else{
        puts("require num1 < 0 , num2 < 10");
    }


    return 0;
}