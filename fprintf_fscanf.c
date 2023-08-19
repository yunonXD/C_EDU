#include<stdio.h>

int main(int argc, char *argv[]){

    char name[10];
    char gender;
    int age=0;

    FILE *fp = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\fprintfscanf.txt","wt");
    FILE *rfp = fopen("C:\\Users\\yyg\\Documents\\C_EDU\\OpenFolder\\fprintfscanf.txt","rt");

    for(int i =0; i<3; i++){
        printf("이름 성별 나이 입력");
        scanf("%s %c %d",name,&gender,&age);
        getchar();  //buffer clean (\n )

        fprintf(fp, "%s %c %d", name, gender, age);
    }

    while (1){
        int ret = fscanf( rfp , "%s %c %d", name, &gender , &age);
        if(ret == EOF)
            break;
        
        printf("%s %c %d",name, gender, age);
    }

    fclose(fp);
    fclose(rfp);

    return 0;
}