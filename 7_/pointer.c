#include<stdio.h>

int main(void){

    //������

    //[ö��] 101ȣ  -> �޸� ���� �ּ�
    //[����] 201ȣ
    //[�μ�] 301ȣ
    //�� �� �տ� ��ȣ�� �ɷ�����

    // int cheolsu = 1;    //��ȣ
    // int yeonghui = 2;
    // int minsu = 3;

    // printf("ö���� �ּ� : %d \n��ȣ : %d\n" , &cheolsu , cheolsu);
    // printf("����� �ּ� : %d \n��ȣ : %d\n" , &yeonghui , yeonghui);
    // printf("�μ��� �ּ� : %d \n��ȣ : %d\n" , &minsu , minsu);
    // //& << �ּ�


    // //�̼Ǹ�!

    // //ù ��° �̼� : ����Ʈ �� ���� �湮�Ͽ� ���� ���� ��ȣ�� Ȯ�� 123
    // int *missionMan; //������ ����
    // missionMan = &cheolsu;      //�̼Ǹ��� ö���� �ּҸ� ������
    // printf("�̼Ǹ��� �湮�ϴ� �ּ� : %d \n��ȣ %d\n" , missionMan,*missionMan);

    // missionMan = &yeonghui;
    // printf("�̼Ǹ��� �湮�ϴ� �ּ� : %d \n��ȣ %d\n" , missionMan,*missionMan);

    // missionMan = &minsu;
    // printf("�̼Ǹ��� �湮�ϴ� �ּ� : %d \n��ȣ %d\n" , missionMan,*missionMan);

    // //�ι�° �̼� �� ��ȣ�� 3�� ���϶�
    // missionMan = &cheolsu;
    // *missionMan = *missionMan *3;
    // printf("=�̼Ǹ��� ��ȣ�� �ٲ� �� : %d \n��ȣ %d\n" , missionMan,*missionMan);

    // missionMan = &yeonghui;
    // *missionMan = *missionMan *3;
    // printf("=�̼Ǹ��� ��ȣ�� �ٲ� �� : %d \n��ȣ %d\n" , missionMan,*missionMan);

    // missionMan = &minsu;
    // *missionMan = *missionMan *3;
    // printf("=�̼Ǹ��� ��ȣ�� �ٲ� �� : %d \n��ȣ %d\n" , missionMan,*missionMan);


    // //������
    // //�̼Ǹ��� �ٲ� ��ȣ���� 2�� ���̳��ض�

    // int *spy = missionMan;
    // printf(" \n.... ������ �̼� ������ ... \n\n");

    // spy = &cheolsu;
    // *spy = *spy -2;     // ö�� = ö�� -2
    // printf("������ �湮�ϴ� �� �ּ� : %d \n ��ȣ : %d\n" , spy,*spy);

    // spy = &yeonghui;
    // *spy = *spy -2;
    // printf("������ �湮�ϴ� �� �ּ� : %d \n ��ȣ : %d\n" , spy,*spy);

    // spy = &minsu;
    // *spy = *spy -2;
    // printf("������ �湮�ϴ� �� �ּ� : %d \n ��ȣ : %d\n" , spy,*spy);


    // printf("\n\n .............. �ٲ� �� Ȯ�� ................\n\n");
    
    // printf("ö���� �ּ� : %d \n��ȣ : %d\n" , &cheolsu , cheolsu);
    // printf("����� �ּ� : %d \n��ȣ : %d\n" , &yeonghui , yeonghui);
    // printf("�μ��� �ּ� : %d \n��ȣ : %d\n" , &minsu , minsu);

    // //�� �����ʹ� ������ �ּҰ��� ������ �����Ͱ� ������ ���� ���� �ٲ�.
    // //����� �̼Ǹ��� �ּҵ� �ִ�.

    // printf("�̼Ǹ��� �ּ� : %d\n" ,&missionMan);
    // printf("�������� �ּ� : %d\n" ,&spy);

    return 0;
}