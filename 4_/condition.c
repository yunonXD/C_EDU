#include<stdio.h>

int main(void){

    // int age = 15;
    // //if (조건 ){} else {구문}
    // if (age >= 20){
    //     printf("adult");
    // }
    // else{
    //     printf("students");
    // }


    //break / continue
    //1 번 ~ 30번 , 1반~5번 조별발표
    // for ( int i = 1; i<=30; i++){

    //     if( i >= 6 ){
    //         printf("나머지는 집가세요");
    //         break;       //반복문 나옴
            
    //     }
    //     printf("%d 번 학생 발표 준비\n" , i);

    // }

    //1번 부터 30번까지 있는 반. 7번은 결석임 7번 제외하고 6번부터 10번까지 조별발표 ㄱ

    // for(int i =1; i<=30; i++){

    //     if (i >= 6 && i <=10){

    //         if(i == 7){
    //             printf("%d 번 학생은 결석 \n" , i);
    //             continue;       //다음 문장을 실행하지 않음 즉 여기선 i++ 로 넘아감
    //         }
    //         printf("%d 번 학생은 조별 발표 준비\n" , i);
    //     }
    // }


    //&& ||
    int a = 10;
    int b = 10;
    int c = 12;
    int d = 12;

    if ( a == b && c == d){
        printf(" a and b is equal , c and d is also equal");
    }
    else {
        printf("diff value.");
    }








    return 0;
}