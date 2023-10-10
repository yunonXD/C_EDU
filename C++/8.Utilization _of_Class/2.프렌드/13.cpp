#include<iostream>
#include"13_Time.h"

using namespace std;

//friend
int main(int argc, char *atgv[]){
    Time t1(1,20);
    Time t2;
    Time t3;

    t2 = 3 *t1;
    //same thing >>t2 = operator *(3,t1);
    t2.show();

    t3 = t1 *4;
    t3.show();

    return 0;
}
