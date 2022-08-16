#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    char ii[4][10]={"Ismail","Rayhan","Yeasin","Azmain"};
    printf("Enter a Number: ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf(ii[0]);
        break;

    case 2:
        printf(ii[1]);
        break;

    case 3:
        printf(ii[2]);
        break;

    case 4:
        printf(ii[3]);
        break;

    default:
        printf("Invalid number\n");
        break;
    }


    return 0;
}