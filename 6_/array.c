#include<stdio.h>

int main(void){

    //배열
    // int subway_1 = 30; 
    // int subway_2 = 40;
    // int subway_3 = 50;

    // printf("지하철 1호차에 %d 명이 타고있습니다. \n" , subway_1);
    // printf("지하철 2호차에 %d 명이 타고있습니다. \n" , subway_2);
    // printf("지하철 3호차에 %d 명이 타고있습니다. \n" , subway_3);

    //여러 개의 변수를 함께, 동시에 새성
    // int subway_array[3];
    // subway_array[0] = 30;
    // subway_array[1] = 40;
    // subway_array[2] = 50;

    // for( int i =0; i<3; i++){
    //     printf("지하철 %d호차에 %d 명이 타고있습니다. \n", i + 1, subway_array[i]);
    // }

    //값 설정 방법
    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // for (int i =0; i<10; i++){
    //     printf("%d\n", arr[i]);
    // }

    // int arr[10];
    // for (int i =0; i<10; i++){
    //     printf("%d\n", arr[i]);
    // }

    //배열크기는항상상수로선언(직접)
    // int size = 10;
    // int arr[size];

    // int arr[10] = {1,2};        //다음 값부턴 0으로 초기화
    // for(int i = 0; i<10; i++){
    //     printf("%d\n", arr[i]);
    // }

    //int arr[] = {1,2}; // == arr[2]

    float arr_f[5] = {1.0f, 2.0f, 3.0f};
    for(int i = 0; i<5; i++){
         printf("%.2f\n", arr_f[i]);
     }



    return 0;
}