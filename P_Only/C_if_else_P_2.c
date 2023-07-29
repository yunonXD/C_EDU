#include<stdio.h>

// 두 개의 정수를 입력받아 두 수의 차를 출력
//단 무조건 큰 수에서 작은수를 뺀 결과를 출력해야함.
//출력의 결과는 무조건 0 이상



int main(void){
    
    int num1,num2;

    while(1){
        printf("값을 마이너 할 두 정수를 입력해주세요. : ");
        scanf("%d %d" , &num1, &num2);
        //getchar();

        if(num1<0 || num2<0){
            printf("정수를 입력해주세요.\n");
            continue;
        }
        else{
             if(num1 > num2){
                printf("%d - %d = %d\n" , num1, num2, num1-num2);
            }
            else if(num2 > num1){
                printf("%d - %d = %d\n" , num2, num1, num2-num1);
            }

        }

    }



    return 0;
}