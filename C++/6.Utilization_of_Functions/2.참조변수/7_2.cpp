#include<iostream>
#include<cstring>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);


//참조 reference
//포인터는 복사본으로 값을 전달(return)
//참조는 복사본 없이 전달
int main(int argc, char *atgv[]){

    int wallet1 = 100;
    int wallet2 = 200;

    cout << "최초 상태" << endl;
    cout << "wallet1 : " << wallet1 << " , wallet2 : " << wallet2 << endl;

    cout << "참조 결과 \n";
    swapA(wallet1 , wallet2);
    cout << "wallet1 : " << wallet1 << " , wallet2 : " << wallet2 << endl;


    cout << "포인터 결과 \n";
    swapB(&wallet1 , &wallet2);
    cout << "wallet1 : " << wallet1 << " , wallet2 : " << wallet2 << endl;


    cout << "값 결과 \n";
    swapC(wallet1 , wallet2);
    cout << "wallet1 : " << wallet1 << " , wallet2 : " << wallet2 << endl;


    return 0;
}

//참조
void swapA(int &a, int &b){

    int temp = a;
    a = b;
    b = temp;

}

//포인터
void swapB(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

//값
void swapC(int a, int b){

    int temp = a;
    a = b;
    b = temp;
}
