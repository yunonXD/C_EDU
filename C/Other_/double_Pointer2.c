#include<stdio.h>

int main(void){


    //  Tdptr --> dptr --> ptr --> num(3.14)
    //          ptr2 --> num(3.14)
    //          Trptr2 --> num(3.14)

    double num = 3.14;
    double *ptr = &num;
    double **dptr = &ptr;
    double ***Tdptr = &dptr;

    double *ptr2 = 0;
    double *Tdptr2 = 0;

    printf("%9p %9p \n" , ptr, *dptr);
    printf("%9g %9g \n" , num, **dptr);
    printf("%9g %9g \n" , ***Tdptr, **dptr);

    ptr2 = *dptr; // == ptr2 = ptr
    *ptr2 = 10.99f;
    printf("%9g %9g \n" , num, **dptr);

    Tdptr2 = *Tdptr;    // Tdptr2 = dptr
    *Tdptr2 = 20.11f;
    printf("%9g %9g \n" , num, ***Tdptr);




    return 0;
}