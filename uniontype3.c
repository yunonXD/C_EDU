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
    printf(" ���� �Է� : ");    scanf("%d",&buf.iBuf);
    
    printf("���� 2 ����Ʈ: %u \n", buf.sBuf.upper);
    printf("���� 2 ����Ʈ: %u \n", buf.sBuf.lowwer);
    printf("���� 1 ����Ʈ �ƽ�Ű �ڵ� : %c \n", buf.bBuf[0] );
    printf("���� 1 ����Ʈ �ƽ�Ű �ڵ� : %c \n", buf.bBuf[3] );
    return 0;
}