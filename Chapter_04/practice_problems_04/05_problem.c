// Write a program to print multiplication table of 10 in reversed order.
#include <stdio.h>

int main() {
    int num = 10;
    printf("Reverse Multiplication Table of 10:\n");
    for (int i = 10; i >= 1; i--) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
