#include<stdio.h>

int main(void){

    int arr1[5] = { 1,2,3,4,5};
    int arr2[] = { 1,2,3,4,5,6,7};
    int arr3[5] = {1,2};

    int ar1len, ar2len, ar3len, i;

    printf("배열 arr1 의 크기 : %d\n", sizeof(arr1));  //sizeof << 길이가 아닌 크기를 반환
    printf("배열 arr2 의 크기 : %d\n", sizeof(arr2));
    printf("배열 arr3 의 크기 : %d\n", sizeof(arr3));

    ar1len = sizeof(arr1) / sizeof(int);    //배열의 길이 계산 자료형 / 크기
    ar2len = sizeof(arr2) / sizeof(int);
    ar3len = sizeof(arr3) / sizeof(int);


    for(int i =0; i<ar1len; i++){
        printf("%d" , arr1[i]);
    }

    printf("\n");

    for(int i =0; i<ar2len; i++){
        printf("%d" , arr2[i]);
    }

    printf("\n");

    for(int i =0; i<ar3len; i++){
        printf("%d" , arr3[i]);
    }

    printf("\n");


    return 0;
}