#include<stdio.h>

void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int *ptr);

int main(void){

    //������

    //[ö��] 101ȣ  -> �޸� ���� �ּ�
    //[����] 201ȣ
    //[�μ�] 301ȣ
    //�� �� �տ� ��ȣ�� �ɷ�����

    // int cheolsu = 1;    //��ȣ
    // int yeonghui = 2;
    // int minsu = 3;

    // printf("ö���� �ּ� : %d \n��ȣ : %d\n" , &cheolsu , cheolsu);
    // printf("����� �ּ� : %d \n��ȣ : %d\n" , &yeonghui , yeonghui);
    // printf("�μ��� �ּ� : %d \n��ȣ : %d\n" , &minsu , minsu);
    // //& << �ּ�


    // //�̼Ǹ�!

    // //ù ��° �̼� : ����Ʈ �� ���� �湮�Ͽ� ���� ���� ��ȣ�� Ȯ�� 123
    // int *missionMan; //������ ����
    // missionMan = &cheolsu;      //�̼Ǹ��� ö���� �ּҸ� ������
    // printf("�̼Ǹ��� �湮�ϴ� �ּ� : %d \n��ȣ %d\n" , missionMan,*missionMan);

    // missionMan = &yeonghui;
    // printf("�̼Ǹ��� �湮�ϴ� �ּ� : %d \n��ȣ %d\n" , missionMan,*missionMan);

    // missionMan = &minsu;
    // printf("�̼Ǹ��� �湮�ϴ� �ּ� : %d \n��ȣ %d\n" , missionMan,*missionMan);

    // //�ι�° �̼� �� ��ȣ�� 3�� ���϶�
    // missionMan = &cheolsu;
    // *missionMan = *missionMan *3;
    // printf("=�̼Ǹ��� ��ȣ�� �ٲ� �� : %d \n��ȣ %d\n" , missionMan,*missionMan);

    // missionMan = &yeonghui;
    // *missionMan = *missionMan *3;
    // printf("=�̼Ǹ��� ��ȣ�� �ٲ� �� : %d \n��ȣ %d\n" , missionMan,*missionMan);

    // missionMan = &minsu;
    // *missionMan = *missionMan *3;
    // printf("=�̼Ǹ��� ��ȣ�� �ٲ� �� : %d \n��ȣ %d\n" , missionMan,*missionMan);


    // //������
    // //�̼Ǹ��� �ٲ� ��ȣ���� 2�� ���̳��ض�

    // int *spy = missionMan;
    // printf(" \n.... ������ �̼� ������ ... \n\n");

    // spy = &cheolsu;
    // *spy = *spy -2;     // ö�� = ö�� -2
    // printf("������ �湮�ϴ� �� �ּ� : %d \n ��ȣ : %d\n" , spy,*spy);

    // spy = &yeonghui;
    // *spy = *spy -2;
    // printf("������ �湮�ϴ� �� �ּ� : %d \n ��ȣ : %d\n" , spy,*spy);

    // spy = &minsu;
    // *spy = *spy -2;
    // printf("������ �湮�ϴ� �� �ּ� : %d \n ��ȣ : %d\n" , spy,*spy);


    // printf("\n\n .............. �ٲ� �� Ȯ�� ................\n\n");
    
    // printf("ö���� �ּ� : %d \n��ȣ : %d\n" , &cheolsu , cheolsu);
    // printf("����� �ּ� : %d \n��ȣ : %d\n" , &yeonghui , yeonghui);
    // printf("�μ��� �ּ� : %d \n��ȣ : %d\n" , &minsu , minsu);

    // //�� �����ʹ� ������ �ּҰ��� ������ �����Ͱ� ������ ���� ���� �ٲ�.
    // //����� �̼Ǹ��� �ּҵ� �ִ�.

    // printf("�̼Ǹ��� �ּ� : %d\n" ,&missionMan);
    // printf("�������� �ּ� : %d\n" ,&spy);

    // //�迭
    // int arr[3] = {5,10,15};
    // int *ptr = arr;
    // for(int i = 0; i< 3; i++){
    //     printf("�迭 arr[%d] �� �� : %d\n" ,i, arr[i]);
    // }

    // printf ("\n\n-----------------\n\n");

    //     for(int i = 0; i< 3; i++){
    //     printf("������ arr[%d] �� �� : %d\n" ,i, ptr[i]);
    // }
    
    // printf ("\n\n-----------------\n\n");

    // ptr[0] = 100;
    // ptr[1] = 200;
    // ptr[2] = 300;
    // for(int i = 0; i< 3; i++){
    //     printf("�迭 arr[%d] �� �� : %d\n" ,i, *(arr + i));
    // }

    // printf ("\n\n-----------------\n\n");

    //     for(int i = 0; i< 3; i++){
    //     printf("������ arr[%d] �� �� : %d\n" ,i, ptr[i]);
    // }
    // // *(arr + i ) == arr[i] �Ȱ��� ǥ��
    // // arr == arr �迭�� ù��° ���� �ּҿ� ������ == &arr[0]

    // printf("arr �� �� : %d\n" , arr);
    // printf("arr[0] �� �ּ� : %d\n" , &arr[0]);

    // printf ("arr ��ü�� ���� ������ �ּ��� ��ü �� : %d\n", *arr); //*(arr +0)
    // printf("arr[0] �� ���� �� : %d\n" , *&arr[0]);

    // //*& �� ���ۼ�Ʈ ���� ������? << ���� ������ �ϰ͵� ���°Ͱ� �ٸ��� ����.
    // //& �� �ּ��̸� *�� �ּ��� ��. ������ ���ȴ�.


    //swap
    // int a = 10;
    // int b = 20;
    // printf(" a �� �ּ� : %d\n" , &a);
    // printf(" b �� �ּ� : %d\n" , &b);
    // //a �� b �� ���� �ٲ۴�
    // printf("Swap �Լ� �� => a : %d, b : %d\n" , a ,b);
    // swap(a,b);
    // printf("Swap �Լ� �� => a : %d, b : %d\n" , a ,b);

    // //���� ���� ���� (call by value) > ���� �����Ѵٴ� �ǹ�

    // //�ּҰ��� �Ѱܹ�����?? ���� ���� ������??

    // printf("�ּҰ� ���� �� => a : %d, b : %d\n" , a ,b);
    // swap_addr(&a,&b);
    // printf("�ּҰ� ���� �� => a : %d, b : %d\n" , a ,b);

    //�迭�϶�, arr2 -> �ּ�
    int arr2[3] = {10,20,30};
    //changeArray(arr2);
    changeArray(&arr2[0]);  //<< ��� �Ȱ��� �ֳ�? �迭�� "�ּ���"
    for (int i= 0; i < 3; i++){
        printf("%d\n" , arr2[i]);
    }

    //scanf ���� & �� ���̴� ������ ���� �� �� �ִ�


    return 0;
}

void swap(int a, int b){

    //printf("swap a �� �ּ� : %d\n" , &a);
    //printf("swap b �� �ּ� : %d\n" , &b);

    int temp = a;
    a = b;
    b = temp;
}

void swap_addr(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
    //printf("�ּҰ� Swap �Լ� �� => a : %d, b : %d\n" , *a ,*b);
}

void changeArray(int *ptr){
    ptr[2] = 50;
}