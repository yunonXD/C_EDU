#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int getRandomNunber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();




int main(void){

    //문이 5개 있고 각 문마다 어려운 수식 퀴즈 등장(랜덤)
    //맞추면 통과 틀리면 실패

    
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
            //프로그램종료
            printf("program quit");
            exit;
        }
        else if(answer == num1 * num2){
            //성공
            success();
            count++;
        }
        else{
            //실패
            fail();
        }
    }
    printf("\n\n 당신은 5개의 비밀번호중 %d 를 맞췄습니다." , count);
    return 0;
}

int getRandomNunber(int level){
    return rand() % (level * 7)+1;
}

void showQuestion(int level, int num1, int num2){
    printf("\n\n\n########### %d 번째 비밀번호 ###########n", level);
    printf("\n\t %d x %d 는? \n\n", num1, num2);
    printf("######################");
    printf("\n비밀번호를 입력 (종료 : -1)");

}

void success(){
    printf("\n >> good \n");
}

void fail(){
    printf("\n >> fail \n");
}