#include<stdio.h>

//����ü
struct Test{    //"�ڷ���"�� �̸� test "user defined data type"

    int test;
    int test2;

    char test3[10];
    char test4[100];
    double test5;
};


int main(int argc, char *argv[]){

    struct Test Tes;

    Tes.test = 20;
    printf("%d\n",Tes.test);


    return 0;
}