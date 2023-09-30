#include<iostream>
#include<cstring>

using namespace std;

const int SIZE = 11;

int sumArr(int[] , int);

int main(int argc, char *atgv[]){

    int arr[SIZE] = {1,2,3,4,5,6,7,8,100,200,300};
    int sum = sumArr(arr,sizeof(arr)/sizeof(int));

    cout << sum <<endl;
    return 0;
}

int sumArr(int arr[] , int n){
    int total =0;

    for(int i=0; i<n; i++){
        total +=arr[i];
    }

    return total;
}