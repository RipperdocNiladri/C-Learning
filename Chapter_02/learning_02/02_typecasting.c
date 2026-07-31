#include <stdio.h>

int main() {
    int a;
    float b = 42.23;
    a = (int)b; // Typecasting float to int, decimal part is truncated
    printf("The value of a is %d\n", a);

    int c = 8;
    float d;
    d = (float)c; // Typecasting int to float, decimal part is added as .00
    printf("The value of d is %f\n", d);

    return 0;
} 