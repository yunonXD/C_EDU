#include<stdio.h>

int main(void){

    // int arr1[3][4];
    // int arr2[7][9];

    // printf("���� 3 , ���� 4 : %d \n", sizeof(arr1)/sizeof(int));    //�迭 ���� ��ȯ
    // printf("���� 7 , ���� 9 : %d \n", sizeof(arr2));                //����Ʈ ������ ���Ǿ� ��ȯ


    int villa[4][2];
    int popu;

    //������ ���� �ο� �Է� �ޱ�
    for(int i = 0; i<4; i++){
        for(int j = 0; j<2; j++){
            printf("%d �� %d ȣ �α��� : " , i+1, j+1);
            scanf("%d" , &villa[i][j]);
        }
    }

    //������ ���� �α��� ���
    for(int i = 0; i < 4; i++){
        popu = 0;
        popu += villa[i][0];
        popu += villa[i][1];
        printf(" %d �� �α��� : %d \n" , i+1, popu);
    }



    return 0;
}