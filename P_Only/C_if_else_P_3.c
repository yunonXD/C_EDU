#include<stdio.h>

int main(void){

    int num1,num2,num3,num4;
    
    printf("평균 점수 계산기 >> 순서대로 국어 , 영어, 수학 점수를 입력해주세요 :");
    scanf("%d %d %d",&num1,&num2,&num3);

    num4 = (num1+num2+num3)/3;

    if(num4 >= 90){
        printf("평균은 %d 점으로 A 등급니다.",num4);
    }
    else if(num4 >= 80) {
        printf("평균은 %d 점으로 B 등급니다.",num4);
    }
    else if(num4 >= 70) {
        printf("평균은 %d 점으로 C 등급니다.",num4);
    }
    else if(num4 >= 50) {
        printf("평균은 %d 점으로 D 등급니다.",num4);
    }
    else if(num4 < 50){
        printf("평균은 %d 점으로 재수강재수강신나는노래.",num4);
    }


    return 0;
}