#include<stdio.h>

int main(void){

    //������ ������ ���� ����
    // int m_age = 12;
    // printf("%d \n" , m_age);

    // m_age = 14;
    // printf("%d \n" , m_age);


    //�Ǽ��� ������ ���� ����
    // float m_f = 45.4f;
    // printf("%.2f\n" , m_f);

    // double m_d = 4.425;
    // printf("%.2lf" , m_d );

    //���. ������ �ʴ� ��
    // const int Year = 2000;
    // printf("�¾ �⵵ : %d" , Year);
    //Year = 2001;


    //printf
    //����

    // int add = 3 + 7; // 10

    // printf ( " 3 + 7  = %d\n" , add);

    // printf ("%d + %d = %d \n" , 3, 7, 3 + 7);
    

    //scanf
    //Ű���� �Է��� �޾Ƽ� ����

    // int input = 0;
    // printf ("���� �Է��ϼ��� : ");
    // scanf("%d" , &input);

    // printf("�Է°� : %d\n" , input);


    // int one, two, three;
    // printf(" 3���� ���� �Է� : ");

    // scanf("%d %d %d" , &one, &two , &three);

    // printf("ù��° �� : %d \n" , one);
    // printf("�ι�° �� : %d \n" , two);
    // printf("����° �� : %d \n" , three);

    //����(�ѱ���) , ���ڿ�(�ѱ��� �̻��� ��������)
    // char c = 'A';
    // printf("%c\n" , c);

    //char str[256];
    //scanf("%s" , str ,sizeof(str));     //sizeof(str) << �ش� ���ڿ� ũ��� �Է����� �ʵ��� ����ó��
    //printf("%s\n" , str);

    //������Ʈ
    //������ �������� ������ �Լ� �����ۼ�
    //�̸� ���� ������ Ű ���˸�

    char name[256];
    printf ("�̸��� ����");
    scanf("%s" , name, sizeof(name));

    int age;
    printf ("����");
    scanf("%d" , &age);

    float weight;
    printf("������");
    scanf("%f" , &weight);

    double height;
    printf("Ű");
    scanf("%lf" , &height);

    char what[256];
    printf("���˸�");
    scanf("%s" , what , sizeof(what));

    //���
    printf("\n\n -- ������ ���� -- \n\n");
    printf(" �̸�   : %s\n" , name);
    printf(" ����   : %d\n" , age);
    printf(" ������ : %.2f\n" , weight);
    printf(" Ű     : %.2lf\n" , height);
    printf(" ����   : %s\n" , what);

    return 0;
}