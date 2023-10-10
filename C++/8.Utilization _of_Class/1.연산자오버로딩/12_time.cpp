#include"12_time.h"

Time::Time(){
    hours = mins = 0;
}

Time::Time(int h ,int m){
    hours = h;
    mins = m;
}

void Time::addHour(int h){
    hours +=h;
}

void Time::addMins(int m){
    mins +=m;
    hours += mins/60;
    mins %= 60;
}

Time Time::sum(Time& t){
    Time sum;
    sum.mins = mins + t.mins;
    sum.hours = hours + t.hours;
    sum.hours += sum.mins/60;
    sum.mins %= 60;
    return sum;
}

Time Time::operator+(Time& t){
    Time sum;
    sum.mins = mins + t.mins;
    sum.hours = hours + t.hours;
    sum.hours += sum.mins/60;
    sum.mins %= 60;
    return sum;
}

void Time::show(){
    cout << "hours : " << hours << endl;
    cout << "Mins : " << mins << endl;
}

Time::~Time(){
}
