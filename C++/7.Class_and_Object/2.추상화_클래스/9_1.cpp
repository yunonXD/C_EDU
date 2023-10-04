#include"9_2.h"

void Stock::acquire(string co ,int n ,float pr){

    name =co;
    shares =n;
    shares_val =pr;
    set_total();
}

void Stock::buy(int n ,float pr){
    shares +=n;
    shares_val=pr;
    set_total();
}

void Stock::sell(int n ,float pr){
    shares -=n;
    shares_val=pr;
    set_total();
}

void Stock::update(float pr){
    shares_val=pr;
    set_total();
}

void Stock::show(){
    cout << "company name : " << name << endl;
    cout << "stock num : " << shares << endl;
    cout << "stock : " << shares_val << endl;
    cout << "total stock value : " << total_val << endl;
}


Stock::Stock(){

}
Stock::~Stock(){

}

//추상화 클래스(선언 정의)
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

