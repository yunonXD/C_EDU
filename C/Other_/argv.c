#include<stdio.h>

//char **argv
void ShowAllString(int argc, char *argv[]){
    for(int i = 0; i<argc; i++)
        printf("%s \n" , argv[i]);
}


int main(void){

    char *str[3] = {

        "C Programming",
        "C ++ Programming",
        "NO JACA ZONE"
    };
    ShowAllString(3,str);



    return 0;
}