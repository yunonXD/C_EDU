#include<stdio.h>
#include<math.h>

struct point{
    int xpos;
    int ypos;
};


int main(int argc, char *argv[]){

    struct point pos1,pos2;
    double distance =0;

    fputs("point1 pos : ", stdout);
    scanf("%d %d", &pos1.xpos, &pos1.ypos );

    fputs("point2 pos : ", stdout);
    scanf("%d %d", &pos2.xpos, &pos2.ypos);

    //두 점 간의 계산
    distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + 
    (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));

    printf("두 점 간의 거리 : %g \n", distance);
    




    return 0;
}