#include<stdio.h>

struct point{
    int xpos;
    int ypos;
};

struct circle{
    double radius;
    struct point *center;
};

int main(int argc, char *argv[]){

    struct point pos1 = {1,2};
    struct point pos2 = {100,200};

    struct point *pptr = &pos1;

    (*pptr).xpos +=4;
    (*pptr).ypos +=5;
    printf("[%d, %d] \n", pptr->xpos,pptr->ypos);

    pptr = &pos2;
    pptr ->xpos +=1;
    pptr ->ypos +=2;
    printf("[%d, %d] \n", (*pptr).xpos,(*pptr).ypos);

    printf("\n\n");

    struct point cen = {7,7};
    double rad = 5.5;
    struct circle ring = {rad, &cen};
    printf("원의 반지름 : %g \n", ring.radius);
    printf("원의 중심 [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);




    return 0;
}