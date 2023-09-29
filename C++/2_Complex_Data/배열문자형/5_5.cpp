#include<iostream>

using namespace std;

int main(int argc, char *argv[]){

    short month[] ={1,2,3};

    for(int i=0; i<sizeof(month)/sizeof(short); i++){
        cout <<month[i] <<endl;
    }

    char a[6] ={'H', 'e', 'l', 'l' ,'o' ,'\0'};
    char a1[6] ="Hello";
    cout << a << " " << a1 << endl;

    return 0;
}