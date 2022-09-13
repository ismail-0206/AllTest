#include <stdio.h>



int main(int argc, char *argv[]) {
    char ban[100]={1,2,3} ;
    int i;

    for (i = 1; i <= 10; i++) {

        printf("%d: %s\n", i, ban);
    }
    return 0;
}