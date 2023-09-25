#include<stdio.h>

void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int *ptr);

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

    // //배열
    // int arr[3] = {5,10,15};
    // int *ptr = arr;
    // for(int i = 0; i< 3; i++){
    //     printf("배열 arr[%d] 의 값 : %d\n" ,i, arr[i]);
    // }

    // printf ("\n\n-----------------\n\n");

    //     for(int i = 0; i< 3; i++){
    //     printf("포인터 arr[%d] 의 값 : %d\n" ,i, ptr[i]);
    // }
    
    // printf ("\n\n-----------------\n\n");

    // ptr[0] = 100;
    // ptr[1] = 200;
    // ptr[2] = 300;
    // for(int i = 0; i< 3; i++){
    //     printf("배열 arr[%d] 의 값 : %d\n" ,i, *(arr + i));
    // }

    // printf ("\n\n-----------------\n\n");

    //     for(int i = 0; i< 3; i++){
    //     printf("포인터 arr[%d] 의 값 : %d\n" ,i, ptr[i]);
    // }
    // // *(arr + i ) == arr[i] 똑같은 표현
    // // arr == arr 배열의 첫번째 값의 주소와 동일함 == &arr[0]

    // printf("arr 의 값 : %d\n" , arr);
    // printf("arr[0] 의 주소 : %d\n" , &arr[0]);

    // printf ("arr 자체의 값이 가지는 주소의 실체 값 : %d\n", *arr); //*(arr +0)
    // printf("arr[0] 의 실제 값 : %d\n" , *&arr[0]);

    // //*& 별 엔퍼센트 같이 있으면? << 둘이 있으면 암것도 없는것과 다름이 없다.
    // //& 는 주소이며 *는 주소의 값. 붙으면 상쇄된다.


    //swap
    // int a = 10;
    // int b = 20;
    // printf(" a 의 주소 : %d\n" , &a);
    // printf(" b 의 주소 : %d\n" , &b);
    // //a 와 b 의 값을 바꾼다
    // printf("Swap 함수 전 => a : %d, b : %d\n" , a ,b);
    // swap(a,b);
    // printf("Swap 함수 후 => a : %d, b : %d\n" , a ,b);

    // //값에 의한 복사 (call by value) > 값만 복사한다는 의미

    // //주소값을 넘겨버리면?? 문제 없지 않을까??

    // printf("주소값 전달 전 => a : %d, b : %d\n" , a ,b);
    // swap_addr(&a,&b);
    // printf("주소값 전달 후 => a : %d, b : %d\n" , a ,b);

    //배열일때, arr2 -> 주소
    int arr2[3] = {10,20,30};
    //changeArray(arr2);
    changeArray(&arr2[0]);  //<< 결과 똑같음 왜냐? 배열은 "주소임"
    for (int i= 0; i < 3; i++){
        printf("%d\n" , arr2[i]);
    }

    //scanf 에서 & 를 붙이는 이유를 이제 알 수 있다


    return 0;
}

void swap(int a, int b){

    //printf("swap a 의 주소 : %d\n" , &a);
    //printf("swap b 의 주소 : %d\n" , &b);

    int temp = a;
    a = b;
    b = temp;
}

void swap_addr(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
    //printf("주소값 Swap 함수 후 => a : %d, b : %d\n" , *a ,*b);
}

void changeArray(int *ptr){
    ptr[2] = 50;
}