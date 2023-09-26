#include<stdio.h>
#include"usefulHeap.h"

int Pricomp(int n1, int n2){
    return n2-n1;   //오름차순
}


void HeapSort(int arr[], int n, priorityComp pc){
    Heap heap;
    HeapInit(&heap ,pc);

    //정렬 대상으로 힙 구함
    for(int i =0; i <n; i++)
        HInsert(&heap, arr[i]);
    
    //순서대로 꺼내서 정렬 완성
    for(int i =0; i <n; i++)
        arr[i] =HDelete(&heap);
    
}



int main(int argc, char *argv[]){

    int arr[4] = {3,4,2,1};

    HeapSort(arr, sizeof(arr)/sizeof(int), Pricomp);
    
    for(int i= 0; i<sizeof(arr)/sizeof(int); i++)
        printf("%d ",arr[i]);

    return 0;
}