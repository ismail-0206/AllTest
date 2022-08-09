#include <stdio.h>

int main() {
    int j[5];
    // Input
    for (int i = 0; i < 5; i++) {
        printf("Enter Number\n");
        scanf("%d", &j[i]);
    }
    // Output
    for (int i = 0; i < 5; i++) {
        printf("%d\t",j[i]);
    }    

    return 0;
}