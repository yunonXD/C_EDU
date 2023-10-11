#include<iostream>

using namespace std;

int main(int argc, char *argv){

    const int N =1000;
    int cnt =1;

    for (int i=0; i <N; i++){
        for(int j=0; j <N; j++)
            cout << "cul count : " << cnt++ << "\n";
    }
}

//연산횟수 : N 회 >> 복잡도 O(n^2)