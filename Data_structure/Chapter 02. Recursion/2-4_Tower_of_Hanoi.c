#include<stdio.h>

int Hanoi(int num, char from , char by , char to){
    if(num == 1)    printf("���� 1�� %c ���� %c �� �̵� \n",from, to);
    else{
        Hanoi(num-1 , from, to , by);
        printf("���� %d�� %c ���� %c �� �̵� \n" , num, from, to);
        Hanoi(num-1 , by, from, to);
    }
}

int main(int argc , char* argv[]){
    Hanoi(3,'A','B','C');

    return 0;
}


/*
�ϳ��� Ÿ��
 > �������
    - ������ �ѹ��� �ϳ��� �ϳ��� �ű� �� �ִ�
    - ���� �������� ū ������ �ø� �� ����.




*/