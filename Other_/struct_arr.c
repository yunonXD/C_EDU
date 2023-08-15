#include<stdio.h>

struct point{

    int xpos;
    int ypos;

};

struct person{
    
    char name[20];
    char phoneNum[20];
    int age;
};



int main(int argc, char *argv[]){

    struct point arr[3];

    for(int i =0; i<3; i++){
        printf("좌표 입력: ");
        scanf("%d %d",&arr[i].xpos, &arr[i].ypos );
    }

    for(int i =0; i<3;i++){
        printf("[%d,%d] ",arr[i].xpos,arr[i].ypos );
    }

    printf("\n\n\n");

    struct person arr1[3] = {
        {"가나다","111-1111-1111",10},
        {"라마바","222-2222-2222",20},
        {"사아자","333-3333-3333",30}
    };

    for(int i =0; i<3; i++){
        printf("%s %s %d \n" , arr1[i].name, arr1[i].phoneNum, arr1[i].age );
    }

    



    return 0;
}