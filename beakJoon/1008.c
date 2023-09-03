#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){
    double num1,num2;

    scanf("%lf %lf", &num1, &num2);
    printf("%.13lf", num1/num2);
    
    return 0;
}