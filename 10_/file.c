#include<stdio.h>

#define MAX 10000

int main(void){

    //파일의 입출력
    //파일에 데이터를 저장
    //파일에 저장된 데이터 불러오기

    //파일쓰기
    //fputs fgets 쌍 >> 문자열 저장 및 불러오기에 사용
    // char line[MAX];     //char line[10000]
    // FILE *file = fopen("c:\\test1.txt" , "wb");     //r w a / t b
    // if(file == NULL){
    //     printf("열기 실패\n");
    //     return 1;
    // }

    // fputs("fputs 를 이용한 글을 작성\n" , file);
    // fputs("잘 적히고 있나??\n\n" , file);

    // //파일을 열고 닫지 않은 상태에서 
    // //어떤 프로그램 문제로 데이터 손실이 있을 수 있음

    //파일읽기
    // fclose(file);   //저장 및 닫기
    char line[MAX];     //char line[10000]
    FILE *file = fopen("c:\\test1.txt" , "rb");     //r w a / t b
    if(file == NULL){
        printf("열기 실패\n");
        return 1;
    }

    while(fgets(line,MAX,file) != NULL){
        printf("%s",line);
    }

    //파일을 열고 닫지 않은 상태에서 
    //어떤 프로그램 문제로 데이터 손실이 있을 수 있음
    fclose(file);   //저장 및 닫기



    //fprintf fscanf 쌍 
    int num[6] = {0,0,0,0,0,0}; // 추첨번호



    return 0;
}