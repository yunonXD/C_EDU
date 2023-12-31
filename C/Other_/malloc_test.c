#include<stdio.h>
#include<stdlib.h>



int main(int argc, char*argv[]){

    int *ptr1 = (int*)malloc(sizeof(int));
    int *ptr2 = (int*)malloc(sizeof(int)*7);

    if(ptr1 == NULL || ptr2 == NULL){
        puts("malloc error. shut down");
        return -1;
    }


    *ptr1 = 20;
    for(int i = 0; i<7; i++){
        ptr2[i] = i+1;
    }

    printf("%d \n", *ptr1);

    for(int i =0; i<7; i++){
        printf("%d", ptr2[i]);
    }

    free(ptr1);
    free(ptr2);
    return 0;
}