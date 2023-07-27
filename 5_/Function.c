#include<stdio.h>

//선언 
void p(int num);
void function_without_return();
int function_with_return();
void funtion_without_params();
void funtion_with_params(int num1, int num2,int num3);

int apple(int total, int ate);  //전체 total 개에서 ate 개를 먹고 남은 수를 반환

int main(void){

    //function
    //계산기

    // int num = 2;
    // p(num);
    // //printf("num 은 %d 입니다\n" , num);

    // //2+3
    // num = num  + 3;
    // p(num);
    // //printf( "num 은 %d 입니다\n", num); //5

    // num -= 1; // num - num-1
    // p(num);
    // //printf("num 은 %d 입니다\n" , num); //4

    // num *= 3;
    // p(num);
    // //printf("num 은 %d 입니다\n", num); //12
    
    // num /=6;
    // p(num);
    //printf("num 은 %d 입니다\n", num); //2

    //함수 종류
    //반환값이 없는 함수
    // function_without_return();


    // //반환값이 있는 함수
    // int ret = function_with_return();
    // p(ret);

    // //파라미터(전달값)가 없는 함수
    // funtion_without_params();

    //파라미터(전달값) 이 있는 함수
    //funtion_with_params(21,25,31);

    //파라미터도 받고 리턴도 보내주는 함수
    int ret = apple(5,2);   // 5개의 사과중 2개를 먹음
    //printf("사과 5개중에 2개를 먹으면 %d 가 나와요 " , ret);

    printf("사과 %d 개 중에 %d 개를 먹으면 %d 개가 나와요." , 10, 4, apple(10,4));


    return 0;
}

//정의
void p(int num){
    printf("num 은 %d 입니다 \n" , num);
}

//전달값 36
// 함수 : ㅁ + 4
// 출력값(반환 리턴) : ?
//반환형 함수이름(*전달값)


void function_without_return(){
    printf("반환값이 없는 함수입니다. \n");

}

int function_with_return(){
    printf("반환값이 있는 함수입니다.\n");
    return 10;
}

void funtion_without_params(){
    printf("파라미터가 없는 함수입니다. \n");
}

void funtion_with_params(int num1, int num2, int num3){
    printf("파라미터가 있는 함수, 전달값은 %d %d %d 입니다. \n" , num1, num2, num3);
}

int apple(int total, int ate){
    //printf("파라미터 + 리턴");
    return total - ate;
}
