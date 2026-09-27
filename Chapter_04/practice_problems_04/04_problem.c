// Write a program to print multiplication table of a given number n.
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Multiplication Table of %d:\n", n);
    for (int i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}