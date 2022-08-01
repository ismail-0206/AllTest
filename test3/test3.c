#include <stdio.h>

int main(int argc, char *argv[]) {
    int q,w,e,r,t;
    printf("Enter: ");
    scanf("%d", &r);
    e=1;
    r=r;
    while (e<=r) {
        printf("Enter number of digits: ");
        scanf("%d", &q);

        printf("Enter number of digits: ");
        scanf("%d", &w);

        printf("%d + %d = %d\n", q, w, q+w);
        printf("%d + %d = %d\n", q, w, q-w);
        printf("%d + %d = %d\n", q, w, q*w);
        printf("%d + %d = %d\n", q, w, q/w);
        e++;
}
    return 0;
}