#include<iostream>

using namespace std;

int main(int argc, char *argv[]){

    const float PI = 3.141592;

    int r =3;
    cout << r * r* PI<<endl;

    int Test1 = 3.141592;
    cout << Test1 << endl;

    char ch = 'M';
    cout << static_cast<int>(ch) << " " << int(ch) << endl;

    //static_cast<typeName>

    return 0;
}