#include <stdio.h>



int main(int argc, char *argv[]) {
    char name[100];
    int i;
    scanf("%[^\n]s", name);
    for (i = 1; i <= 10; i++) {

        printf("%d: %s\n", i, name);
    }
    return 0;
}