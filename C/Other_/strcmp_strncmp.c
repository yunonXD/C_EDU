#include<stdio.h>
#include<string.h>


//strcmp        첫번째 두번째 인자 전체 비교
//s1 이 더 크면 0보다 큰값이 return 양수
//s2 가 더 크면 0보다 작은 값이 return 음수

//strncmp       구분비교 (맨 앞에서 몇개의 문자를 비교할것인지)

//완전히 똑같은 값이면 0 return

//아스키코드의 크기로 비교 null문자도 비교 대상


int main(int argc, char *argv[]){

    printf("%d\n" , strcmp("ABCD" , "ABCC")); //0보다 큰 값이 출력
    printf("%d\n", strcmp("ABCD" , "ABCDE")); //0보다 작은 값 출력


    char str1[20];
    char str2[20];
    printf("문자열 입력 1: ");
    scanf("%s",str1);
    printf("문자열 입력 2: ");
    scanf("%s",str2);

    if(!strcmp(str1,str2)){
        puts("that two char is equal.");
    }
    else{
        puts("that who char is not same.");

        if(!strncmp(str1,str2,3))
            printf("but second spel is same.");
    }


    return 0;
}