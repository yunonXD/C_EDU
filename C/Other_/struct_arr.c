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
        printf("��ǥ �Է�: ");
        scanf("%d %d",&arr[i].xpos, &arr[i].ypos );
    }

    for(int i =0; i<3;i++){
        printf("[%d,%d] ",arr[i].xpos,arr[i].ypos );
    }

    printf("\n\n\n");

    struct person arr1[3] = {
        {"������","111-1111-1111",10},
        {"�󸶹�","222-2222-2222",20},
        {"�����","333-3333-3333",30}
    };

    for(int i =0; i<3; i++){
        printf("%s %s %d \n" , arr1[i].name, arr1[i].phoneNum, arr1[i].age );
    }

    



    return 0;
}