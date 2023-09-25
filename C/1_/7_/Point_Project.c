#include<stdio.h>
#include<time.h>

    //물고기가 6마리 있다
    //사막에 살고있어서 물이 지속적으로 감소
    //물이 다 증발 전에 어항에 물을 계속 투입해야함
    //물고기를 키워서 먹자

void initData();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();
int level;
int arrayFish[6];
int *cursor;

int main(void){

    long StartTime = 0; //게임 시작시간
    long totalElapsedTime = 0;  //총 경과 시간
    long prevElapsedTime = 0;   //직전 경과 시간 *최근에 물을 준 간격

    int num;    // 몇번 어항에 물을 줄 것인지 ^사용자 입력
    initData();

    cursor = arrayFish; // cursot[0] ...cursurp[1]...


    StartTime = clock(); // 현재 시간을 millisecond 단위로 변환

    while(1){
        printFishes();
        printf("몇 번 어항에 물을 투입하실껀가요?");
        scanf("%d" , &num);

        //입력값 체크
        if(num < 1 || num > 6){
            printf("입력값이 잘못되었습니다\n");
            continue;
        }

        //총 경과 시간
        totalElapsedTime = (clock() - StartTime) / CLOCKS_PER_SEC;
        printf("총 경과 시간 : %ld 초\n" , totalElapsedTime);

        //직전에 물을 준 시간
        prevElapsedTime = totalElapsedTime - prevElapsedTime;
        printf("최근 경과 시간 : %ld 초 \n" , prevElapsedTime);

        //어항의 물을 감소(증발)
        decreaseWater(prevElapsedTime);

        //물을 투입 *사용자 입력
        //1. 어항의 물이 0 이면? 물을 주지 않는다
        if(cursor[num -1] <=0){
            printf("%d 번 물고기는 이미 죽었습니다.\n" ,num);
        }

        //2. 어항의 물이 0 이 아닌 경우 100을 넘지 않게 
        else if(cursor[num -1] +1 <= 100){
            printf("%d 번의 어항에 물을 줍니다.\n\n" , num);
            cursor[num-1] +=1;
        }

        //레벨압 힐지 확인 (20초)
        if(totalElapsedTime /20 > level -1){
            level++;
            printf("레벨업 기존 %d 에서 %d 로 올라갔습니다." , level -1 , level);

            //최종 레벨5
            if(level == 5){
                printf("\n\n최종레벨 달성 게임 종료\n\n");
                exit(0);
            }
        }

        //모든 물고기가 죽었는지 확인
        if(checkFishAlive() == 0) {
            printf("모든 물고기가 죽었습니다\n");
            exit(0);

        }
        else{
            printf("물고가기 아직 살아있습니다.\n");
        }
        prevElapsedTime = totalElapsedTime;

        


    }


    return 0;
}

void initData(){
    level = 1;  //게임레벨 1~5
    for(int i=0; i<6; i++){
        arrayFish[i] = 100; //어항의 물높이
    }
}


void printFishes(){
    printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n" ,1 ,2,3,4,5,6);
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