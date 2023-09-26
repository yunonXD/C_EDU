#include<stdio.h>

void InsertSort(int arr[], int n){

    int j =0;


    for(int i =1; i <n; i++){

        int insData =arr[i];        //정렬 대상 지정

        for(j=i-1; j >=0; j--){
            if(arr[j] >insData)
                arr[j+1] = arr[j];      //비교 대상 뒤로 한칸 밀기
            else
                break;
        }

        arr[j+1] =insData;      //찾은 위치에 정렬 대상 삽입
    }
}


int main(int argc, char *argv[]){

    int arr[5] = {5 ,3 ,2 ,4 ,1};
    
    InsertSort(arr, sizeof(arr)/sizeof(int));

    for(int i =0; i< sizeof(arr)/sizeof(int); i++)
        printf("%d ",arr[i]);

    printf("\n");

    return 0;
}