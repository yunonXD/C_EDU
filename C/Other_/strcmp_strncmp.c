#include<stdio.h>
#include<string.h>


//strcmp        ù��° �ι�° ���� ��ü ��
//s1 �� �� ũ�� 0���� ū���� return ���
//s2 �� �� ũ�� 0���� ���� ���� return ����

//strncmp       ���к� (�� �տ��� ��� ���ڸ� ���Ұ�����)

//������ �Ȱ��� ���̸� 0 return

//�ƽ�Ű�ڵ��� ũ��� �� null���ڵ� �� ���


int main(int argc, char *argv[]){

    printf("%d\n" , strcmp("ABCD" , "ABCC")); //0���� ū ���� ���
    printf("%d\n", strcmp("ABCD" , "ABCDE")); //0���� ���� �� ���


    char str1[20];
    char str2[20];
    printf("���ڿ� �Է� 1: ");
    scanf("%s",str1);
    printf("���ڿ� �Է� 2: ");
    scanf("%s",str2);

    if(!strcmp(str1,str2)){
        puts("that two char is equal.");
    }
    else{
        puts("that who char is not same.");

        if(!strncmp(str1,str2,3))
            printf("but second spel is same.");
    }


    return 0;
}