#include<stdio.h>

int main(void){

    int arr1[2][3][4];
    double arr2[5][5][5];
    printf("높이2 세로3 가로4 int 형 배열%d \n",sizeof(arr1));
    printf("높이5 세로5 가로5 double 형 배열%d \n\n\n",sizeof(arr2));



    int mean = 0;
    int record[3][3][2] = {
        {
            {70, 80},
            {94, 90},
            {70, 85}
        },

        {
            {83, 90},
            {95, 60},
            {90, 82}
        },

        {
            {98, 89},
            {99, 94},
            {91, 87}
        },
    };



    for(int i= 0;  i<3;  i++)
        for(int j= 0; j <2; j++){
            mean += record[0][i][j];
        }
    printf(" A 학급 전체 평균 : %g \n" , (double)mean/6);

    mean = 0;
    printf("\n\n");

    for(int i= 0;  i<3;  i++)
        for(int j= 0; j <2; j++){
            mean += record[1][i][j];
        }
    printf(" A 학급 전체 평균 : %g \n" , (double)mean/6);

    mean = 0;
    printf("\n\n");


    for(int i= 0;  i<3;  i++)
        for(int j= 0; j <2; j++){
            mean += record[2][i][j];
        }
    printf(" A 학급 전체 평균 : %g \n" , (double)mean/6);



    return 0;
}

