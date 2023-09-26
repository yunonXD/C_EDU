#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char *argv[]){

    const int size =15;
    char name1[size];
    char name2[size] = "YEET";

    cout << "input your " << name2;
    cout << ". xd \n";
    //cin >> name1;
    cin.getline(name1, size);       //띄어쓰기 인풋받음
    //cin.get(name1, size);         //띄어쓰기 인풋 받음

    cout << "input value :" << name1 << "\n";
    cout << strlen(name1) << " is your input len. \n";
    cout << sizeof(name1) << " is your bit size. \n";
    cout << sizeof(name1)/sizeof(char) << " is your arr size. \n";


    return 0;
}