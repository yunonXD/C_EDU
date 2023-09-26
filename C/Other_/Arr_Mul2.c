#include<stdio.h>

int main(void){

    int arr1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };


    int arr2[3][3] = {
        {1},
        {4,5},
        {7,8,9}
    };

    int arr3[3][3] = {1,2,3,4,5,6,7};



    for(int i = 0; i<3; i++){
        for(int j =0; j<3; j++)
            printf("%d " , arr1[i][j]);
        printf("\n");
    }

    printf("\n");

        for(int i = 0; i<3; i++){
        for(int j =0; j<3; j++)
            printf("%d " , arr2[i][j]);
        printf("\n");
    }

    printf("\n");

        for(int i = 0; i<3; i++){
        for(int j =0; j<3; j++)
            printf("%d " , arr3[i][j]);
        printf("\n");
    }

    printf("\n");




    return 0;
}