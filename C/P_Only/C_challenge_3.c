#include<stdio.h>


int GDC(int a ,int b){
    int temp , n;

    if(a < b){
        n = a;
        a =b;
        b = n; 
    }

    while(b != 0){
        int temp = a & b;
        a = b;
        b = temp;
    }
    return a;
}


int main(void){

    //두 개의 정수르 입력받아 최대 공약수를 구하는 프로그램을 작성
    // 입력 6, 9 => 3
    //유클리드 활용
    //GCD (1112,695) = GDC (695, 1112 MOD 695 = 417)
    //               = GDC(695,417)
    //               = GDC(417 , 695 MOD 417 = 278)
    //               = GDC(417, 278)
    //               = GDC(278 , 419 MOD 278 = 139)
    //               = GDC(278, 139)
    //               = GDC(139 , 278 MOD 139 = 0)
    //               = GDC(139, 0)

    printf("두 정수를 입력하세요 :");
    int num1, num2;
    scanf("%d %d" , &num1, &num2);
    int result = GDC(num1,num2);

    printf("GDC : %d\n" , result);

    return 0;
}

