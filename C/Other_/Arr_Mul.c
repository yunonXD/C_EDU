#include<stdio.h>

int main(void){

    // int arr1[3][4];
    // int arr2[7][9];

    // printf("세로 3 , 가로 4 : %d \n", sizeof(arr1)/sizeof(int));    //배열 길이 반환
    // printf("세로 7 , 가로 9 : %d \n", sizeof(arr2));                //바이트 단위로 계산되어 반환


    int villa[4][2];
    int popu;

    //가구별 거주 인원 입력 받기
    for(int i = 0; i<4; i++){
        for(int j = 0; j<2; j++){
            printf("%d 층 %d 호 인구수 : " , i+1, j+1);
            scanf("%d" , &villa[i][j]);
        }
    }

    //빌라의 층별 인구수 출력
    for(int i = 0; i < 4; i++){
        popu = 0;
        popu += villa[i][0];
        popu += villa[i][1];
        printf(" %d 층 인구수 : %d \n" , i+1, popu);
    }



    return 0;
}