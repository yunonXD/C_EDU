#include<stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
}Point;


typedef int INT;
typedef int * PTR_INT;      //int* 대신 PTR_INT 사용

typedef unsigned int UNIT;
typedef unsigned int *PTR_UINT;

typedef unsigned char UCHAR;
typedef unsigned char *PTR_UCHAR;

int main(int agrc, char *argv[]){

    INT num1 = 120;                 //int num1 = 20; 
    PTR_INT pnum1 = &num1;          //int * pnum1 = &num1;

    UNIT num2 = 190;                //unsigned int num2 = 190;
    PTR_UINT pnum2 = &num2;         //unsigned int * pnum2 = &num2;
    
    UCHAR ch = 'Z';                //unsigned char ch = 'Z';
    PTR_UCHAR pch= &ch;               //unsigned char * pch = &ch;

    printf(" %d %u %c \n", num1, *pnum2, *pch);

    Point pos;
    pos.xpos = 20;
    printf("%d" , pos.xpos);








    return 0;
}