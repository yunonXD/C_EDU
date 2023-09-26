#include<stdio.h>


int main(int argc,char *argv[]){

    char str[7];

    for(int i =0; i<3; i++){
        fgets(str, sizeof(str) , stdin);
        printf("Read %d : %s \n", i+1 , str); //<<개행도 입력됨
    }
    

    return 0;
}