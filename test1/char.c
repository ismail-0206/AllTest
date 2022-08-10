#include <stdio.h>

void loop(char l[]);

int main() {
    char UnSafe[100], Safe[100];
    char i[]="Ismail ";
    char j[]="Hossain\n";
    loop(i);
    loop(j);

//**********************************
    printf("UnSafe format: ");
    gets(UnSafe);
    puts(UnSafe);
    printf("Safe format: ");
    fgets(Safe, 100, stdin);
    puts(Safe);
    return 0;
}

void loop(char l[]) {
    for (int i=0; l[i] != '\0'; i++) {
        printf("%c", l[i]);
    }
}