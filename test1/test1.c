#include <stdio.h>

// It's function declaration.
int print(int x, int y);
// int print1(int x, int y);

int main(int argc, char *argv[]) {
    int nam, num, number;
    printf("Enter: ");
    scanf("%d", &nam);
    printf("Number: ");
    scanf("%d", &num);
    number= print(nam, num);
    printf("Your sum is: %d\n", number);
    return 0;
}

// print() is a function. "void" is (a function type) for !output() this function.
int print(int x, int y) {
    return x + y;
}

// int print1(int x, int y) {
//     printf("India\n");
// }