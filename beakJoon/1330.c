#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int a= 0, b= 0;

    scanf("%d %d", &a, &b);

    if(a>b)
        puts(">");
    else if(a<b)
        puts("<");
    else
        puts("==");


    return 0;
}