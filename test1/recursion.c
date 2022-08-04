#include <stdio.h>

int recursion(int x);

int main(int argc, char *argv[]) {
    int num;
    printf("Enter: ");
    scanf("%d", &num);
    printf("Your factorial is: %d\n",recursion(num));
    return 0;
}

int recursion(int x) {
    if (x == 0) {
        return 1;
    }
    int recur=recursion(x-1);//     5, 4, 3, 2, 1, 0
    int rec=recur * x; //           20, 12, 6, 2, 1
    return rec;
}