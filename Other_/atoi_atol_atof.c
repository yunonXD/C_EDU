#include<stdio.h>
#include<stdlib.h>

//int atoi          //���ڿ� ������ int �� ��ȯ
//long atol         //long ���� ��ȯ
//double atof       //double �� ��ȯ

int main(int argc, char *argv[]){

    char str[20];
    printf("���� �Է� :");
    scanf("%s",str);
    printf("%d \n",atoi(str));

    printf("�Ǽ� �Է�:");
    scanf("%d",str);
    printf("%g \n",atof(str));
    


    return 0;
}