#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){

    // int age = 15;
    // //if (���� ){} else {����}
    // if (age >= 20){
    //     printf("adult");
    // }
    // else{
    //     printf("students");
    // }


    //break / continue
    //1 �� ~ 30�� , 1��~5�� ������ǥ
    // for ( int i = 1; i<=30; i++){

    //     if( i >= 6 ){
    //         printf("�������� ��������");
    //         break;       //�ݺ��� ����
            
    //     }
    //     printf("%d �� �л� ��ǥ �غ�\n" , i);

    // }

    //1�� ���� 30������ �ִ� ��. 7���� �Ἦ�� 7�� �����ϰ� 6������ 10������ ������ǥ ��

    // for(int i =1; i<=30; i++){

    //     if (i >= 6 && i <=10){

    //         if(i == 7){
    //             printf("%d �� �л��� �Ἦ \n" , i);
    //             continue;       //���� ������ �������� ���� �� ���⼱ i++ �� �Ѿư�
    //         }
    //         printf("%d �� �л��� ���� ��ǥ �غ�\n" , i);
    //     }
    // }


    //&& ||
    // int a = 10;
    // int b = 10;
    // int c = 12;
    // int d = 12;

    // if ( a == b && c == d){
    //     printf(" a and b is equal , c and d is also equal");
    // }
    // else {
    //     printf("diff value.");
    // }



//����0����1��2
    

    // srand(time(NULL));
    // int i = rand() %3; //0~2

    // if( i == 0){
    //     printf("����\n");
    // }
    // else if( i == 1){
    //     printf("����\n");
    // }
    // else if( i == 2){
    //     printf("��\n");
    // }
    // else{
    //     printf("�˼�����");
    // }

    //����ġ
    srand(time(NULL));
    int i = rand() %3;
    switch(i){
        case 0: printf("0����\n"); break;

        case 1: printf("1����\n"); break;

        case 2: printf("2��\n"); break;

        default:    printf("����?\n"); break;

    }




    return 0;
}