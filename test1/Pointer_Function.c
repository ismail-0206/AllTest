#include <stdio.h>

void square0(int n);
void square(int *n);

int main(int argc, char *argv[]) {
    int num;
    printf("Enter number 1st: ");
    scanf("%d", &num);
    square0(num);
    printf("%d\n", num);   

    int num1;
    printf("Enter number 2nd: ");
    scanf("%d", &num1);
    square(&num1);
    printf("%d\n", num1);
    return 0;
}

void square0(int n) {
    n = n * n;
    printf("%d\n", n);
}

void square(int *n) {
    *n = (*n) * (*n);
    printf("%d\n", *n);
}