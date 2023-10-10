#ifndef __TIME_H__
#define __TIME_H__
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
        void show();
        ~Time();
};

#endif