#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b){
    return a+b;
}

int main(int argc, char *argv[]){

    int (*ptrsum)(int a, int b);
    ptrsum = sum;
    int *pnum;
    pnum = (int*)malloc(sizeof(int*));

    if(pnum == 0){
        puts("NO MEMORY\n");
        return -1;
    }
    else
        *pnum = 10000;

    printf(" %d \n" ,*pnum);

    printf("sum address: %p\n" ,&sum );
    printf("ptrsum value : %p\n",ptrsum);
    printf("ptrsum address : %p\n", &ptrsum);
    printf("ptrsum(%d %d) = %d\n", 3,4,ptrsum(3,4));

    free(pnum);


    return 0;
}