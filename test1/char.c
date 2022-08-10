#include <stdio.h>

void loop(char l[]);

int main(int argc, char *argv[]) {
    char i[]="Ismail ";
    char j[]="Hossain";
    loop(i);
    loop(j);

    return 0;
}

void loop(char l[]) {
    for (int i=0; l[i] != '\0'; i++) {
        printf("%c", l[i]);
    }
}