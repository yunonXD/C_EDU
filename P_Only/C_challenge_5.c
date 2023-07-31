#include<stdio.h>

int main(void){

    //숫자 n 을 입력받는다
    // 2^k <= n 의 성립 조건을 만족시키는 k 의 최댓값을 출력한다
    // 예를 들어서 256 을 입력했으면 k 는 8 이 나와야한다.


    printf(" 2 의 배수로 숫자를 입력해주세요. ");
    int num ,k;
    scanf("%d", &num);

    for (int i =1 ; i< num; i++){

        k++;
        i = i*2;

        printf("%d %d\n" , k , i);
    }
    printf("\n=============\n");
    printf("%d" , k);



    return 0;
}