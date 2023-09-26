#include<stdio.h>
#include<string.h>

//concatenation "Cat" 약자. 순차라는 뜻.
//strcat        //합수 붙이기. 단 배열의 크기가 늘어나진 않는다.
//붙을 때 \0 의 위치에 붙고 \0이 마지막으로 이동함.
//strncat       //함수붙이기 but 마지막 인자에 최대 길이 제한


int main(int argc, char *argv[]){

    char str1[20] = "First~";
    char str2[20] = "Second";

    char str3[20] = "Simple num: ";
    char str4[20] = "1234567890";

    //===case 1 ===//
    strcat(str1,str2);
    puts(str1);
    //First~\0 + second
    //First~second\0

    //===case 2 ===//
    strncat(str3,str4,7);
    puts(str3);

    return 0;
}