#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){

    int H =0, M =0 , T=0;
    scanf("%d %d %d", &H, &M, &T);

    int cook = 60 *H + M;
    cook = cook + T;

    H =(cook/60) %24;
    M =(cook %60);

    printf("%d %d\n", H,M);

    return 0;
}