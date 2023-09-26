#include<stdio.h>

//malloc
//void *malloc(size_t size);    힙 영역으로의 메모리 공간 할등
//void free(void *ptr);         힙 영역에 할당된 메모리 공간 해제

//malloc 함수는 성공할 시 메모리 주소값을 return, 실패할 시 NULL return

//==running time==
//동적 할당 : 컴파일 시 할당에 필요한 메모리 공간이 계산되지 않고 실행 시 필요한 메모리 공간이 계산

int main(int argc, char*argv[]){

    void *ptr1 = malloc(4);
    void *ptr2 = malloc(12);

    void *ptr3 = malloc(sizeof(int));
    void *ptr4 = malloc(sizeof(double));
    void *ptr5 = malloc(sizeof(int)*7);     //array
    void *ptr6 = malloc(sizeof(double)*6);  //array


    int *ptr7 = (int*)malloc(sizeof(int));  //보통 이렇게 씀
    double *ptr8 = (double*)malloc(sizeof(double));



    free(ptr1);
    free(ptr2);
    //...
    
    
    

    return 0;
}