#include<stdio.h>

//치환 매크로 ##

#define CON(UPP,LOW)    UPP## 00 ##LOW

int main(int argc, char *argv[]){

    int num = CON(22,77);
    printf("%d",num);

    return 0;
}