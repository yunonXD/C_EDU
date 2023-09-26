#include<stdio.h>

//연관 있는 데이터를 하나로 묶을 수 있는 자료형 정의 가능
// 연관 있는 데이터 묶으면 데이터의 표현 및 관리가 용이해짐
// 테이터 표현 및 관리가 용이해지면 합리적인 코드 작성 가능
// 유사 객체지향


typedef struct student{

    char name[20];
    char stdnum[20];
    char school[20];
    char major[20];
    int year;

}Student;

void ShowStudentInfo(Student *sptr){
    printf("학생 이름 : %s \n" , sptr ->name);
    printf("학생 고유번호 : %s \n" , sptr ->stdnum);
    printf("학교 : %s \n" , sptr ->school);
    printf("전공 : %s \n" , sptr ->major);
    printf("학년 : %d \n" , sptr ->year);
}

int main(int argc, char *argv[]){

    Student arr[7];

    for(int i = 0; i<1; i++){
        printf("이름 : "); scanf("%s",arr[i].name);
        printf("번호 : "); scanf("%s",arr[i].stdnum);
        printf("학교 : "); scanf("%s",arr[i].school);
        printf("전공 : "); scanf("%s",arr[i].major);
        printf("학년 : "); scanf("%d",&arr[i].year);
    }

    for(int i=0; i<1; i++){
        ShowStudentInfo(&arr[i]);
    }

    return 0;
}