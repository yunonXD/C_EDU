#include<stdio.h>
#include<string.h>
//strlen ���ڿ��� ���̸� ��ȯ�ϴ� �Լ�

void RemoveBSN(char str[]){     //������ NULL���� ���ű�
    int len = strlen(str);      //���� Ȯ��
    str[len-1] = 0;             //���Ͱ� ���� ��ġ�� �ƽ�Ű�ڵ尪 0�� ���� 
}


int main(int argc, char *argv[]){

    char str[100];
    printf("���ڿ� �Է� : ");
    fgets(str, sizeof(str), stdin);
    printf("���� : %d, ���� : %s \n", strlen(str),str);

    RemoveBSN(str);
    printf("���� : %d, ���� : %s \n", strlen(str),str);

    return 0;
}