#include<iostream>
#include<cstring>

using namespace std;

//class or typeName
template <class Any>
Any sum(Any ,Any);
template <class Any>
Any sum(int ,Any);

//템플릿(일반화)
int main(int argc, char *atgv[]){

    int a =3, b =4;
    //cout << sum(a,b)<<endl;   //오버로딩 중복 매칭이므로 페스

    float c= 3.14 , d= 1.592;
    cout << sum(c,d)<<endl;
    
    cout << sum(a,c) <<endl;

    return 0;
}

template <class Any>
Any sum(Any a , Any b){
    return a+b;
}

template <class Any>
Any sum(int a, Any b){
    return a+b;
}