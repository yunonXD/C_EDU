#include<stdio.h>

int main(void){

    int arr3[4][2] = {
        {1,2},
        {3,4},
        {5,6},
        {7,8}
    };

    for(int i = 0; i<4; i++){
        for(int j = 0; j < 2; j++){
            //printf("2���� �迭 (%d, %d) �� ���� : %d\n" , i , j , arr3[i][j]);
        }
        printf("\n");
    }

    int arr4[3][3][3] = {
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {10,11,12},
            {13,14,15},
            {16,17,18}
        },
        {
            {19,20,21},
            {22,23,24},
            {25,26,27}
        }
    };

    for(int i = 0; i<3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k <3; k++){
                printf("3���� �迭 (%d, %d, %d) �� ���� : %d\n" , i , j , k , arr4[i][j][k]);
            }
        }
        printf("\n");
    }


    return 0;
}