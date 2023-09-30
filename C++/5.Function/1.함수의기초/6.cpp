#include<iostream>
#include<cstring>

using namespace std;
const float PIE = 3.15;


void cheers(int n){
    for(int i=0; i<n; i++)
        cout << "yeet"<<endl;
}

float circle(int x){
    return x*x*PIE;
}


int main(int argc, char *atgv[]){

    int a=0 , b=0;
    cout << "input num" << endl;
    cin >> a;
    cheers(a);

    cout << "input radius : " <<endl;
    cin >> b;
    cout << "circle area is : " << circle(b) << endl;

    return 0;
}