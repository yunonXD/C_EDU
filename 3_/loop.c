#include<stdio.h>

int main(void){

    //printf("����");



    //++ ������
    // int a = 10;
    // printf("a : %d\n" ,a);
    // a++;
    // printf("a : %d\n" ,a);


    // int b = 20;
    // printf(" b : %d\n" , ++b);  //b = b + 1
    // printf(" b : %d\n" , b++);  //��� ���� ���忡 ���� ���� �Ѱ���
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

    //�ݺ���
    //for , while , do while

    //for(����; ����; ����) {}
    // for( int i = 1; i <=10; i++){
    //     printf("HelloWorld! %d\n" , i);
    // }

    //while(����) {}
    // int i = 1;
    // while (i <= 10)
    // {
    //    printf("HelloWorld %d\n" , i++);
    // }


    //do {} while(����);

    // int i = 1;
    // do{
    //     printf("HelloWorld! %d\n" , i++);
        
    // }while( i <= 10);



    //2�� �ݺ���

    // for( int i =1; i<=3; i++){
    //     printf("ù��° �ݺ��� :%d\n", i);

    //     for(int j = 1; j<=5; j++){
    //          printf("       �ι�° �ݺ��� :%d\n", j);
    //     }
    // }


    //������
    // for( int i =2; i<=9; i++){
        
    //     printf("===%d �� ���===\n" , i);

    //     for(int j = 1; j <=9; j++){
    //         printf("    %d x %d = %d\n" , i , j , i*j);
    //     }
    // }


    /*
    ���߹ݺ���
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
    ���߹ݺ��� �Ųٷ�
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


    //�Ƕ�̵带 �׾ƶ�

/*
    *1
   ***3
  *****5
 *******7
*********9

*/

    int floor;
    printf("����?");
    scanf("%d" , &floor);

    for ( int i = 0; i < floor; i++){
        for(int j = i; j < floor-1; j++){
            printf(" ");
        }

        for(int k = 0; k < i * 2 + 1; k++){     //�� ������ ���� ���� ���� x2 �� +1 �� ��ŭ ������
            printf("*");
        }

        printf("\n");

    }





    return 0;
}