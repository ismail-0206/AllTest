#include <stdio.h>

int main(int argc, char *argv[]) {
    char normal[80], revers[80];
    int i, j, len;

    printf("Enter a String: ");
    scanf("%s", normal);

    len=strlen(normal);

    for (i=0, j=len-1; i<len; i++, j--) {

        revers[i]=normal[j];
    
    }
    revers[i]='\0';
    printf("%s\n", revers);
    if (0 == strcmp(normal, revers)) {
        printf("%s is a palindrome.\n", normal);
    }
    else {
        printf("%s is not a palindrome.\n", normal);
    }

    return 0;
}