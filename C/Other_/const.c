#include<stdio.h>

int main(void){

    // int num = 20;
    // const int *ptr = &num;       //num 을 상수화
    // //*ptr = 30;    //컴파일 에러!
    // num = 40;


    int num1 = 20;
    int num2 = 30;
    int *const ptr = &num1;     //ptr 을 상수화
    //ptr = &num2;        //컴파일 에러
    *ptr = 40;

    //const int * const ptr = &num  //이것도 가능


    //const 는 문제를 발견하기 쉽게 만들어주는 가치 높은 "선언"

    return 0;
}