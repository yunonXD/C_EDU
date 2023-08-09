#include<stdio.h>

int main(void){

    int iarr[3];
    double darr[7];

    printf("%p\n" , iarr+1);            //sizeof(int)  크기(4) 증가
    printf("%p \n" , iarr+1);           //sizeof(double) 크기(8) 증가

    printf("\n\n\n");

    int arr1[3][2];
    int arr2[2][3];

    printf("arr1: %p \n" , arr1);
    printf("arr1 + 1: %p \n" , arr1 + 1);       // 4 x2 int 형 가로 2씩
    printf("arr1 + 2: %p \n\n" , arr1 + 2);     

    printf("arr2 : %p \n" , arr2);              // 4 x3 int 형 가로 3씩
    printf("arr2 +1 : %p \n", arr2+1 );

    //가로 길이가 포인터 형에 영향을 끼친다. 즉 
    // int arr1[4][2] 와 int arr2[6][2] 는 같은 포인터 형 (int 형 , 가로 길이 2)

    return 0;
}