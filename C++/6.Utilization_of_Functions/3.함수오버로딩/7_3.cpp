#include<iostream>
#include<cstring>

using namespace std;

int sum(int ,int);
float sum(float ,float); 

//함수 오버로딩
int main(int argc, char *atgv[]){

    cout << "input int 2 num\n";
    int a=0 , b=0;
    cin >> a >> b;
    cout << "int sum : " << sum(a,b)<< endl;
    
    cout << "input float 2 num\n";
    float c =0 , d =0;
    cin >> c >> d;
    cout << "float sum : " << sum(c,d)<< endl;
    
    return 0;
}

int sum(int a, int b){
    return a+b;
}

float sum(float a ,float b){
    return a + b;
}