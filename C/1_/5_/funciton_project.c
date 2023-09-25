#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int getRandomNunber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();




int main(void){

    //���� 5�� �ְ� �� ������ ����� ���� ���� ����(����)
    //���߸� ��� Ʋ���� ����

    
    srand(time(NULL));
    int count = 0;
    for (int i = 1; i <= 5; i++){
        int num1 = getRandomNunber(i);
        int num2 = getRandomNunber(i);
        //printf("%d x %d ?", num1, num2);
        showQuestion(i, num1, num2);

        int answer = 0;
        scanf("%d" , &answer);
        if(answer == -1){
            //���α׷�����
            printf("program quit");
            exit;
        }
        else if(answer == num1 * num2){
            //����
            success();
            count++;
        }
        else{
            //����
            fail();
        }
    }
    printf("\n\n ����� 5���� ��й�ȣ�� %d �� ������ϴ�." , count);
    return 0;
}

int getRandomNunber(int level){
    return rand() % (level * 7)+1;
}

void showQuestion(int level, int num1, int num2){
    printf("\n\n\n########### %d ��° ��й�ȣ ###########n", level);
    printf("\n\t %d x %d ��? \n\n", num1, num2);
    printf("######################");
    printf("\n��й�ȣ�� �Է� (���� : -1)");

}

void success(){
    printf("\n >> good \n");
}

void fail(){
    printf("\n >> fail \n");
}