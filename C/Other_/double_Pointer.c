#include<stdio.h>

int main(void){

    int num = 0;
    int *ptr = &num;

    int **dptr = &ptr;

    printf("%d" , dptr);


    return 0;
}