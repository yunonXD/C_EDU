#include<stdio.h>

//파일 위치 지시자
//파일 위치 지시자의 참조 위치를 변경시키는 함수

//int fseek(FILE *stream, long offset, int wherefrom);
//성공할시 0 실패할시 0 이 아닌 값을 return
//SEEK_SET      맨 앞 위치
//SEEK_CUR      현재 위치
//SEEK_END      맨 끝 위치. 단, 해당 위치는 EOF 를 의미함.
// -1 < 앞으로 1칸 <--
// 1 < 뒤로 1칸 -->

int main(int argc, char *argv[]){

    FILE *fp = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\fseek.txt", "wt");
    fputs("123456789",fp);
    fclose(fp);

    //===file open===//
    fp = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\fseek.txt", "rt");

    //===SEEK_END===//
    fseek(fp, -2, SEEK_END);        //1 2 3 4 5 6 7 (8) 9 e
    putchar(fgetc(fp));              //1 2 3 4 5 6 7 8 (9) e why? 읽었으면 다음으로 이동하니까!

    //===SEEK_SET===//
    fseek(fp, 2, SEEK_SET);         //1 2 (3) 4 5 6 7 8 9 e
    putchar(fgetc(fp));             //1 2 3 (4) 5 6 7 8 9 e

    //===SEEK_CUR===//
    fseek(fp, 2, SEEK_CUR);         //1 2 3 4 5 (6) 7 8 9 e
    putchar(fgetc(fp));             //1 2 3 4 5 6 (7) 8 9 e

    fclose(fp);
    return 0;
}