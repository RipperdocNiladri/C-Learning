#include <stdio.h>

int main() {
    int a = 2, b = 5;
    float c = 4.0, d = 3.6;

    printf("The quotient when %d is divided by %d is %d\n", b, a, b/a); // int and int = int
    printf("The quotient when %.2f is divided by %.2f is %.2f\n", c, d, c/d); // float and float = float
    printf("The quotient when %d is divided by %.2f is %.2f\n", b, d, b/d); // int and float = float
    printf("The quotient when %.2f is divided by %d is %.2f\n", c, a, c/a); // float and int = float

    int x = 5.8;
    printf("The value of x is %d\n", x); // float to int conversion, decimal part is truncated

    float y = 5;
    printf("The value of y is %.2f\n", y); // int to float conversion, decimal part is added as .00

    return 0;
}