#include<stdio.h>

//����ü ������ �ּҰ� = ����ü ������ ù ��° ��� �ּҰ�

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
    struct person man = {"������" , "010-0000-0000",20};

    printf("%p %p \n", &pos, &pos.xpos);
    printf("%p %p \n", &man, man.name);




    return 0;
}