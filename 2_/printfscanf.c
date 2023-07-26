#include<stdio.h>

int main(void){

    //정수형 변수에 대한 예제
    // int m_age = 12;
    // printf("%d \n" , m_age);

    // m_age = 14;
    // printf("%d \n" , m_age);


    //실수형 변수에 대한 예제
    // float m_f = 45.4f;
    // printf("%.2f\n" , m_f);

    // double m_d = 4.425;
    // printf("%.2lf" , m_d );

    //상수. 변하지 않는 수
    // const int Year = 2000;
    // printf("태어난 년도 : %d" , Year);
    //Year = 2001;


    //printf
    //연산

    // int add = 3 + 7; // 10

    // printf ( " 3 + 7  = %d\n" , add);

    // printf ("%d + %d = %d \n" , 3, 7, 3 + 7);
    

    //scanf
    //키보드 입력을 받아서 저장

    // int input = 0;
    // printf ("값을 입력하세요 : ");
    // scanf("%d" , &input);

    // printf("입력값 : %d\n" , input);


    // int one, two, three;
    // printf(" 3개의 정수 입력 : ");

    // scanf("%d %d %d" , &one, &two , &three);

    // printf("첫번째 값 : %d \n" , one);
    // printf("두번째 값 : %d \n" , two);
    // printf("세번째 값 : %d \n" , three);

    //문자(한글자) , 문자열(한글자 이상의 여러글자)
    // char c = 'A';
    // printf("%c\n" , c);

    //char str[256];
    //scanf("%s" , str ,sizeof(str));     //sizeof(str) << 해당 문자열 크기로 입력하지 않도록 보험처리
    //printf("%s\n" , str);

    //프로젝트
    //경찰이 범죄자의 정보를 입수 조서작성
    //이름 나이 몸무게 키 범죄명

    char name[256];
    printf ("이름이 뭔가");
    scanf("%s" , name, sizeof(name));

    int age;
    printf ("나이");
    scanf("%d" , &age);

    float weight;
    printf("몸무게");
    scanf("%f" , &weight);

    double height;
    printf("키");
    scanf("%lf" , &height);

    char what[256];
    printf("범죄명");
    scanf("%s" , what , sizeof(what));

    //출력
    printf("\n\n -- 범죄자 정보 -- \n\n");
    printf(" 이름   : %s\n" , name);
    printf(" 나이   : %d\n" , age);
    printf(" 몸무게 : %.2f\n" , weight);
    printf(" 키     : %.2lf\n" , height);
    printf(" 범죄   : %s\n" , what);

    return 0;
}