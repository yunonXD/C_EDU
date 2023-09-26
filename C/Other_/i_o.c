#include<stdio.h>


int main(int argc,char *argv[]){

    //하나의 문자를 출력
    int putchar(int c);                     //인자로 전달된 문자를 모니터에 출력
    int fputc(int c, FILE *stream);         //fputc 함수의 두 번째 인자를 통해 출력의 대상을 지정
    

    //하나의 문자를 입력
    int getchar(void);          //키보드에 입력된 문자를 리턴
    int fgetc(FILE *stream);    //문자를 입력 받을 대상 정보를 인자로 전달


    //입출력 실패시 EOF(end of file) 상수 -1 출력

    return;
}