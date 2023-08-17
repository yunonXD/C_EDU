#include<stdio.h>

typedef union ubox{
    int meme1;
    int meme2;
    double meme3;

}Ubox;

//메모리 공간의 차이 구분

int main(int argc, char *argv[]){

    Ubox ubx;
    ubx.meme1 = 20;
    printf("%d \n", ubx.meme2);

    ubx.meme3 = 7.15f;
    printf("%d \n", ubx.meme1);
    printf("%d \n", ubx.meme2);
    printf("%g \n", ubx.meme3);

    return 0;
}