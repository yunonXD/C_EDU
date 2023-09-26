#include<stdio.h>

typedef struct point{
    int xpos;
    int ypos;
}Point;

Point AddPoint(Point pos1, Point pos2){
    Point pos = {pos1.xpos+pos2.xpos , pos1.ypos + pos2.ypos};
    return pos;
}

Point MinPoint(Point pos1, Point pos2){
    Point pos = {pos1.xpos - pos2.xpos , pos2.ypos - pos2.ypos};
    return pos;
}

int main(int argc, char *argv[]){

    Point pos1 = {5,6};
    Point pos2 = {2,9};
    Point Result = {0,0};

    Result = AddPoint(pos1, pos2);
    printf("[%d, %d] \n", Result.xpos, Result.ypos);
    Result = MinPoint(pos1, pos2);
    printf("[%d, %d] \n", Result.xpos, Result.ypos);

    return 0;
}