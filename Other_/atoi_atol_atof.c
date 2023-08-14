#include<stdio.h>
#include<stdlib.h>

//int atoi          //문자열 내용을 int 로 변환
//long atol         //long 으로 변환
//double atof       //double 로 변환

int main(int argc, char *argv[]){

    char str[20];
    printf("정수 입력 :");
    scanf("%s",str);
    printf("%d \n",atoi(str));

    printf("실수 입력:");
    scanf("%d",str);
    printf("%g \n",atof(str));
    


    return 0;
}