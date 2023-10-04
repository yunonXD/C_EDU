#ifndef __SOTCK_CHECK_H__

#include<iostream>
#include<cstring>

using namespace std;

class Stock{
    private:
        string name;
        int shares;
        float shares_val;
        double total_val;
        void set_total() {total_val = shares * shares_val;}

    public:
        void acquire(string co,int,float);
        void buy(int,float);
        void sell(int,float);
        void update(float);
        void show();
        Stock();
        ~Stock();
};

#endif