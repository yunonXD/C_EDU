#include<stdio.h>

int main(void){

    //���� n �� �Է¹޴´�
    // 2^k <= n �� ���� ������ ������Ű�� k �� �ִ��� ����Ѵ�
    // ���� �� 256 �� �Է������� k �� 8 �� ���;��Ѵ�.


    printf(" 2 �� ����� ���ڸ� �Է����ּ���. ");
    int num ,k;
    scanf("%d", &num);

    for (int i =1 ; i< num; i++){

        k++;
        i = i*2;

        printf("%d %d\n" , k , i);
    }
    printf("\n=============\n");
    printf("%d" , k);



    return 0;
}