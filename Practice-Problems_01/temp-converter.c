#include <stdio.h>

int main() {
    float C, F;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);
    F = (C * (9.0/5.0)) + 32;
    printf("The temperature in Fahrenheit is; %.2f\n", F);
    return 0;
}