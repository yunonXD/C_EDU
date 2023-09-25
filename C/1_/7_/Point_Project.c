#include<stdio.h>
#include<time.h>

    //����Ⱑ 6���� �ִ�
    //�縷�� ����־ ���� ���������� ����
    //���� �� ���� ���� ���׿� ���� ��� �����ؾ���
    //����⸦ Ű���� ����

void initData();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();
int level;
int arrayFish[6];
int *cursor;

int main(void){

    long StartTime = 0; //���� ���۽ð�
    long totalElapsedTime = 0;  //�� ��� �ð�
    long prevElapsedTime = 0;   //���� ��� �ð� *�ֱٿ� ���� �� ����

    int num;    // ��� ���׿� ���� �� ������ ^����� �Է�
    initData();

    cursor = arrayFish; // cursot[0] ...cursurp[1]...


    StartTime = clock(); // ���� �ð��� millisecond ������ ��ȯ

    while(1){
        printFishes();
        printf("�� �� ���׿� ���� �����Ͻǲ�����?");
        scanf("%d" , &num);

        //�Է°� üũ
        if(num < 1 || num > 6){
            printf("�Է°��� �߸��Ǿ����ϴ�\n");
            continue;
        }

        //�� ��� �ð�
        totalElapsedTime = (clock() - StartTime) / CLOCKS_PER_SEC;
        printf("�� ��� �ð� : %ld ��\n" , totalElapsedTime);

        //������ ���� �� �ð�
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf("�ֱ� ��� �ð� : %ld �� \n" , prevElapsedTime);

        //������ ���� ����(����)
        decreaseWater(prevElapsedTime);

        //���� ���� *����� �Է�
        //1. ������ ���� 0 �̸�? ���� ���� �ʴ´�
        if(cursor[num -1] <=0){
            printf("%d �� ������ �̹� �׾����ϴ�.\n" ,num);
        }

        //2. ������ ���� 0 �� �ƴ� ��� 100�� ���� �ʰ� 
        else if(cursor[num -1] +1 <= 100){
            printf("%d ���� ���׿� ���� �ݴϴ�.\n\n" , num);
            cursor[num-1] +=1;
        }

        //������ ���� Ȯ�� (20��)
        if(totalElapsedTime /20 > level -1){
            level++;
            printf("������ ���� %d ���� %d �� �ö󰬽��ϴ�." , level -1 , level);

            //���� ����5
            if(level == 5){
                printf("\n\n�������� �޼� ���� ����\n\n");
                exit(0);
            }
        }

        //��� ����Ⱑ �׾����� Ȯ��
        if(checkFishAlive() == 0) {
            printf("��� ����Ⱑ �׾����ϴ�\n");
            exit(0);

        }
        else{
            printf("������ ���� ����ֽ��ϴ�.\n");
        }
        prevElapsedTime = totalElapsedTime;

        


    }


    return 0;
}

void initData(){
    level = 1;  //���ӷ��� 1~5
    for(int i=0; i<6; i++){
        arrayFish[i] = 100; //������ ������
    }
}


void printFishes(){
    printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n" ,1 ,2,3,4,5,6);
    for(int i =0; i<6; i++){
        printf(" %4d " , arrayFish[i]);
    }
    printf("\n\n");

}

void decreaseWater(long elapsedTime){
    for (int i =0; i< 6; i++){
        arrayFish[i] -= (level * 2 * (int)elapsedTime);
        if(arrayFish[i] < 0 ){
            arrayFish[i] = 0;
        }
    }
}

int checkFishAlive(){
    for(int i =0; i<6; i++){
        if(arrayFish[i]>0)
            return 1;
    }
    return 0;
}