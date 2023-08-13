#include<stdio.h>
#include<string.h>
//strlen 문자열의 길이를 반환하는 함수

void RemoveBSN(char str[]){     //마지막 NULL문자 제거기
    int len = strlen(str);      //길이 확인
    str[len-1] = 0;             //엔터가 들어가는 위치에 아스키코드값 0을 저장 
}


int main(int argc, char *argv[]){

    char str[100];
    printf("문자열 입력 : ");
    fgets(str, sizeof(str), stdin);
    printf("길이 : %d, 내용 : %s \n", strlen(str),str);

    RemoveBSN(str);
    printf("길이 : %d, 내용 : %s \n", strlen(str),str);

    return 0;
}