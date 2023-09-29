#include<iostream>
#include<cstring>

using namespace std;

#define SIZE 20
int main(int argc, char *atgv[]){

    char animal[SIZE];
    char *ps;

    cout << "input the animal name : \n";
    cin >>animal;

    ps = new char[strlen(animal) +1];
    strcpy(ps,animal);

    cout << "입력받은 동물의 이름 복사 완료 "<<endl;
    cout << "입력받은 동물 이름은 " << animal << "이며 주소값은 "<<(int*)animal << "입니다." <<endl;
    cout << "복사된 동물 이름은 " << ps << "이며 주소값은 " << (int*)ps << "입니다"<<endl;

    return 0;
}