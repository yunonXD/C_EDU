#include<stdio.h>

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
    int a = 10;
    int b = 10;
    int c = 12;
    int d = 12;

    if ( a == b && c == d){
        printf(" a and b is equal , c and d is also equal");
    }
    else {
        printf("diff value.");
    }








    return 0;
}