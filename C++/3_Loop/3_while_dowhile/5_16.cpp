#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char *atgv[]){

    string str ="Yeet";
    int i =0;
    while(str[i] != '\0'){
        cout << str[i] << endl;
        i++;
    }

    bool a =true;
    bool b =false;

    //while(a){
        //cout << "asd" << endl;
    //}

    do{
        cout << "do while\n";

    }while( b);

    return 0;
}