#include<stdio.h>

//비밀번호 입력받아서 
//비번이 맞다면 일기 불러와서 작성
//비번이 틀리면 메시지와 같이 종료

#define MAX 10000

int main(void){

    //fgets fputs 활용
    char line[MAX]; //파일 불러올 내용을 저장할 변수
    char contents[MAX]; //일기장 입력 
    char password[20]; // 비번
    char c; // 비번 입력 시 키값 확인(마스킹)

    printf("비밀일기. \n");
    printf("비번 입력 요망 : ");


    //getchar() / getch() 차이?
    //getchar() 는 엔터 입력 필요
    //getch() 는 키 입력 모두 동작.
    int i =0;
    while(1){
        c = getch();
        if(c ==13){  // == enter 입력시 비번 입력 종료
            password[i] = '\0';
            break;
        }
        else{
            printf("*");
            password[i] = c;
        }
        i++;
    }

    //비밀번호 : 아잉3050
    printf("\n\n 비번 확인중 \n\n");
    if(strcmp(password, "dkdld3050") == 0){  //비번일치
        printf("====비번일치 확인====\n\n");
        char *fileName = "c:\\Modding\\secretdiary.txt";
        FILE *file = fopen(fileName, "a+b");    //파일 없으면 생성 있으면 append
        if(file == NULL){
            printf("파일 열기 실패");
            return 1;
        }

        while(fgets(line, MAX , file) != NULL){
            printf("%s" , line);
        }

        printf("\n\n 내용을 작성. 종료 필요시 exit 입력\n\n");

        while (1){
            scanf("%[^\n]",contents);       //새 줄 (\n) 이 나오기 전까지 읽어드림 (한문장씩저장)
            getchar();      // Flush 처리 (엔터)

            if(strcmp(contents, "exit") == 0 || strcmp(contents, "EXIT") == 0 ){
                printf("비밀일기 입력 종료 \n\n");
                break;
            }
            fputs(contents , file);
            fputs("\n" , file);     //enter 를 위해 무시 처리 했으니 임의로 추가
        }
        fclose(file);
    }
    else{       //비번 오답
        printf(" == 비번 오답 ==\n\n");

    }
    return 0;
}