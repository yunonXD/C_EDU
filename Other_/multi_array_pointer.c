#include<stdio.h>

int main(void){

    int arr2d[3][4];                //2차원 배열은 가로 길이가 다르면 포인터 형이 달라짐
    int arr2d2[3][3];               //2차원 배열은 +1 을 할 시 아래(세로)로 +1 이 작동함
    int *ptr = arr2d;               //포인터 증가의 결과로 int 형 기준 단순 +4 씩 값이 증가하는게 아님 (요소 x 가로길이)


    printf("%d" , sizeof(ptr)/sizeof(int));


    return 0;
}