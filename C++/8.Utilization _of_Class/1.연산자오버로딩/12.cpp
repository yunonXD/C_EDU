#include"12_time.h"

int main(int argc, char *atgv[]){

    Time day1(1,40);
    Time day2(2,30);

    day1.show();
    day2.show();

    Time total;
    total = day1.sum(day2);
    total.show();

    Time OperatorTest1;
    OperatorTest1 = day1.operator+(day2);
    total.show();

    Time OperatorTest2;
    OperatorTest2 = day1 + day2;
    total.show();
    
    return 0;
}