#include<iostream>

using namespace std;

int main(int argc, char *atgv[]){

    //간접값 연산자, 간접 참조 연산자 *

    int *a;     //c
    int *b;     //c++
    int *c,d;   //c << pointer  d << int val

    int num1 =6;
    int *pointer;

    pointer = &num1;

    cout << "a value : " << num1 <<endl;
    cout << "*b value : " << *pointer << endl;

    cout << "a address : " << &num1 << endl;
    cout << "*b address : " << pointer << endl;

    *pointer = *pointer+1;
    cout << "now a value is : " << num1 << endl;

    return 0;
}