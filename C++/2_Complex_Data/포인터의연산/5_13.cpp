#include<iostream>

using namespace std;

struct MyStruct{
    char name[20];
    int age;
}B;

int main(int argc, char *atgv[]){

    //동적 구조체
    //temp *ps = new temp;

    MyStruct *temp = new MyStruct;
    cout << "input your name\n";
    cin >> temp->name;

    cout << "input your age\n";
    cin >>(*temp).age;

    cout << "name : "<< temp->name;
    cout << "age : " << temp->age;

    return 0;
}