#include"11_Stock.h"

int main(int argc, char *argv[]){

    Stock s[4] = {
        Stock("A" ,10 ,1000),
        Stock("B" ,20 ,1200),
        Stock("C" ,30 ,1300),
        Stock("D" ,40 ,1400),
    };

    Stock *first = &s[0];
    for (int i=1; i<sizeof(s)/sizeof(Stock); i++)
        first = &first->topval(s[i]);

    first->show();
    return 0;   
}