#include<stdio.h>

void fot(int *ptr);

int main(void){


    int age;
    printf("ют╥б");
    scanf("%d\n" , &age);
    fot(&age);
    printf("%d\n", age);


    return 0;
}

void fot(int *ptr){

    *ptr+=1;
}