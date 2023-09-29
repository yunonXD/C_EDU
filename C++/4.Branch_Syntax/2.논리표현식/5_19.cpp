#include<iostream>
#include<cstring>

using namespace std;


int main(int argc, char *atgv[]){

    //논리합  ||
    /*
    
    5 == 5 || 5 ==9 false
    5>3 || 5>10 true
    5>8 || 5<10 true
    5>9 || 5<2  false

    */

   //논리 곱 &&
   /*
   
   5 == 5 && 9 == 9 true
   5 == 5 && 9!=9   false
   10 < 2 && 10 > 2 false
   
   */

  //논리부정 !
  /*
  
  != >> false
  == >> true

  */


    cout << "input your age :";
    int age;
    cin >> age;

    if( age <0 || age> 100){
        cout << "pls input collect age\n";
    }
    else if( 20 <= age && age <=29){
        cout << "age >> 20 \n";
    }
    else
        cout << "wut ever\n";

    return 0;
}