#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    srand(time(NULL));
    printf("\n\n == �ƺ��� ����� ���� == \n\n");

    int answer = 0; //�Է°�
    int treatment = rand() % 4; //�߸��� ���� 0 ~ 3

    int cntShowBottle = 0; //�̹� ���ӿ� ������ ���� ����
    int prevCntShotBottle = 0; //�� ���ӿ� ������ �� ����
    //���� �����ִ� �� ���� �ٸ��� �� ����� ��� 2��-> ������ 3��

    //��ȸ 3�� 
    for(int i =1; i <=3; i++){
        int bottle[4] = {0,0,0,0};
        
        do{
            cntShowBottle = rand() %2 + 2 ;

        }while(cntShowBottle == prevCntShotBottle);
        prevCntShotBottle = cntShowBottle;

        int isinclueded = 0; //������ �� �߿� ���� ���� ���� Ȯ��
        printf(" > %d ��° �õ� : " , i);

        //������ �� ���� ����
        for(int j=0; j < cntShowBottle; j++){
            int randBottle = rand () %4 ;

            //���� ���õ��� ���� ���̸�, ����ó�� 
            if (bottle[randBottle] == 0){
                bottle[randBottle] =1;
                if(randBottle == treatment){
                    isinclueded = 1;
                }
            }
            //�̹� ���õ� ���̸� �ߺ�, �ٽ� ����
            else{
                j--;
            }
        }
    
    

        //����ڿ��� ���� ǥ��
        for (int k = 0; k<4; k++){
            if(bottle[k] == 1){
                printf("%d" , k +1);
            }
        }
        printf("������ �Ӹ��� �ٸ��ϴ� \n\n");

        if(isinclueded == 1){
            printf("����!\n");
        }
        else{
            printf("fail\n");
        }

        printf("\n ��� �Ϸ��� �ƹ�Ű�� �������� ...");
        getchar();
        
    }
    

     printf("\n\n �߸����� ����ϱ��?");
        scanf("%d", &answer);

        if(answer == treatment + 1){
            printf("\n ����!");
        
        }else{
            printf("\n ����. ���� %d �Դϴ� \n" , treatment +1);
        }

    return 0;
}