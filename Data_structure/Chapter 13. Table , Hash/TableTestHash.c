#include<stdio.h>

typedef struct _empInfo
{
    int empNum;
    int age;
}EmpInfo;

int GetHashValue(int empNum){
    return empNum%10;
}

int main(int argc, char *argv[]){

    EmpInfo empInfoArr[100];
    EmpInfo emp1 ={1234 ,40};
    EmpInfo emp2 ={1235 ,42};
    EmpInfo emp3 ={2314 ,46};

    EmpInfo r1 ,r2 ,r3;

    empInfoArr[GetHashValue(emp1.empNum)] = emp1;
    empInfoArr[GetHashValue(emp2.empNum)] = emp2;
    empInfoArr[GetHashValue(emp3.empNum)] = emp3;

    r1 =empInfoArr[GetHashValue(1234)];
    r2 =empInfoArr[GetHashValue(1235)];
    r3 =empInfoArr[GetHashValue(2314)];

    printf(" num :%d  age :%d\n", r1.empNum, r1.age);
    printf(" num :%d  age :%d\n", r2.empNum, r2.age);
    printf(" num :%d  age :%d\n", r3.empNum, r3.age);

    return 0;
}
