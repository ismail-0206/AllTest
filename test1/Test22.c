#include <stdio.h>

int even(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i%2 != 0) {
            printf("%d\n", i);
        }
    }




    return 0;
}

int even(int n) {
    for (int i =0; i < n; i++) {
        if (i%2 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}