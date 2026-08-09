// Find the maximum of two numbers using the conditional operator.
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a :b;
    printf("The maximum number is: %d\n", max);

    return 0;
}