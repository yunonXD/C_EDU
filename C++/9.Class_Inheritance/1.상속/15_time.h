#ifndef __TIME_H4__
#define __TIME_H4__
#include<iostream>
using namespace std;

class Time{
    private:
        int hours;
        int mins;

    public:
        Time();
        Time(int ,int);
        void addHour(int);
        void addMins(int);
        Time sum(Time&);
        Time operator+(Time&);
        Time operator*(int);
        void show();
        friend Time operator*(int n,Time &t){
            return t *n;
        }
        ~Time();

        friend ostream &operator<<(ostream& ,Time&);
};

class NewTime : public Time{
    private:
        int day;
    public:
        NewTime();
        NewTime(int ,int ,int);
        void print();
};

#endif