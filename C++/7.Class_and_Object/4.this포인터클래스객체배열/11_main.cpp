#include"11_Stock.h"

int main(int argc, char *argv[]){

    Stock s1("A" ,10 ,1000);
    Stock s2("B" ,20 ,1200);

    s1.show();
    s2.show();

    cout << "A and B more big size boi is \n";
    s1.topval(s2).show();

    return 0;   
}