#include<iostream>
#include<cstring>

using namespace std;
void Hello(int n ,int n2);


int main(int argc, char *atgv[]){

    int times=0 , times2=0;
    cout << "input num : ";
    cin >> times;
    cin >> times2;
    Hello(times ,times2);

    return 0;
}

void Hello(int n ,int n2){
    for(int i =0; i <n; i++){
        cout << "Hello\n";
    }

    for(int i=0; i <n2; i++){
        cout << "Yeet\n";
    }
}