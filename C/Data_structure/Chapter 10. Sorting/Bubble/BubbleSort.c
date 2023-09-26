#include"stdio.h"

//Simple Bubble Sorting

void BubbleSort(int arr[], int n){
    
    for(int i =0; i< n-1; i++){     // 0 1 2

        for(int j =0; j <(n-i)-1; j++){
            if(arr[j] >arr[j+1]){       //앞이 더 크다 (오름차순)
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
}

int main(int argc, char* argv[]){

    int arr[4] = {4,3,2,1};

    BubbleSort(arr, sizeof(arr)/sizeof(int));

    for(int i =0; i <(sizeof(arr)/sizeof(int)); i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}