#include<stdio.h>
#include<stdlib.h>

//calloc
//void *calloc(size_t elt_count, size_t elt_size);
//elt_count X elt_size 크기의 바이트를 동적할당
// elt_size 크기의 블록을 elt_count 수 만큼 동적할당
//calloc (갯수정보 , 크기) ex.calloc(3, 4) >> 4바이트짜리 3개 할당
//그리고 모든 비트를 초기화 (0으로)



//realloc
//void *realloc(void* ptr, size_t size);
//ptr 이 가리키는 힙의 메모리 공간을 size 만큼 늘리거나 줄임

// int * ptr = (int*)malloc(sizeof(int)*3); 
// ... 만약 이 사이에 동적할당이 있었다면 아래 *5는 과연 정상적으로 늘려질까?
// arr = (int*)realloc(tpr, sizeof(int)*5);
// 메모리 공간이 부족하면 복사과정이 추가 (앞에 붙음)
// 이게 뭐가 문제냐고? 둘 의 주소값이 다름 (기존 메모리 공간은 지워짐) free는 한번만.


int main(int argc, char *argv[]){


    return 0;
}