#include<iostream>
#include<cstring>

using namespace std;

void print(char , int);
void print(int , int);
void print(char);

//함수 오버로딩
int main(int argc, char *atgv[]){

    print('a' , 3);
    print(3,3);
    print('b');

    

    return 0;
}