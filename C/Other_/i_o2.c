#include<stdio.h>


int main(int argc,char *argv[]){

    int ch1 = getchar();            //문자 입력
    int ch2 = fgetc(stdin);         //엔터키

    putchar(ch1);           //문자 출력
    fputc(ch2 , stdout);    //엔터키 출력
    

    return 0;
}