#include<stdio.h>

int main(void){

    //printf("ㅎㅇ");



    //++ 연신자
    // int a = 10;
    // printf("a : %d\n" ,a);
    // a++;
    // printf("a : %d\n" ,a);


    // int b = 20;
    // printf(" b : %d\n" , ++b);  //b = b + 1
    // printf(" b : %d\n" , b++);  //얘는 다음 문장에 더한 값을 넘겨줌
    // printf(" b : %d\n" , b);


    // printf("Hello World %d\n" , i++ );
    // int i = 1;
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );
    // printf("Hello World %d\n" , i++ );

    //반복문
    //for , while , do while

    //for(선언; 조건; 증감) {}
    // for( int i = 1; i <=10; i++){
    //     printf("HelloWorld! %d\n" , i);
    // }

    //while(조건) {}
    // int i = 1;
    // while (i <= 10)
    // {
    //    printf("HelloWorld %d\n" , i++);
    // }


    //do {} while(조건);

    // int i = 1;
    // do{
    //     printf("HelloWorld! %d\n" , i++);
        
    // }while( i <= 10);



    //2중 반복문

    // for( int i =1; i<=3; i++){
    //     printf("첫번째 반복문 :%d\n", i);

    //     for(int j = 1; j<=5; j++){
    //          printf("       두번째 반복문 :%d\n", j);
    //     }
    // }


    //구구단
    // for( int i =2; i<=9; i++){
        
    //     printf("===%d 단 계산===\n" , i);

    //     for(int j = 1; j <=9; j++){
    //         printf("    %d x %d = %d\n" , i , j , i*j);
    //     }
    // }


    /*
    이중반복문
    *
    **
    ***
    ****
    *****
    */

//    for( int i = 0; i < 5; i++){
//         for(int j = 0; j <= i; j++){
//             printf("*");
//         }
//         printf("\n");
//    }

   /*
    이중반복문 거꾸로
        *
       **
      ***
     ****
    *****
    */

//    for(int i = 0; i < 5; i++){

//     for( int j = i; j < 5-1; j++){
//         printf(" ");
//     }
//     for (int k = 0; k <= i; k++){
//         printf("*");
//     }
//     printf("\n");

//    }


    //피라미드를 쌓아라

/*
    *1
   ***3
  *****5
 *******7
*********9

*/

    int floor;
    printf("몇층?");
    scanf("%d" , &floor);

    for ( int i = 0; i < floor; i++){
        for(int j = i; j < floor-1; j++){
            printf(" ");
        }

        for(int k = 0; k < i * 2 + 1; k++){     //각 층마다 이전 층의 숫자 x2 에 +1 값 만큼 증가함
            printf("*");
        }

        printf("\n");

    }





    return 0;
}