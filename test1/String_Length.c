#include <stdio.h>

int main(int argc, char *argv[]) {
    int a,b=10;
    printf("Enter a number: ");
    scanf("%d",&b);

    for (int a=0; a<b; a++) {
        printf("Your number b is: %d\n", a+=1);
    }

    return 0;
}