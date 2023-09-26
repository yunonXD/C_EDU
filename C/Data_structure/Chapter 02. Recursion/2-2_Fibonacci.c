#include<stdio.h>

int Fibo(int num){

    switch (num){
    case 1:
        return 0;
    case 2:
        return 1; 
    default:
        return Fibo(num -1) + Fibo(num-2);
    }
}

int main(int argc, char **argv[]){
    int count = 15;

    for(int i = 1; i<count; i++)   printf("%d " , Fibo(i) );
    
    return 0;
}



/*
피보나치 수열
0 1 1 2 3 5 8 13 21 34 55....

수열 n 번째의 값 = 수열 n-1 + n-2

fib(n)
    - n=1 > 0
    - n=2 > 1
    - fib(n-1) + fib(n-2)



*/