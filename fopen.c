#include<stdio.h>

//fopen
//fopen 함수가 호출되면 FILE 구조체 변수(파일입출력에 대한 정보)가 생성 (운영체제에 의해서)
//생성된 FILE 구조체 변수에는 파일에 대한 정보가 담김
//FILE 구조체의 포인터는 사실상 파일을 가리키는 "지시자" 역할

int main(int argc, char *argv[]){

    //FILE *fopen(const char *filename , const char *mode);      //파일 이름 ,스트림 종류

    FILE *fp = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\data.txt", "wt");
    if(fp == NULL){
        puts("file open failed. ");
        return -1;
    }
    fputc('A' , fp);
    fputc('B' , fp);
    fputc('C' , fp);
    fclose(fp);


    return 0;
}