#include<stdio.h>
#include<stdlib.h>

void cultime(int *h, int *m){

    if( *h>= 0 && *h <=23 && *m>= 0 && *m <=59 ){

        if( *m- 45 >=0 ){
            *m= *m-45;
        }
        else if( *m- 45 <0 ){
            int c = *m-45;
            *m = c + 60;
            *h -=1;
            *h <0? *h+=24:*h;
        }
    }
    else
        puts("out of range");
}

int main(int argc, char *argv[]){

    int H =24, M =60;
    scanf("%d %d", &H, &M);

    cultime(&H, &M);

    printf("%d %d\n", H, M);

    return 0;
}