#include<iostream>
#include<cstring>

using namespace std;
    //인라인
inline float square(float x) {return x * x;}


int main(int argc, char *atgv[]){

    int a =5;
    float b = square(a);
    cout << b << endl;

    return 0;
}