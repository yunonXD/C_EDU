#include<stdio.h>

#define HIT_NUM 5

int main(int argc, char*argv[]){

#if HIT_NUM == 5 //포함조건
    puts("macro num HIT_NUM is now 5.");

#elif HIT_NUM == 6
    puts("macro num HIT_NUM is now 6.");

#else
    puts("macro num HIT_NUM is not 5.");
#endif
    return 0;

}