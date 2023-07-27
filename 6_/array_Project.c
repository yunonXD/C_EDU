#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    srand(time(NULL));
    printf("\n\n == 아빠는 대버리 게임 == \n\n");

    int answer = 0; //입력값
    int treatment = rand() % 4; //발모제 선택 0 ~ 3

    int cntShowBottle = 0; //이번 게임에 보여줄 병의 갯수
    int prevCntShotBottle = 0; //앞 게임에 보여준 병 갯수
    //서로 보여주는 병 갯수 다르게 해 정답률 향상 2개-> 다음은 3개

    //기회 3번 
    for(int i =1; i <=3; i++){
        int bottle[4] = {0,0,0,0};
        
        do{
            cntShowBottle = rand() %2 + 2 ;

        }while(cntShowBottle == prevCntShotBottle);
        prevCntShotBottle = cntShowBottle;

        int isinclueded = 0; //보여줄 병 중에 정답 포함 여부 확인
        printf(" > %d 번째 시도 : " , i);

        //보여줄 병 종류 선택
        for(int j=0; j < cntShowBottle; j++){
            int randBottle = rand () %4 ;

            //아직 선택되지 않은 병이면, 선택처리 
            if (bottle[randBottle] == 0){
                bottle[randBottle] =1;
                if(randBottle == treatment){
                    isinclueded = 1;
                }
            }
            //이미 선택된 병이면 중복, 다시 선택
            else{
                j--;
            }
        }
    
    

        //사용자에게 문제 표시
        for (int k = 0; k<4; k++){
            if(bottle[k] == 1){
                printf("%d" , k +1);
            }
        }
        printf("물약을 머리에 바릅니다 \n\n");

        if(isinclueded == 1){
            printf("성공!\n");
        }
        else{
            printf("fail\n");
        }

        printf("\n 계속 하려면 아무키나 누르세요 ...");
        getchar();
        
    }
    

     printf("\n\n 발모제는 몇번일까요?");
        scanf("%d", &answer);

        if(answer == treatment + 1){
            printf("\n 정답!");
        
        }else{
            printf("\n 오답. 답은 %d 입니다 \n" , treatment +1);
        }

    return 0;
}