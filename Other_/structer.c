#include<stdio.h>

//구조체
struct Test{    //"자료형"의 이름 test "user defined data type"

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