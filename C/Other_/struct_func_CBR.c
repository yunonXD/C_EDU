#include<stdio.h>

typedef struct point{
    int xpos;
    int ypos;
}Point;

void OrgSymTrans(Point *ptr){       //원점대칭
    ptr ->xpos = (ptr -> xpos) * -1;
    ptr ->ypos = (ptr ->ypos) * -1;
}

void ShowPosition(Point pos){
    printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int main(int argc, char *argv[]){

    Point pos = {7, -5};
    OrgSymTrans(&pos);      // pos 값 대칭이동
    ShowPosition(pos);
    OrgSymTrans(&pos);      // pos 값 대칭이동
    ShowPosition(pos);



    return 0;
}