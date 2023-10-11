#include<iostream>
#include<cstdlib>
#include<climits>

using namespace std;

int main(){

    int testcase;
    cin >> testcase;

    int answer =0;//long long 자료형 실수
    int A[100001] = {0};

    for(int i =1; i <10001; i++){//1000001
        A[i] = rand() *100;
    }

    for(int t=1; t<testcase +1; t++){
        int start, end;
        cin >> start >> end;

        for(int i = start; i<=end; i++){
            answer += A[i];//answer 초기화 실수
        }
        cout << testcase << " " << answer;//testcase 자리에 t 넣어야함
    }
    return 0;
}