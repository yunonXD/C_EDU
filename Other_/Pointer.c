#include<stdio.h>

int main(void){

    //Pointer ���� <- �ּҰ� ���� (����) �׷� �̰� �Ϲ� int �� ������ ���� �� �� �ִ°� �Ƴ�? �Ƴ�!!

    //int num = 10;
    //int *pur = &num;    //§! ������ ���� ����!

    //�ּҰ��� ù��° ����Ʈ ������ ������. 32 ��Ʈ -> 4 64��Ʈ -> 8


   // double num1 = 3.15f;
   // double *ptr2 = &num1;       //��! double �� num1 �� �ּҸ� ����Ű�� ������ ����!

    //������ ������ ũ��� �׻� ����. sizeof �� Ȯ���غ�!

    char str1[] = "My String";      //��������
    char *str2 = "Your String";   //�������
    printf("%s %s\n\n" , str1, str2);

    str2 = "OurString"; //����Ű�� ����� ����
    printf("%s %s\n\n" ,str1, str2);

    str1[0] = 'X';      //���ڿ� ���� ��
    str2[0] = 'X';      //���ڿ� ���� X
    printf("%s %s\n\n" ,str1, str2);


    return 0;
}