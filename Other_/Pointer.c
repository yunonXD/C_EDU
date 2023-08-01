#include<stdio.h>

int main(void){

    //Pointer 변수 <- 주소값 저장 (정수) 그럼 이거 일반 int 형 변수에 저장 할 수 있는거 아냐? 아냐!!

    //int num = 10;
    //int *pur = &num;    //짠! 포인터 변수 생성!

    //주소값은 첫번째 바이트 값으로 나간다. 32 비트 -> 4 64비트 -> 8


   // double num1 = 3.15f;
   // double *ptr2 = &num1;       //딴! double 형 num1 의 주소를 가리키는 포인터 생성!

    //포인터 변수의 크기는 항상 같다. sizeof 로 확인해봐!

    double num1 = 3.15;
    int *ptr = &num1;

    printf("%d\n",num1);

    *ptr = 30;
    printf("%d\n",num1);
    








    return 0;
}