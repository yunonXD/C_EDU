#include<stdio.h>


//ftell
//현재 파일 위치정보를 반환
//long ftell(FILE * stream);

int main(int argc, char *argvp[]){

    long fpos = 0;

    FILE * fp = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\ftell.txt","wt");
    fputs("1234-",fp);
    fclose(fp);

    //===file open===//
    fp = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\ftell.txt","rt");
    for(int i =0; i <4; i++){
        putchar(fgetc(fp));             
        fpos = ftell(fp);               //save cur location save "2"
        fseek(fp, -1, SEEK_END);        //move end pos to -1    1 2 3 4 (-) e
        putchar(fgetc(fp));             //                      1 2 3 4 - (e)
        fseek(fp, fpos, SEEK_SET);      //restore location      1 (2) 3 4 - e

        //1 출력 후 맨 끝으로 옯겨서 - 출력
        //2 출력후 맨 끝으로 옮겨서 - 출력 ... 반복하는 문장.
    }
    fclose(fp);
    return 0;
}