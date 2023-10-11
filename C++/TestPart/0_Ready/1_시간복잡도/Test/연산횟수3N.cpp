#include<iostream>

using namespace std;

int main(int arvc, char*argv[]){
    const int N =1000;
    int cnt =1;

    for (int i =0; i <N; i++){
        cout << "1Cul count : " << cnt++ << "\n";
    }

    for (int i =0; i <N; i++){
        cout << "2Cul count : " << cnt++ << "\n";
    }

    for (int i =0; i <N; i++){
        cout << "3Cul count : " << cnt++ << "\n";
    }
}

//연산횟수 : 3N 회 >> 복잡도 O(n)