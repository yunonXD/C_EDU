#include<stdio.h>
#include<string.h>
//strcpy , strncpy      문자열을 복사하는 함수
//뒤를 앞으로 복사 
//strcpy(int1, int2) << int 2 를 int1로 복사
//뒤를 앞으로 복사하는데 최대 n 
//strncpy(int1, int2, sizeof(str2)) << int 2를 int 1 로 복사 단 sizeof(str2)의 반환 크기만큼

int main(int argc, char *argv[]){

    //char str10[30] = "Simple String";
    //char str20[30];
    //strcpy(str20,str10);          //str1 의 simplestring을 str2 에 복사

    //strcpy(str20, str10, sizeof(str20));   //str1 의 simplestring을 str2 에 복사하는데 str2의 반환 크기만큼 

//===================================//

    char str1[20] = "1234567890";
    char str2[20];
    char str3[5];

    //=== case 1 ===//
    strcpy(str2, str1);
    puts(str2);

    //=== case 2 ===//
    strncpy(str3 , str1, sizeof(str3));     //NULL 문자 포함 조항이 없음 즉 1~5까지 복사 but, null이 없음
    puts(str3);     //null데이터가 없어서 계속 출력됨 언제까지? null 만날때까지.

    //=== case 3 ==//
    strncpy(str3, str1, sizeof(str3) -1);       //null문자 자리 확보하고 복사
    str3[sizeof(str3)-1] = 0; //마지막 자리에 null 수동으로 넣어주기
    puts(str3);



    return 0;
}