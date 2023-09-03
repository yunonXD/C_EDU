#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int a= 0;

    scanf("%d", &a);

        if(a >= 90 && a<=100)
            puts("A");
        else if(a>= 80 && a <90)
            puts("B");
        else if(a>= 70 && a <80)
            puts("C");
        else if(a>= 60 && a <70)
            puts("D");
        else
            puts("F");


    return 0;
}