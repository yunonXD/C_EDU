#include<stdio.h>
#include"areaArith.h"
#include"roundArith.h"

//헤더 못찾으면 gcc -o main 메인.c 불러올.c 파일 터미널에서 ㄱ
//gcc -o main main.c roundArith.c

int main(int argc, char *argv[]){

    printf("Triangle area (base :4 , height : 2) : %g \n",TriangleArea(4,2));
    printf("Circle area (radius : 3) : %g \n",CircleArea(3));

    printf("Rectangle Round : (base : 2.5, height : 5.2) : %g \n", RectangleRound(2.5,5.2));
    printf("Square Round : (size : 3) : %g \n", SquareRound(3));

    return 0;
}