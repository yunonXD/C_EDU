#include<stdio.h>

//feof 파일의 끝에 도달한 경우 0이 아닌 값을 return END OF FILE

int main(int argc, char *argv[]){

    FILE *src = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\src.txt","rt");
    FILE *des = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\src.txt","wt");
    char str[20];

    if(src == NULL || des == NULL){
        puts("no txt in there");
        return -1;
    }

    while(fgets(str, sizeof(str), src) != NULL)
        fputs(str,des);

    if(feof(src)!=0)
        puts("file copy l");
    else
        puts("file copy fail");

    fclose(src);
    fclose(des);

    return 0;
}