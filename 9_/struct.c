#include<stdio.h>


struct GameInfo
{
    char *company;
    int year;
    int price;
    char *name;
};



int main(void){
    //ȸ�� ���� ���
    //���� �̸� : 
    //�߸ų⵵ 2023
    //���� 50
    //������ : ����

    //����ü
    struct GameInfo gameinfo1;

    gameinfo1.company = "���Ӥ���";
    gameinfo1.year = 2023;
    gameinfo1.price = 50;
    gameinfo1.name = "���ƾƾ�";


    //����ü ���
    printf("==���� ��� ���� ==\n");
    printf("==���Ӹ� : %s\n", gameinfo1.name);
    printf("==��ó⵵ : %d\n", gameinfo1.year);
    printf("==���� : %d\n", gameinfo1.price);
    printf("==ȸ�� : %s\n", gameinfo1.company);

    //����ü�� �迭ó�� �ʱ�ȭ
    struct GameInfo gameinfor2 =  {"�ʵ� ����" , 2023 , 100 , "��,�Ӿƾ�"};

    //����ü ���
    printf("==���� ��� ���� ==\n");
    printf("==���Ӹ� : %s\n", gameinfor2.name);
    printf("==��ó⵵ : %d\n", gameinfor2.year);
    printf("==���� : %d\n", gameinfor2.price);
    printf("==ȸ�� : %s\n", gameinfor2.company);


    //����ü �迭
    struct GameInfo gameArray[2] = {
        {"�ʳ�������" , 2023,100, "���Ӥ�����"},
        {"�ʳ�������2" , 2023,120, "���Ӥ���1��"}
    };

    //����ü ������
    struct GameInfo *gamePtr; //�̼Ǹ�
    gamePtr = &gameinfo1;
    // printf("\n\n==�̼Ǹ��� ���� ��� ���� ==\n");
    // printf("==���Ӹ� : %s\n", (*gamePtr).name);
    // printf("==��ó⵵ : %d\n", (*gamePtr).year);
    // printf("==���� : %d\n", (*gamePtr).price);
    // printf("==ȸ�� : %s\n", (*gamePtr).company);
    printf("\n\n==�̼Ǹ��� ���� ��� ���� ==\n");
    printf("==���Ӹ� : %s\n", gamePtr->name);
    printf("==��ó⵵ : %d\n", gamePtr->year);
    printf("==���� : %d\n", gamePtr->price);
    printf("==ȸ�� : %s\n", gamePtr->company);

    




    return 0;

}