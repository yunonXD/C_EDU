#include<stdio.h>

int main(int argc, char *argv[]){

    FILE *fp = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\Simple.txt" ,"wt");
    if(fp = NULL){
        puts("file open fail.");
        return -1;
    }

    fputc('A' , fp);
    fputc('B' , fp);

    fputs("Yeet Test Txt \n", fp);
    fputs("Yoingk super yeet \n", fp);
    fclose(fp);

    FILE *ffp = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\Simple.txt" ,"rt");
    if(ffp = NULL){
        puts("file open fail.");
        return -1;
    }
    char str[30];
    int ch=0;
    ch = fgetc(fp);
    printf("%c \n", ch);
    ch = fgetc(fp);
    printf("%c \n", ch);

    fgets(str , sizeof(str),ffp);
    printf("%s , str");
    fgets(str, sizeof(str),ffp);
    printf("%s",str);
    
    fclose(ffp);


    return 0;
}