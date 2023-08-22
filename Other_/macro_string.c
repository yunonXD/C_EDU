#include<stdio.h>

#define STRING_JOB(A, B)    #A " job is " #B "."

int main(int argc, char *argv[]){

printf("%s \n", STRING_JOB(hanson, yeeter));



    return 0;
}