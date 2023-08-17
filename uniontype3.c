#include<stdio.h>

typedef struct{
    unsigned short upper;
    unsigned short lowwer;
} DBShort;

typedef union{

    int iBuf;
    char bBuf[4];
    DBShort sBuf;
} RDBuf;


int main(int argc, char *argv[]){

    RDBuf buf;
    printf(" 정수 입력 : ");    scanf("%d",&buf.iBuf);
    
    printf("상위 2 바이트: %u \n", buf.sBuf.upper);
    printf("하위 2 바이트: %u \n", buf.sBuf.lowwer);
    printf("상위 1 바이트 아스키 코드 : %c \n", buf.bBuf[0] );
    printf("상위 1 바이트 아스키 코드 : %c \n", buf.bBuf[3] );
    return 0;
}