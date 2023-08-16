#include<stdio.h>

struct point
{
    int xpos;
    int ypos;
};

typedef struct point Point;

typedef struct person
{
    char name[20];
    char phoneNum[20];
    int age;
}Person;


typedef struct  //이렇게 이름 안써도 괜찮음
{
    char name1[20];
    char phoneNum1[20];
    int age1;
}Person1;


int main(int argc, char *argv[]){

    Point pos = {10,20};
    Person man = {"가나다" , "010-0000-0000" , 20};

    printf("%d %d \n" ,pos.xpos, pos.ypos );
    printf("%s %s %d \n",man.name,man.phoneNum,man.age);

    return 0;
}