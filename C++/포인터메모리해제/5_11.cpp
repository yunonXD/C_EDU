#include<iostream>

using namespace std;

int main(int argc, char *atgv[]){

    int a=10;
    int *b = &a;

    int  *pointer = new int;    //데이터의 객체를 향하고 있다 (메모리 제어권을 사용자에게)

    delete pointer;             //malloc 한 힙메모리를 free


    ////
    double *p3 =new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";

    p3 =p3 +1;

    cout << "Now p3[0] is " << p3[0] << " end ";
    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3-1;
    delete[] p3;

    return 0;
}