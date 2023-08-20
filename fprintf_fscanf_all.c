#include<stdio.h>

typedef struct{
    char name[10];
    char gender;
    int age;
}Friend;


int main(int argc, char* argv[]){

    FILE *fp;
    Friend myfren1;
    Friend myfren2;

    //===Write===//
    fp = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\friend.bin", "wb");
    printf(" name, gender, age input : ");
    scanf("%s %c %d", myfren1.name, &(myfren1.gender), &(myfren1.age));
    fwrite((void*)&myfren1 , sizeof(myfren1), 1, fp);       //15바이트 전체 한번에 구조체 변수 저장 및 쓰기
    fclose(fp);

    //===Read===//
    fp = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\friend.bin", "rb");
    fread((void*)&myfren2 , sizeof(myfren2), 1, fp);        //15바이트 (바이너리)통째로 구조체 변수 복원 (read 는 정해진 길이만큼 꼭 가져와야함)
    printf("%s %c %d \n", myfren2.name, myfren2.gender, myfren2.age);
    fclose(fp);

    return 0;
}