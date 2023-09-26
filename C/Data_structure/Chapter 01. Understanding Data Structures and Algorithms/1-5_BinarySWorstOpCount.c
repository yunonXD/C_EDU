#include<stdio.h>

int BinarySearch(int arr[], int len, int target){

    int first = 0;
    int last = len -1;
    int mid = 0;
    int opCount = 0;

    while(first <= last){
        mid = (first + last)/2;
        
        if(arr[mid] == target){
            return mid;
        }
        else{
            if(target < arr[mid]){
                last = mid -1;
            }
            else
                first = mid+1;
        }
        opCount ++;
    }
    printf("fail. Binary ºñ±³ ¿¬»ê È½¼ö : %d \n" , opCount);
    return -1;
}

int LSearch(int ar[], int len, int target){
    int opCount = 0;

    for(int i = 0; i < len; i++){
        if(ar[i] == target)
            return i;
        opCount ++;
    }
    printf("fail. Sequential ºñ±³ ¿¬»ê È½¼ö : %d \n",opCount);
    return -1;
}



int main(int argc, char *argv[]){

    int arr1[500] = {0,};
    int arr2[5000] = {0,};
    int arr3[50000] = {0,};
    int idx = 0;
    
//=======================================================================
    idx = BinarySearch(arr1, sizeof(arr1)/sizeof(int) , 1);     //ÀÌÁøÅ½»ö
    if(idx == -1)
        printf("B:search fail\n\n");
    else
        printf("B:target save index : %d \n\n", idx);

    idx = LSearch(arr1, sizeof(arr1)/sizeof(int) , 1);          //¼øÂ÷Å½»ö
    if(idx == -1)
        printf("S:search fail\n\n");
    else
        printf("S:target save index : %d \n\n", idx);
    

//=======================================================================
    idx = BinarySearch(arr2, sizeof(arr2)/sizeof(int) , 2);
    if(idx == -1)
        printf("search fail\n\n");
    else
        printf("target save index : %d \n\n", idx);

//=======================================================================
    idx = BinarySearch(arr3, sizeof(arr3)/sizeof(int) , 3);
    if(idx == -1)
        printf("search fail\n\n");
    else
        printf("target save index : %d \n\n", idx);



    return 0;
}