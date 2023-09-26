#include<stdio.h>

int Hanoi(int num, char from , char by , char to){
    if(num == 1)    printf("원반 1을 %c 에서 %c 로 이동 \n",from, to);
    else{
        Hanoi(num-1 , from, to , by);
        printf("원반 %d을 %c 에서 %c 로 이동 \n" , num, from, to);
        Hanoi(num-1 , by, from, to);
    }
}

int main(int argc , char* argv[]){
    Hanoi(3,'A','B','C');

    return 0;
}


/*
하노이 타워
 > 제약사항
    - 원반은 한번에 하나씩 하나만 옮길 수 있다
    - 작은 원반위에 큰 원반은 올릴 수 없다.




*/