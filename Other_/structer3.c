#include<stdio.h>
#include<string.h>

struct person{

    char name[20];
    char phoneNum[20];
    int age;

};


int main(int argc, char *argv[]){

    struct person man1, man2;
    strcpy(man1.name , "ȫ�浿");
    strcpy(man1.phoneNum , "010-1234-1234");
    man1.age =  10;

    printf("�̸� �Է� : "); scanf("%s",man2.name);
    printf("��ȣ �Է� : "); scanf("%s",man2.phoneNum);
    printf("���� �Է� : "); scanf("%d",&(man2.age));

    printf("�̸�: %s\n" , man1.name);
    printf("��ȣ: %s\n" , man1.phoneNum);
    printf("����: %d\n" , man1.age);

    printf("�̸�: %s\n" , man2.name);
    printf("��ȣ: %s\n" , man2.phoneNum);
    printf("����: %d\n" , man2.age);




    return 0;
}