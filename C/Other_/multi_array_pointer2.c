#include<stdio.h>

int main(void){

    int arr2d[3][3];
    printf("%d \n" , arr2d);            //배열의 이름만 선언 : 첫번째 배열 출력 단, 의미는 "배열의 전체"
    printf("%d \n" , arr2d[0]);         //"첫번째 행 의미"
    printf("%d \n" , &arr2d[0][0]);     //똑같다! 단 보이는것만.

    printf("%d \n" , arr2d[1]);
    printf("%d \n" , &arr2d[1][0]);

    printf("%d \n" , arr2d[2]);
    printf("%d \n" , &arr2d[2][0]);    

    printf("sizeof(arr2d) : %d \n" , sizeof(arr2d));            //36 모든 행 크기의 합
    printf("sizeof(arr2d[0]) : %d \n" , sizeof(arr2d[0]));      //12 첫번째 행의 크기
    printf("sizeof(arr2d[1]) : %d \n" , sizeof(arr2d[1]));      //12 두번째 행의 크기
    printf("sizeof(arr2d[2]) : %d \n" , sizeof(arr2d[2]));      //12 세번째 행의 크기


    return 0;
}