#include<stdio.h>

//End of File
int main(int argc,char *argv[]){

    while(1){
        int ch = getchar();
        if(ch == EOF)
            break;
        putchar(ch);
    }
    

    return 0;
}

//fgetc EOF? 
//키보드 에서 윈도우 기준 Ctrl + Z 입력 시 EOF 반환
// 리눅스는 Ctrl + D