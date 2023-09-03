#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int a= 0;

    scanf("%d", &a);

    if( a >=1 && a <=4000){

        if( a%4 == 0 && a%100 !=0 || a%400 == 0)

            puts("1");
        else{
            puts("0");
        }

    }

    return 0;
}