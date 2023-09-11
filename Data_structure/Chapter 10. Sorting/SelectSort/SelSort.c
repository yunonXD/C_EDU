#include"stdio.h"

//SelectSort

void SelSort(int arr[], int n){

    for(int i =0; i< n-1; i++){
        int maxIdx = i;

        for(int j =i+1; j< n; j++){
            if(arr[j] < arr[maxIdx])
                maxIdx = j;     //가장 왼쪽에 올 데이터 저장
        }

        int temp =arr[i];
        arr[i] = arr[maxIdx];
        arr[maxIdx] =temp;
    }
}

int main(int argc, char *argv[]){

    int arr[4] = {3,4,2,1};
    
    SelSort(arr, sizeof(arr)/sizeof(int));

    for(int i =0; i< sizeof(arr)/sizeof(int); i++)
        printf("%d ",arr[i]);

    printf("\n");

    return 0;
}