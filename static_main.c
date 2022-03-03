#include <stdio.h>
#include "matrix_static.h"
#include "matrix_static.c"

int main(){

    static T data[] = {1,2,3,4,5,6,7,8,9};
    matrix a,b;


    a = create_initvals(3,3,data);
    b = create_empty(3,3);
    
    equate(&a,&b);
    printf("\n Matrix a:");

    matrix_print(a);
    printf("\n Matrix b:");

    matrix_print(b);
    printf("\n a+b:");

    matrix_print(add(a,b));

}

    
