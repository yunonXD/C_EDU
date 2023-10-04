#include"9_2.h"

int main(int argc, char *atgv[]){

    Stock temp;
    temp.acquire("Yeet" , 100 , 1000);
    temp.show();
    temp.buy(10,1200);
    temp.show();
    temp.sell(5,800);
    temp.show();

    return 0;
}
