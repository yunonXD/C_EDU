#include<stdio.h>

//두 정수를 입력받아 구구단을 출력,
//단 입력 된 값은 순서에 상관없이 작은 수부터 출력


int Calculater(int num);

int main(void){
    printf("==두 정수를 입력해주세요 :");
    int num1 = 0 , num2 = 0;
    scanf("%d %d" , &num1 , &num2);

    if (num1 > num2){
        Calculater(num2);
        Calculater(num1); 
    }
    else{
        Calculater(num1);
        Calculater(num2);
    }

    return 0;
}


int Calculater(int num){
    for( int i =1; i< 10; i++){
        printf("%d x %d = %d\n" , num, i, num*i);
    }
}