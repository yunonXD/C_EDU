#include<stdio.h>

typedef struct _empInfo
{
    int empNum;
    int age;
}EmpInfo;

int main(int argc, char *argv[]){

    EmpInfo empInfoArr[100];
    EmpInfo ei;
    int eNum =0;

    printf("input the number and age :");
    scanf("%d %d" ,&(ei.empNum) ,&(ei.age));
    empInfoArr[ei.empNum] = ei;

    printf("try check emp info :");
    scanf("%d",&eNum);

    ei =empInfoArr[eNum];
    printf("num : %d  age : %d", ei.empNum, ei.age);
    return 0;
}
