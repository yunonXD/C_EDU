#include<iostream>
#include<cstring>

using namespace std;


int main(int argc, char *atgv[]){

    // int a[10] = {1,2,3,4,5};

    // for(int i=0; i<sizeof(a)/sizeof(int); i++){
    //     cout <<a[i];
    // }

    // cout << "\n";

    // //범위기반 for 문
    // for( int i :a){
    //     cout << i;
    // }

    // cout << "\n";

    int temp[4][5] ={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };

    for( int i=0; i <4; i++){
        for(int j=0; j <5; j++){
            cout << temp[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}