#include<stdio.h>

int main(void){


    int num1= 0 , num2 = 20, num3 = 30;
    int *arr[3] = {&num1,&num2,&num3};

    printf("%d\n", *arr[0]);
    printf("%d\n", *arr[1]);
    printf("%d\n", *arr[2]);

    char *strArr[3] = {"Simple" , "String" , "Array"};
    printf("%s \n", strArr[0]);
    printf("%s \n", strArr[1]);
    printf("%s \n", strArr[2]);


    return 0;
}