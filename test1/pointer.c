#include <stdio.h>

int main(int argc, char *argv[]) {

// "*" It's for Values. "&" It's for Variable Address.

// Pointer to the Variable. 
    int i=567;
    int *j= &i;
    int j1= *j;

// %p is a format specifier for the Variable.

    printf("%p\n",&i); // Address of i
    printf("%p\n",&j); // Address of j
    printf("%p\n",&j1); // Address of j1
    printf("\n");
    printf("\n");



    int i2=567;
    int j2= i2;
    int j12= j2;
    printf("%d\n",j12);

// pointer to pointer the Variable.
    int i32=56;
    int *j32= &i32;
    int **j123= &j32;
    printf("%d\n",*j32);

    return 0;
}