#include <stdio.h>

float tempCF(int x);
float tempCK(int x);

float tempFC(int x);
float tempFK(int x);

float tempKC(int x);
float tempKF(int x);



int main(int argc, char *argv[]) {
    float n;
    char c;
    printf("Enter character: ");
    scanf("%c", &c);
    printf("Enter number: ");
    scanf("%f", &n);
    if (c == 'c') {
        printf("Fahrenheit: %0.3f\n", tempCF(n));
        printf("Kelvin: %0.3f", tempCK(n));
    }
    else if (c == 'f') {
        printf("Celsius: %0.3f\n", tempFC(n));
        printf("Kelvin: %0.3f", tempFK(n));
    }
    else if (c == 'k') {
        printf("Celsius: %0.3f\n", tempKC(n));
        printf("Fahrenheit: %0.3f", tempKF(n));
    }
    
    return 0;
}

//Celsius to Fahrenheit

float tempCF(int x) {
    float tem= x * 9/5 + 32;
    return tem;
}

//Celsius to Kelvin

float tempCK(int x) {
    float tem= x + 273.15;
    return tem;    
}


//Fahrenheit to Celsius

float tempFC(int x) {
    float tem= (x - 32) * 5/9;
    return tem;    
}

//Fahrenheit to Kelvin

float tempFK(int x) {
    float tem= (x - 32) * 5/9 + 273.15;
    return tem;    
}


//kelvin to celsius

float tempKC(int x) {
    float tem= x - 273.15;
    return tem;    
}

//kelvin to Fahrenheit

float tempKF(int x) {
    float tem= (x - 273.15) * 9/5 + 32;
    return tem;    
}