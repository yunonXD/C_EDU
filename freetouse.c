#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int *pnum;
    pnum = (int*)malloc(sizeof(int*));

    if(pnum == 0){
        puts("NO MEMORY\n");
        return -1;
    }
    else
        *pnum = 10000;

    printf(" %d \n" ,*pnum);

    free(pnum);


    return 0;
}