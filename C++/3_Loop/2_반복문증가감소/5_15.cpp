#include<iostream>
#include<cstring>

using namespace std;


int main(int argc, char *atgv[]){

    char a[10] ={'a','b','c','d','e'};

    for(int i =0; i <strlen(a); i++){
        cout << a[i] <<endl;
    }

    int num1 =10;
    int num2 =10;

    cout << num1++ << endl;
    cout << ++num2 << endl;

    cout << num1 << " " << num2 << endl;

    return 0;
}