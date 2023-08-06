#include<stdio.h>


void ShowElem(int *param , int len){

    for(int i =0; i<len; i++){
        printf("%d " , param[i]);
    }
    printf("\n");
}

void AddElem(int *param, int len, int add){
    for(int i =0; i<len; i++){
        param[i] += add;
    }
}



int main(void){

    int arr1[3] = {1,2,3};
    int arr2[5] = {4,5,6,7,8};
    ShowElem(arr1,sizeof(arr1)/sizeof(int));        //배열 전체 크기 반환 / int 크기 반환 = 배열 길이 계산 식
    ShowElem(arr2,sizeof(arr2)/sizeof(int));

    printf("\n\n");
    int arr3[3] = {1,2,3};
    AddElem(arr3, sizeof(arr3)/sizeof(int) , 1);
    ShowElem(arr3, sizeof(arr3)/sizeof(int));

    AddElem(arr3, sizeof(arr3)/sizeof(int) , 2);
    ShowElem(arr3, sizeof(arr3)/sizeof(int));

    AddElem(arr3, sizeof(arr3)/sizeof(int) , 3);
    ShowElem(arr3, sizeof(arr3)/sizeof(int));


    return 0;
}