#include<stdio.h>


struct GameInfo
{
    char *company;
    int year;
    int price;
    char *name;

    struct GameInfo *friendGame; // 연관업체 게임
    
};

typedef struct //GameInformation 이것도 가능
{
    char *company;
    int year;
    int price;
    char *name;

    struct GameInfo *friendGame; // 연관업체 게임
    
}GAME_INFO;



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
    struct GameInfo gameinfo2 =  {"너도 게임" , 2023 , 100 , "ㅁ,앙아악"};

    //구조체 출력
    printf("==게임 출시 정보 ==\n");
    printf("==게임명 : %s\n", gameinfo2.name);
    printf("==출시년도 : %d\n", gameinfo2.year);
    printf("==가격 : %d\n", gameinfo2.price);
    printf("==회사 : %s\n", gameinfo2.company);


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



    //연관업체 게임소개
    gameinfo1.friendGame = &gameinfo2;

    printf("\n\n==연관 업체의 게임 출시 정보 ==\n");
    printf("==게임명 : %s\n", gameinfo1.friendGame->name);
    printf("==출시년도 : %d\n", gameinfo1.friendGame->year);
    printf("==가격 : %d\n", gameinfo1.friendGame->price);
    printf("==회사 : %s\n", gameinfo1.friendGame->company);


    //typedef
    //자료형에 별명을 지정

    int i = 1;
    typedef int 정수;
    정수 정수변수 = 3;
    //printf("정수변수 : %d" , 정수변수);  vscode는 안되는듯

    typedef struct GameInfo 게임정보;
    게임정보 game1;
    game1.name = " 한글게임 ";
    game1.year = 2015;

    GAME_INFO game2;
    game2.name = "한글게임2";
    game2.year = 2025;

    return 0;

}