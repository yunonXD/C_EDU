#include<stdio.h>

int main(void){

    //1 이상 100 미만의 정수 중에 7의 배수와 9의 배수를 출력하는 프로그램
    // 단 7 과 9동시 배수인것은 한번만 출력 63

    for(int j = 7; j <=9; j++){
        for(int i =1; i<=9; i++){

            if( j ==8 )
                continue;

            if(j * i == 63)
                continue;

            printf("%d * %d = %d\n" ,j, i, j*i);

        }
    }
    return 0;
}