#include<stdio.h>

extern int num;

void Increment(void){
    num ++;
}

//static 파일 접근 범위를 갖는다
//파일 안에서만 접근 가능
static void MinCnt(void){
    static int num2 = 1;
    num = num+num2;
}

int GetNum(void){
    return num;
}