#include<stdio.h>

//���� 
void p(int num);
void function_without_return();
int function_with_return();
void funtion_without_params();
void funtion_with_params(int num1, int num2,int num3);

int apple(int total, int ate);  //��ü total ������ ate ���� �԰� ���� ���� ��ȯ

int main(void){

    //function
    //����

    // int num = 2;
    // p(num);
    // //printf("num �� %d �Դϴ�\n" , num);

    // //2+3
    // num = num  + 3;
    // p(num);
    // //printf( "num �� %d �Դϴ�\n", num); //5

    // num -= 1; // num - num-1
    // p(num);
    // //printf("num �� %d �Դϴ�\n" , num); //4

    // num *= 3;
    // p(num);
    // //printf("num �� %d �Դϴ�\n", num); //12
    
    // num /=6;
    // p(num);
    //printf("num �� %d �Դϴ�\n", num); //2

    //�Լ� ����
    //��ȯ���� ���� �Լ�
    // function_without_return();


    // //��ȯ���� �ִ� �Լ�
    // int ret = function_with_return();
    // p(ret);

    // //�Ķ����(���ް�)�� ���� �Լ�
    // funtion_without_params();

    //�Ķ����(���ް�) �� �ִ� �Լ�
    //funtion_with_params(21,25,31);

    //�Ķ���͵� �ް� ���ϵ� �����ִ� �Լ�
    int ret = apple(5,2);   // 5���� ����� 2���� ����
    //printf("��� 5���߿� 2���� ������ %d �� ���Ϳ� " , ret);

    printf("��� %d �� �߿� %d ���� ������ %d ���� ���Ϳ�." , 10, 4, apple(10,4));


    return 0;
}

//����
void p(int num){
    printf("num �� %d �Դϴ� \n" , num);
}

//���ް� 36
// �Լ� : �� + 4
// ��°�(��ȯ ����) : ?
//��ȯ�� �Լ��̸�(*���ް�)


void function_without_return(){
    printf("��ȯ���� ���� �Լ��Դϴ�. \n");

}

int function_with_return(){
    printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
    return 10;
}

void funtion_without_params(){
    printf("�Ķ���Ͱ� ���� �Լ��Դϴ�. \n");
}

void funtion_with_params(int num1, int num2, int num3){
    printf("�Ķ���Ͱ� �ִ� �Լ�, ���ް��� %d %d %d �Դϴ�. \n" , num1, num2, num3);
}

int apple(int total, int ate){
    //printf("�Ķ���� + ����");
    return total - ate;
}
