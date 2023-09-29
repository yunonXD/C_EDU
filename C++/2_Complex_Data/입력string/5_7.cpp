#include<iostream>
using namespace std;

int main(int argc, char *argv[]){

    char char1[20];
    char char2[20] ="jauar";
    string str1;
    string str2 = "panda";
    str1 = str2;            //string 은 배열과 다르게 이게 가능함

    cout << str1 << endl;
    cout << str1[0] << endl;

    return 0;
}