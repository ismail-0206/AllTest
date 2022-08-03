#include <stdio.h>
#include <math.h>

void numberTable(int number);

int main (int argc, char *argv[])   {
     int num, num1;
    printf("Enter a number: ");
    scanf("%d", &num);
    numberTable(num); //argument perameter / actual perameter.
    printf("Enter a number:\n");
    scanf("%d", &num1);
    printf("%lf\n", pow(num,2));
    return 0;
}

void numberTable(int number) {
    int i;
    for (i = 0; i <=10; i++) {
        printf("%d * %d = %d\n",i,number, i*number);
    }
}