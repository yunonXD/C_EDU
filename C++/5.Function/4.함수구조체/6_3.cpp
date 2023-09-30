#include<iostream>
#include<cstring>

using namespace std;

struct Time{
    int hours;
    int mins;
}time;

const int minsPerHr = 60;

Time sum(Time* ,Time*);
void showTime(Time);

int main(int argc, char *atgv[]){

    Time day1 = {5, 45};
    Time day2 = {4,55};

    Time total = sum(&day1, &day2);

    cout << "2 days running time : "; showTime(total);

    return 0;
}

Time sum(Time *t1, Time *t2){
    Time total;

    total.mins = (t1->mins + t2->mins) % minsPerHr;
    total.hours = (t1->hours + t2->hours + t1->mins + t2->mins) / minsPerHr;

    return total;
}

void showTime(Time t1){
    cout << t1.hours << "hour, " << t1.mins << "mins." << endl;
}