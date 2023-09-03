#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int x = 0, y= 0;

    scanf("%d %d", &x ,&y);

    //-+ ++
    //-- +-

    if( -1000 <=x && x<=1000 && x!=0 && -1000 <=y && y<=1000 && y!=0){

        if( x> 0 && y> 0)
            puts("1");
        else if( x< 0 && y> 0)
            puts("2");
        else if( x< 0 && y< 0)
            puts("3");
        else
            puts("4");
    }
    else{
        puts("out of range");
    }

    return 0;
}