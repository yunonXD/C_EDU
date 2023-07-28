#include<stdio.h>


struct GameInfo
{
    char *company;
    int year;
    int price;
    char *name;
};



int main(void){
    //회사 게임 출시
    //게임 이름 : 
    //발매년도 2023
    //가격 50
    //제작자 : 으아

    //구조체
    struct GameInfo gameinfo1;

    gameinfo1.company = "으앙ㅇ에";
    gameinfo1.year = 2023;
    gameinfo1.price = 50;
    gameinfo1.name = "으아아아";


    //구조체 출력
    printf("==게임 출시 정보 ==\n");
    printf("==게임명 : %s\n", gameinfo1.name);
    printf("==출시년도 : %d\n", gameinfo1.year);
    printf("==가격 : %d\n", gameinfo1.price);
    printf("==회사 : %s\n", gameinfo1.company);

    //구조체를 배열처럼 초기화
    struct GameInfo gameinfor2 =  {"너도 게임" , 2023 , 100 , "ㅁ,앙아악"};

    //구조체 출력
    printf("==게임 출시 정보 ==\n");
    printf("==게임명 : %s\n", gameinfor2.name);
    printf("==출시년도 : %d\n", gameinfor2.year);
    printf("==가격 : %d\n", gameinfor2.price);
    printf("==회사 : %s\n", gameinfor2.company);


    //구조체 배열
    struct GameInfo gameArray[2] = {
        {"너나도게임" , 2023,100, "으앙ㅇㅁㄴ"},
        {"너나도게임2" , 2023,120, "으앙ㅇㅁ1ㄴ"}
    };

    //구조체 포인터
    struct GameInfo *gamePtr; //미션맨
    gamePtr = &gameinfo1;
    // printf("\n\n==미션맨의 게임 출시 정보 ==\n");
    // printf("==게임명 : %s\n", (*gamePtr).name);
    // printf("==출시년도 : %d\n", (*gamePtr).year);
    // printf("==가격 : %d\n", (*gamePtr).price);
    // printf("==회사 : %s\n", (*gamePtr).company);
    printf("\n\n==미션맨의 게임 출시 정보 ==\n");
    printf("==게임명 : %s\n", gamePtr->name);
    printf("==출시년도 : %d\n", gamePtr->year);
    printf("==가격 : %d\n", gamePtr->price);
    printf("==회사 : %s\n", gamePtr->company);

    




    return 0;

}