#include<iostream>
#include<cstring>

using namespace std;

void countDown(int);

int main(int argc, char *atgv[]){

    countDown(5);    

    return 0;
}

void countDown(int n){

    cout << "Counting  ... " << n << endl;

    if( n >0){
        countDown(n-1);
    }
    cout << n << " recursive" << endl;

}