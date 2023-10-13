#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
주어진   N 개의 수에서 다른 두 수의 합으로 표현되는 수가 있다면 그 수를 '좋은 수' 라고 한다.
N 개의 수중에 좋은 수가 몇개인지 구하오
*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

//===========================//

    int N=0;
    cin >>N;
    vector<int> A(N,0);

    for(int i =0; i <N; i++){
        cin >>A[i];
    }

    sort(A.begin() , A.end());

    int Result =0;      //좋은 수

    for(int k=0; k <N; k++){
        long find = A[k];
        int i=0;
        int j=N-1;

        while( i < j ){
            if(A[i] + A[j] == find){        // 0 과 find 일때, 혹은 찾았을때 처리
                if( i !=k && j !=k ){
                    Result++;
                    break;
                }
                else if( i == k)
                    i++;
                else if( j == k)
                    j--;
            }else if(A[i] + A[j] < find){
                i++;
            }else{
                j--;
            }
        }
    }

    cout << Result << endl;
}