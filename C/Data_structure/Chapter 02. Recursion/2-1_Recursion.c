#include<stdio.h>

//재귀함수 Base
void recursive(int num){

    if(num == 0){
        return;
    }
    printf("recursive test : %d \n", num);
    recursive(num-1);
}
//n 의 팩토리얼. n! = n x (n-1) x (n -2) x (n -3) x ... (n-1)!
int Factorial(int num){
    if(num == 0 )
        return 1;
    else{  
        int num2 = num*Factorial(num-1);
        printf("num :%d \n" , num2);
        return num2;
    }
}


int main(int argc, char **argv[]){
    recursive(5);

    printf("factorial test : %d \n", Factorial(5));


    return 0;
}