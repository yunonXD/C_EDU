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
    // srand(time(NULL));
    // int i = rand() %3;
    // switch(i){
    //     case 0: printf("0����\n"); break;

    //     case 1: printf("1����\n"); break;

    //     case 2: printf("2��\n"); break;

    //     default:    printf("����?\n"); break;

    // }

    // int age = 14;

    // switch (age)
    // {
    // case 8:
    // case 9:
    // case 10:
    // case 11:
    // case 12:
    // case 13: printf("�ʵ��л��Դϴ�"); break;
    // case 14:
    // case 15:
    // case 16: printf("���л��Դϴ�"); break;
    // case 17:
    // case 18:
    // case 19:printf("����л��Դϴ�"); break;
    
    // default:printf("�л��� �ƴմϴ�"); break;
    //     break;
    // }


//Up and Down

    srand(time(NULL));
    int num = rand() % 100 +1 ;

    printf("���� : %d\n" , num);

    int answer = 0;
    int chance = 5;

    while(chance > 0){
        printf("���� ��ȸ :%d\n" , chance--);

        printf("���ڸ� Ȯ�� : (1~100) ");

        scanf("%d" , &answer);

        if( answer > num){
            printf(" DOWN \n\n");
        }
        else if (answer < num){
            printf(" UP \n\n");
        }
        else if(answer == num){
            printf(" u win ;)");
            break;
        }else{
            printf("error");
            break;
        }

        if( chance == 0){
            printf(" chance is 0. u loss");
            break;
        }


    }

    return 0;
}