#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//5마리의 고양이
// 아무키나 눌러서 랜덤으로 뽑기
// 5마리 모두 수집하는게 목표
//중복이 있다.

//고양이
//이름
//나이
//성격
//레벨

void initCats();                //고양이 정보 초기화
void printCat(int selected);    //고양이 정보 출력
int checkCollection();

typedef struct{
    
    char *name;
    int age;
    char *character;
    int level;

} CAT;

//현재까지 보유한 고양이
int collection[5] = {0,0,0,0,0};

//전체 고양이 리스트
CAT cats[5];


int main(void){
    srand(time(NULL));

    initCats();

    while(1){
        printf(" 고양이 가차 \n 아무 키나 눌러서 확인");
        getchar();

        int selected = rand() % 5 ; // 0~4
        printCat(selected);     //뽑은 고양이에 대한 정보 출력
        collection[selected] = 1; //뽑은 고양이 처리

        int collectAll = checkCollection();
        if(collectAll ==1) break; //전부 수집했는지 여부 확인
    }


    return 0;
}


void initCats(){
    cats[0].name = "깜냥이";
    cats[0].age = 5;
    cats[0].character = "온순함";
    cats[0].level = 1;

    cats[1].name = "토끼";
    cats[1].age = 3;
    cats[1].character = "날카로움";
    cats[1].level = 2;

    cats[2].name = "강아지";
    cats[2].age = 7;
    cats[2].character = "잠만잠";
    cats[2].level = 3;

    cats[3].name = "까꿍이";
    cats[3].age = 2;
    cats[3].character = "좀침";
    cats[3].level = 4;

    cats[4].name = "돼냥이";
    cats[4].age = 1;
    cats[4].character = "잘먹음";
    cats[4].level = 5;
}

void printCat(int selected){
    printf("\n\n ===고양이를 뽑았다옹=== \n\n");
    printf("이름 : %s\n", cats[selected].name);
    printf("나이 : %d\n", cats[selected].age);
    printf("성격 : %s\n", cats[selected].character);
    printf("레벨 : ");
    for(int i =0; i<cats[selected].level; i++) printf("%s", " ★ " );

    printf("\n\n==================");

}

int checkCollection(){
    //현재 보유한 고양이 목룍 출력 및 모두 수집했는지 리턴
    int collectAll = 1;

    printf("\n\n==보유 고양이 목록==\n\n");
    for(int i =0; i<5; i++){
        if(collection[i] == 0) {
            printf("%10s" , "<빈박스>");
            collectAll = 0;
            }
        else printf("%10s" , cats[i].name);
    }

    printf("\n\n ======================= \n\n");

    if(collectAll) {    // 모든 고양이를 수집했을 경우
        printf("\n\n 축하합니다! 모든 고양이를 수집했어요.\n\n");
    }

    return collectAll;
}