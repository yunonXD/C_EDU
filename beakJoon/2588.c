#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int a= 0 , b= 0;

    scanf("%d %d", &a, &b);

    printf("%d\n", a * (b%10));
    printf("%d\n", a * (b%100/10));
    printf("%d\n", a * (b/100));

    printf("%d", a * b);


    return 0;
}