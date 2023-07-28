#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//10마리의 서로 다른 동물이 있다 (두장씩)
//사용자로부터 2개의 입력값을 받아 같은 동물을 찾으면 뒤집어두기
//틀리면 원상복귀
//다 찾으면 종료
//총 실패횟수 보여주기(종료할때)

int arrayAnimal[4][5];      //카드지도 20장
int checkAnimal[4][5];      //뒤집힌지 확인
char  *strAnima[10];
void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_x(int y);
void printAnimal();
void printQuestion();
int foundAllAnimals();


int main(void){

    srand(time(NULL));

    initAnimalArray();
    initAnimalName();
    shuffleAnimal();

    int failCount = 0; //실패횟수

    while(1){
        int select1 = 0;    //사용자 선택 첫번째 수
        int select2 = 0;    //사용자 선택 두번째 수

        printAnimal();  //동물 위치
        printQuestion();    //문제 출력(카드지도판)
        printf(" 뒤집을 카드를 2개 골라주세요 : ");
        scanf(" %d %d" , &select1, &select2);

        if(select1 == select2){
            printf(" 같은 카드 ㄴㄴ\n");
            continue;
        }
        
        //좌표에 해당하는 카드를 뒤집어 보고 같은지 아닌지 확인

        //정수 좌표를 x ,y 로 변환
        int fisrtSelect_x = conv_pos_x(select1);
        int fisrtSelect_y = conv_pos_y(select1);

        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);

        //차례대로 카드가 뒤집힌지 여부 , 그리고 동물이 같인지 여부.
        if((checkAnimal[fisrtSelect_x][fisrtSelect_y] == 0 
        && checkAnimal[secondSelect_x][secondSelect_y] == 0)  
        && (arrayAnimal[fisrtSelect_x][fisrtSelect_y] == 
         arrayAnimal[secondSelect_x][secondSelect_y])){

            printf("\n\n 빙고! %s 발견! \n\n" , strAnima[arrayAnimal[fisrtSelect_x][fisrtSelect_y]]);
            checkAnimal[fisrtSelect_x][fisrtSelect_y] = 1; //뒤집어진 카드로 변경
            checkAnimal[secondSelect_x][secondSelect_y] = 1;
        }
        else{
            printf("\n\n 틀렸거나 이미 뒤집힌 카드입니다.\n\n");
            printf("%d : %s\n" , select1, strAnima[arrayAnimal[fisrtSelect_x][fisrtSelect_y]]);
            printf("%d : %s\n" , select2, strAnima[arrayAnimal[secondSelect_x][secondSelect_y]]);
            printf("\n");

            failCount++;
        }

        //모든 동물을 찾았다 1 0
        if(foundAllAnimals() == 1){
            printf("\n\n 모든 동물 찾기 완료 \n\n");
            printf(" 지금까지 총 %d 번 실수했습니다." , failCount);
            break;
        }
    }

    return 0;
}

void initAnimalArray(){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            arrayAnimal[i][j] = -1;
        }
    }
}
    
void initAnimalName(){
    strAnima[0] = "원숭이";
    strAnima[1] = "하마";
    strAnima[2] = "강아지";
    strAnima[3] = "고양이";
    strAnima[4] = "돼지";
    strAnima[5] = "코끼리";
    strAnima[6] = "기린";
    strAnima[7] = "낙타";
    strAnima[8] = "타조";
    strAnima[9] = "호랑이";
}

void shuffleAnimal(){
    //ㅁㅁㅁㅁㅁ
    //ㅁㅁㅁㅁㅁ
    //ㅁㅁㅁㅁㅁ
    //ㅁㅁㅁㅁㅁ

    for(int i=0; i<10; i++){
        for(int j = 0; j<2; j++){
            int pos = getEmptyPosition();
            int x = conv_pos_x(pos);
            int y = conv_pos_y(pos);

            arrayAnimal[x][y] = i;
        }
    }
}

//좌표에서 빈 공간 찾기
int getEmptyPosition(){
    while(1){
        int randPos = rand() %20; // 0~ 19 사이 숫자를 좌표로 반환
        int x = conv_pos_x(randPos);
        int y = conv_pos_y(randPos);

        if(arrayAnimal[x][y] == -1){    //빈 공간이면 현재 위치를 리턴
            return randPos;
        }
        
    }
    return 0;
}

int conv_pos_x(int x){
    return x /5;        //5줄이라 5로 나누면 몫이 0 1 2 3 딱 나옴
}

int conv_pos_y(int y){
    return y %5;        //5줄이라 5의 나머지로 구하면 나머지 숫자가 떨아짐
}

void printAnimal(){
    printf("\n==============미리 정답 보여줌=============\n\n");
    for(int i =0; i <4; i++){
        for (int j=0; j<5; j++){
            printf("%8s",strAnima[arrayAnimal[i][j]]);
        }
        printf("\n");
    }
    printf("\n==========================================\n\n");
}

void printQuestion(){

    printf("\n\n (문제) \n");
    int seq = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            //뒤집어서 정답을 맞췄으면 동물 이름을
            if(checkAnimal[i][j] !=0){
                printf("%8s" , strAnima[arrayAnimal[i][j]]);
            }
            else{
                printf("%8d", seq);
            }
            seq++;
            //뒤집어서 못맞췄다면 뒷면 -> 일단은 숫자로 보여주기로
        }
        printf("\n");
    }
}

int foundAllAnimals(){
    for(int i =0; i<4; i++){
        for(int j= 0; j<5; j++){
            if(checkAnimal[i][j] == 0)  
            {
                return 0;
            }
        }
    }
    return 1;
}