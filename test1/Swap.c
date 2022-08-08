#include <stdio.h>

void swap(int a, int b, int *sum, int *product, int *average);

int main(int argc, char *argv[]) {
    int i=5, j=6, sum, product, average;
    swap(i, j, &sum, &product, &average);
    printf("sum = %d\nproduct = %d\naverage = %d\n", sum, product, average);


}

void swap(int a, int b, int *sum, int *product, int *average) {
    *sum = a+b;
    *product = a*b;
    *average = (a*b)/2;
}