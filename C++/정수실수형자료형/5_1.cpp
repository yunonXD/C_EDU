#include<iostream>
#include<climits>

using namespace std;

int main(int argc ,char *argv[]){

    int n_INT =INT_MAX;
    short n_SHORT =SHRT_MAX;
    long n_LONG =LONG_MAX;
    long long n_LLONG =LLONG_MAX;

    cout << "int n_INT sizeof is : " << sizeof n_INT <<endl;
    cout << "MAX VALUE :"<< n_INT << "\n" <<endl;

    cout << "short n_SHORT sizeof is : " << sizeof n_SHORT <<endl;
    cout << "MAX VALUE :"<< n_SHORT <<"\n" <<endl;

    cout << "long n_LONG is : " << sizeof n_LONG <<endl;
    cout << "MAX VALUE :"<< n_LONG <<"\n" <<endl;

    cout << "long long n_LLONG is : " << sizeof n_LLONG <<endl;
    cout << "MAX VALUE :"<< n_LLONG <<"\n" <<endl;

    unsigned short b =-2;
    cout << b << endl;
    short b2 =-2;
    cout << b2 << endl;

    cout << "\n" << endl;

    float A1 = 3.14;
    int B1 = 3.14;
    cout << A1 << "  " << B1 << endl;


    return 0;
}