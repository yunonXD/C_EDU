#include<stdio.h>

//공용체  Union Type
// 별도의 메모리 공간에 할당이 아닌
// 메모리 공간을 같이 "공유" 해서 사용한다
//그래서 주소값 찍어보면 똑같이 나옴
// 메모리 공간은 가장 큰 데이터를 기준으로 할당. int num int num2 double nu3 면 8bite 가 할당
//데이터를 덮어쓰기를 함. 앞 저장 값을 지워버림


typedef struct sbox{
    int mem1;
    int mem2;
    double mem3;
} Sbox;

typedef union ubox{
    int mem1;
    int mem2;
    double mem3;
} Ubox;

int main(int argc, char *argv[]){

    Sbox sbx;
    Ubox ubx;

    //00000A62E9FFD00 000000A62E9FFD04 000000A62E9FFD08 
    printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);

    //000000A62E9FFCF8 000000A62E9FFCF8 000000A62E9FFCF8 
    printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);


    //16 8 
    printf("%d %d \n", sizeof(Sbox) , sizeof(Ubox));

    return 0;
}