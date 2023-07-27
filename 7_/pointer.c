#include<stdio.h>

int main(void){

    //포인터

    //[철수] 101호  -> 메모리 공간 주소
    //[영희] 201호
    //[민수] 301호
    //각 문 앞에 암호가 걸려있음

    // int cheolsu = 1;    //암호
    // int yeonghui = 2;
    // int minsu = 3;

    // printf("철수네 주소 : %d \n암호 : %d\n" , &cheolsu , cheolsu);
    // printf("영희네 주소 : %d \n암호 : %d\n" , &yeonghui , yeonghui);
    // printf("민수네 주소 : %d \n암호 : %d\n" , &minsu , minsu);
    // //& << 주소


    // //미션맨!

    // //첫 번째 미션 : 아파트 각 집에 방문하여 문에 적힌 암호를 확인 123
    // int *missionMan; //포인터 변수
    // missionMan = &cheolsu;      //미션맨은 철수의 주소를 가진다
    // printf("미션맨이 방문하는 주소 : %d \n암호 %d\n" , missionMan,*missionMan);

    // missionMan = &yeonghui;
    // printf("미션맨이 방문하는 주소 : %d \n암호 %d\n" , missionMan,*missionMan);

    // missionMan = &minsu;
    // printf("미션맨이 방문하는 주소 : %d \n암호 %d\n" , missionMan,*missionMan);

    // //두번째 미션 각 암호에 3을 곱하라
    // missionMan = &cheolsu;
    // *missionMan = *missionMan *3;
    // printf("=미션맨이 암호를 바꾼 곳 : %d \n암호 %d\n" , missionMan,*missionMan);

    // missionMan = &yeonghui;
    // *missionMan = *missionMan *3;
    // printf("=미션맨이 암호를 바꾼 곳 : %d \n암호 %d\n" , missionMan,*missionMan);

    // missionMan = &minsu;
    // *missionMan = *missionMan *3;
    // printf("=미션맨이 암호를 바꾼 곳 : %d \n암호 %d\n" , missionMan,*missionMan);


    // //스파이
    // //미션맨이 바꾼 암호에서 2를 마이너해라

    // int *spy = missionMan;
    // printf(" \n.... 스파이 미션 수행중 ... \n\n");

    // spy = &cheolsu;
    // *spy = *spy -2;     // 철수 = 철수 -2
    // printf("스파이 방문하는 곳 주소 : %d \n 암호 : %d\n" , spy,*spy);

    // spy = &yeonghui;
    // *spy = *spy -2;
    // printf("스파이 방문하는 곳 주소 : %d \n 암호 : %d\n" , spy,*spy);

    // spy = &minsu;
    // *spy = *spy -2;
    // printf("스파이 방문하는 곳 주소 : %d \n 암호 : %d\n" , spy,*spy);


    // printf("\n\n .............. 바뀐 값 확인 ................\n\n");
    
    // printf("철수네 주소 : %d \n암호 : %d\n" , &cheolsu , cheolsu);
    // printf("영희네 주소 : %d \n암호 : %d\n" , &yeonghui , yeonghui);
    // printf("민수네 주소 : %d \n암호 : %d\n" , &minsu , minsu);

    // //즉 포인터는 변수의 주소값을 가지는 포인터가 변수의 값을 직접 바꿈.
    // //참고로 미션맨의 주소도 있다.

    // printf("미션맨의 주소 : %d\n" ,&missionMan);
    // printf("스파이의 주소 : %d\n" ,&spy);

    return 0;
}