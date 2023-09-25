#include<iostream>
#include<climits>

using namespace std;

int main(int argc ,char *argv[]){

    int n_INT =INT_MAX;
    short n_SHORT =SHRT_MAX;
    long n_LONG =LONG_MAX;
    long long n_LLONG =LLONG_MAX;

    cout << "int n_INT sizeof is : " << sizeof n_INT <<endl;
    cout << "short n_SHORT sizeof is : " << sizeof n_SHORT <<endl;
    cout << "long n_LONG is : " << sizeof n_LONG <<endl;
    cout << "long long n_LLONG is : " << sizeof n_LLONG <<endl;

    return 0;
}