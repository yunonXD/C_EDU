#include<stdio.h>
#include "Point.h"

void InintPointPos(Po *ppos){
    ppos -> xpos = 0;
    ppos -> ypos = 0;
}

void SetPointPos(Po *ppos, int xpos, int ypos){

	ppos->xpos = xpos;
	ppos->ypos = ypos;
}


void ShowPointPos(Po *ppos){

	printf("[%d, %d] \n", ppos->xpos, ppos->ypos);

}


int PointComp(Po* pos1 , Po *pos2){

	if(pos1->xpos == pos2->xpos && pos1->ypos == pos2->ypos)
		return 0;
	else if(pos1->xpos == pos2->xpos)
		return 1;
	else if(pos1->ypos == pos2->ypos)
		return 2;
	else
		return -1;
}