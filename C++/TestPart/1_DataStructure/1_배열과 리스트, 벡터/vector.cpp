#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> A;
    A.push_back(10);
    A.push_back(30);
    A.push_back(5);
    A.push_back(8);
    A.push_back(6);

    A.push_back(1);                 //마지막에 1 추가
    A.insert(A.begin(),7);          //맨 앞쪽에 7 삽입
    A.insert(A.begin() +2 ,10);     //두번째 앞에 10 삽입

    A[4] = -5;                      //4번째 인덱스를 -5로 변경

    A.pop_back();                   //맨 마지막 값 삭제
    A.erase(A.begin() +3);          //3번째 인덱스 값 삭제
    //A.clear();                      //벡터 A 모든 값 삭제

    cout << A.size() << endl;
    cout << A.front() << endl;
    cout << A.back() << endl;
    cout << A[3] << endl;
    cout << A.at(5) << endl;

}