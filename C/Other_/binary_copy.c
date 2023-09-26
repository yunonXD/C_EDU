#include<stdio.h>

int main(int argc, char *argv[]){

    FILE *src = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\src.bin", "rb");
    FILE *des = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\dst.bin", "wb");

    char buf[20];
    int readCnt;

    if(src == NULL || des == NULL){
        puts("binary open fail.");
        return -1;
    }

    while(1){

        readCnt = fread((void*)buf, 1, sizeof(buf),src);
        if(readCnt<sizeof(buf)){
            if( (feof(src)!=0) ){
                fwrite((void*)buf, 1,readCnt,des);
                puts("copt complete,");
                break;
            }
            else{
                puts("file copy fail");
            }
               
            break;
        }

        fwrite((void*)buf ,1 , sizeof(buf),des);
    }

    fclose(src);
    fclose(des);
    return 0;
}