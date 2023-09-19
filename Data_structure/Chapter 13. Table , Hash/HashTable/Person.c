#include"Person.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int GetSSN(Person *p){
    return p->ssn;
}

void ShowPerInfo(Person *p){
    printf("identi : %d\n" ,p->ssn);
    printf("name : %s\n" ,p->name);
    printf("addr : %s\n" ,p->addr);
}

Person *MakePersonData(int ssn ,char *name ,char *addr){
    Person *newp =(Person*)malloc(sizeof(Person));
    newp ->ssn = ssn;
    strcpy(newp ->name ,name);
    strcpy(newp ->addr ,addr);
    return newp;
}