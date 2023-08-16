#include<stdio.h>

//구조체 변수의 주소값 = 구조체 변수의 첫 번째 멤버 주소값

struct point {
    int xpos;
    int ypos;
};

struct person{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(int argc, char *argv[]){

    struct point pos = {10,20};
    struct person man = {"가나다" , "010-0000-0000",20};

    printf("%p %p \n", &pos, &pos.xpos);
    printf("%p %p \n", &man, man.name);




    return 0;
}