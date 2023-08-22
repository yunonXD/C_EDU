#include<stdio.h>


struct point
{
    int xpos;
    int ypos;
    struct point *ptr;
};


int main(int argc, char *argv[]){

    struct point pos1 = {1,1};
    struct point pos2 = {2,2};
    struct point pos3 = {3,3};

    struct point pos[3] = {
        {1,1},
        {2,2},
        {3,3}
    };

    pos[0].ptr = &pos[1];
    pos[1].ptr = &pos[2];
    pos[2].ptr = &pos[0];

    pos1.ptr = &pos2;
    pos2.ptr = &pos3;
    pos3.ptr = &pos1;

    printf("점의 연결 관계 분석\n\n");


    for(int i = 0; i<3; i++){
        printf("[%d, %d] 와 [%d, %d] 연결 \n", pos[i].xpos, pos[i].ypos, pos[i].ptr -> xpos, pos[i].ptr -> ypos);
    }

    //printf("[%d, %d] 와 [%d, %d] 연결 \n", pos1.xpos, pos1.ypos, pos1.ptr -> xpos, pos1.ptr -> ypos);
    
    //printf("[%d, %d] 와 [%d, %d] 연결 \n", pos2.xpos, pos2.ypos, pos2.ptr -> xpos, pos2.ptr -> ypos);
    
    //printf("[%d, %d] 와 [%d, %d] 연결 \n", pos3.xpos, pos1.ypos, pos3.ptr -> xpos, pos3.ptr -> ypos);


    return 0;
}