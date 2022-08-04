#include <stdio.h>

float temp(int x);
float temp2(int x);
float temp3(int x);
float temp4(int x);
float temp5(int x);
float temp6(int x);



int main(int argc, char *argv[]) {
    float n;
    char c;
    printf("Enter character: ");
    scanf("%c", &c);
    printf("Enter number: ");
    scanf("%f", &n);
    if (c == 'c') {
        printf("Fahrenheit: %0.3f\n", temp(n));
        printf("Kelvin: %0.3f", temp2(n));
    }
    else if (c == 'f') {

    }
    
    return 0;
}

//Celsius to Fahrenheit

float temp(int x) {
    float tem= x * 1.8 + 32;
    return tem;
}

//Celsius to Kelvin

float temp2(int x) {
    float tem= x + 273.15;
    return tem;    
}

//Fahrenheit to Celsius

float temp2(int x) {
    float tem= (x - 32) * 1.8;
    return tem;    
}

//Fahrenheit to Kelvin

float temp2(int x) {
    float tem= (x - 32) * 1.8 + 273.15;
    return tem;    
}

//kelvin to celsius