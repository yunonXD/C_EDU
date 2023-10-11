#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

int main(int argc, char *argv[]){

    srand(time(NULL));
    int findNumber = rand() % 100;

    for(int i=0; i <100; i++){
        if(i ==findNumber){
            cout << i << "회 진행";
            break;
        }
    }
}