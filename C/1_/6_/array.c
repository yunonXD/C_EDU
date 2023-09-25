#include<stdio.h>

int main(void){

    //배열
    // int subway_1 = 30; 
    // int subway_2 = 40;
    // int subway_3 = 50;

    // printf("지하철 1호차에 %d 명이 타고있습니다. \n" , subway_1);
    // printf("지하철 2호차에 %d 명이 타고있습니다. \n" , subway_2);
    // printf("지하철 3호차에 %d 명이 타고있습니다. \n" , subway_3);

    //여러 개의 변수를 함께, 동시에 새성
    // int subway_array[3];
    // subway_array[0] = 30;
    // subway_array[1] = 40;
    // subway_array[2] = 50;

    // for( int i =0; i<3; i++){
    //     printf("지하철 %d호차에 %d 명이 타고있습니다. \n", i + 1, subway_array[i]);
    // }

    //값 설정 방법
    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // for (int i =0; i<10; i++){
    //     printf("%d\n", arr[i]);
    // }

    // int arr[10];
    // for (int i =0; i<10; i++){
    //     printf("%d\n", arr[i]);
    // }

    //배열크기는항상상수로선언(직접)
    // int size = 10;
    // int arr[size];

    // int arr[10] = {1,2};        //다음 값부턴 0으로 초기화
    // for(int i = 0; i<10; i++){
    //     printf("%d\n", arr[i]);
    // }

    //int arr[] = {1,2}; // == arr[2]

    // float arr_f[5] = {1.0f, 2.0f, 3.0f};
    // for(int i = 0; i<5; i++){
    //      printf("%.2f\n", arr_f[i]);
    //  }

    //문자 vs 문자열
    // char c = 'A';
    // printf("%c\n", c);

    //문자열 끝에는 끝을 의미하는 NULL 문자가 포함 '\0' 이 들어가야함
    // char str[7] = "coding"; // [c][o][d][i][n][g] + [\0] << 필요
    // printf("%s\n",str);


    // char str[] = "coding";
    // // printf("%s\n", str);
    // // printf("%d\n", sizeof(str));

    // for(int i = 0; i< sizeof(str); i++){
    //     printf("%c\n", str[i]);
    // }

    // char kor[] = "아이우이";
    // printf("%s\n",  kor);
    // printf("%d\n", sizeof(kor));
    //영어< 한글자 1byte
    //한글 < 한글자 2byte
    //char크기 : 1byte

    // char c_array[7] = {'c', 'o' ,'d','i','n','g','\0'};
    // printf("%s\n",c_array);

    //이러면 null 문자가 알아서 들어감
    //char c_array[10] = {'c', 'o' ,'d','i','n','g'};
    // printf("%s\n", c_array);
    // for(int i =0; i < sizeof(c_array); i++){
    //     printf("%c\n", c_array[i]);
    // }

    //문자를 ASCII 코드로 변환
    //99 111 100 105 110 103
    // for(int i =0; i < sizeof(c_array); i++){
    //     printf("%d\n", c_array[i]);
    // }

    //문자열 입력받기 : 경찰서 조서 예제
    // char name[256];
    // printf("이름을 입력하세요 : ");
    // scanf("%s" , name , sizeof(name));
    // printf("%s\n", name);

    //ASCII 코드? : ANSI(미국표준협회) 에서 제시한 표준 코드 체계
    //7bit, 총 128개의 코드 (0~127)
    // a : 97 (문자 a 의 아스키코드 정수값)
    // A : 65
    // 0 : 48

    for (int i = 0; i< 128; i++){
        printf("아스키코드 정수 %d : %c\n" , i,i);
    }



    return 0;
}