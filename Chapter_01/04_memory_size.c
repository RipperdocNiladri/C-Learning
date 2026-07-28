#include <stdio.h>

int main() {
    printf("Size of int = %zu bytes\n", sizeof(int));
    printf("Size of float = %zu bytes\n", sizeof(float));
    printf("Size of char = %zu bytes\n", sizeof(char));
    printf("Size of double = %zu bytes\n", sizeof(double));
    printf("Size of long = %zu bytes\n", sizeof(long));
    printf("Size of short = %zu bytes\n", sizeof(short));

    return 0;
}