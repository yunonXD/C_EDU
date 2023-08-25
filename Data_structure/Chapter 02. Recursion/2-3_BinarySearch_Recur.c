#include<stdio.h>

int BSearchRecur(int arr[], int first, int last, int target){

    int mid =0;
    if(first>last)
        return -1;                  //탈출조건

    mid = (first + last)/2;         //가운대 찍기
    if(arr[mid] == target)
        return mid;
    else if (target < arr[mid])
        return BSearchRecur(arr, first, mid-1 ,target);
    else   
        return BSearchRecur(arr, mid +1, last ,target);
}

int main(int argc, char *argv[]){

    return;
}




/*
이진 탐색 알고리즘의 재귀구현
    1. 이진탐색 핵심
        - 탐색 범위의 중앙에 목표 값이 저장되어있는지 확인
        - 저장 x 라면 탐생 범위를 반으로 줄여서 다시 탐색

        이걸 코드로 ?

*/