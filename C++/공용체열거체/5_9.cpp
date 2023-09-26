#include<iostream>

using namespace std;

int main(int argc, char *atgv[]){

    //공용체(union)
    //서로 다른 데이터형을 한 번에 한 가지만 보관 (메모리절약)

    union MyUnion
    {
        int intVal;
        long longVal;
        float floatVal;
    };

    MyUnion test;
    test.intVal = 3;
    cout << test.intVal << endl;

    cout << "-----" << endl;

    test.longVal = 33;
    cout << test.intVal << endl;
    cout << test.longVal << endl;

    cout << "-----" << endl;

    test.floatVal = 3.3;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    cout << test.floatVal << endl;
    
    cout << "-----" << endl;

    //열거체(enum)
    //기호 상수를 만드는 것에 대한 방법중 하나
    //각각의 데이터를 차례로 0부터 n 까지 기호 상수로 만들어냄

    enum spectrum { red=0, orange=1, yellow, green, blue, violet, indigo, ultraviolet};

    spectrum a = orange;
    cout << a << endl;

    int b = blue;

    cout << b + 3 << endl;
    

    return 0;
}