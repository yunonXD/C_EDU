#include<stdio.h>

int main(void){

    //�迭
    // int subway_1 = 30; 
    // int subway_2 = 40;
    // int subway_3 = 50;

    // printf("����ö 1ȣ���� %d ���� Ÿ���ֽ��ϴ�. \n" , subway_1);
    // printf("����ö 2ȣ���� %d ���� Ÿ���ֽ��ϴ�. \n" , subway_2);
    // printf("����ö 3ȣ���� %d ���� Ÿ���ֽ��ϴ�. \n" , subway_3);

    //���� ���� ������ �Բ�, ���ÿ� ����
    // int subway_array[3];
    // subway_array[0] = 30;
    // subway_array[1] = 40;
    // subway_array[2] = 50;

    // for( int i =0; i<3; i++){
    //     printf("����ö %dȣ���� %d ���� Ÿ���ֽ��ϴ�. \n", i + 1, subway_array[i]);
    // }

    //�� ���� ���
    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // for (int i =0; i<10; i++){
    //     printf("%d\n", arr[i]);
    // }

    // int arr[10];
    // for (int i =0; i<10; i++){
    //     printf("%d\n", arr[i]);
    // }

    //�迭ũ����׻����μ���(����)
    // int size = 10;
    // int arr[size];

    // int arr[10] = {1,2};        //���� ������ 0���� �ʱ�ȭ
    // for(int i = 0; i<10; i++){
    //     printf("%d\n", arr[i]);
    // }

    //int arr[] = {1,2}; // == arr[2]

    // float arr_f[5] = {1.0f, 2.0f, 3.0f};
    // for(int i = 0; i<5; i++){
    //      printf("%.2f\n", arr_f[i]);
    //  }

    //���� vs ���ڿ�
    // char c = 'A';
    // printf("%c\n", c);

    //���ڿ� ������ ���� �ǹ��ϴ� NULL ���ڰ� ���� '\0' �� ������
    // char str[7] = "coding"; // [c][o][d][i][n][g] + [\0] << �ʿ�
    // printf("%s\n",str);


    // char str[] = "coding";
    // // printf("%s\n", str);
    // // printf("%d\n", sizeof(str));

    // for(int i = 0; i< sizeof(str); i++){
    //     printf("%c\n", str[i]);
    // }

    // char kor[] = "���̿���";
    // printf("%s\n",  kor);
    // printf("%d\n", sizeof(kor));
    //����< �ѱ��� 1byte
    //�ѱ� < �ѱ��� 2byte
    //charũ�� : 1byte

    // char c_array[7] = {'c', 'o' ,'d','i','n','g','\0'};
    // printf("%s\n",c_array);

    //�̷��� null ���ڰ� �˾Ƽ� ��
    //char c_array[10] = {'c', 'o' ,'d','i','n','g'};
    // printf("%s\n", c_array);
    // for(int i =0; i < sizeof(c_array); i++){
    //     printf("%c\n", c_array[i]);
    // }

    //���ڸ� ASCII �ڵ�� ��ȯ
    //99 111 100 105 110 103
    // for(int i =0; i < sizeof(c_array); i++){
    //     printf("%d\n", c_array[i]);
    // }

    //���ڿ� �Է¹ޱ� : ������ ���� ����
    // char name[256];
    // printf("�̸��� �Է��ϼ��� : ");
    // scanf("%s" , name , sizeof(name));
    // printf("%s\n", name);

    //ASCII �ڵ�? : ANSI(�̱�ǥ����ȸ) ���� ������ ǥ�� �ڵ� ü��
    //7bit, �� 128���� �ڵ� (0~127)
    // a : 97 (���� a �� �ƽ�Ű�ڵ� ������)
    // A : 65
    // 0 : 48

    for (int i = 0; i< 128; i++){
        printf("�ƽ�Ű�ڵ� ���� %d : %c\n" , i,i);
    }



    return 0;
}