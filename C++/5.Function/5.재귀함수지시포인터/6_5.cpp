#include<iostream>
#include<cstring>

using namespace std;

int func(int);

int main(int argc, char *atgv[]){

    int (*pf)(int);
    pf = func;

    cout << (*pf)(3) << endl;

    return 0;
}

int func(int n){
    return n+1;
}