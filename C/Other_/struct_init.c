#include<stdio.h>



struct point {
    int xpos;
    int ypos;
};

struct person
{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(int argc, char *argv[]){

    struct point pos = {10,20};
    struct person man = {"°¡³ª´Ù", "010-2222-2222" , 22};
    printf("%d %d \n", pos.xpos,pos.ypos);
    printf("%s %s %d\n", man.name, man.phoneNum, man.age);



    return 0;
}