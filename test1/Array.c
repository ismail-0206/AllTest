#include <stdio.h>

void array(int j[], int n);
void array1(int j[], int n);

int main() {
    int n;
    int j[6];
    // Input
    for (int i = 0; i < 6; i++) {
        printf("Enter Number\n");
        scanf("%d", &j[i]);
    }
    printf("\n");
    // Reverse
    // for (int i = 0; i < 6/2; i++) {
    //     printf("%d\t",j[6-i-1]);
    // }

    array(j,6);
    array1(j,6);
    return 0;
}

void array(int j[], int n) {
    for (int i = 0; i < n/2; i++) {
        int f1=j[i];
        int f2=j[n-i-1];
        j[i]=f2;
        j[n-i-1]=f1;
    }
}

void array1(int j[], int n) {
    // Output
    for (int i = 0; i < 6; i++) {
        printf("%d\t",j[i]);
    }
}