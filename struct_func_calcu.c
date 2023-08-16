#include<stdio.h>

typedef struct point{
    int xpos;
    int ypos;
}Point;

int main(int argc, char *argv[]){

    Point Pos1 = {1,2,};
    Point Pos2;

    Pos2 = Pos1;

    printf("크기 : %d\n" , sizeof(Pos1));
    printf("[%d, %d] \n", Pos1.xpos, Pos1.ypos);
    printf("크기 : %d\n" , sizeof(Pos2));
    printf("[%d, %d] \n", Pos2.xpos, Pos2.ypos);

    return 0;
}