// The conditional operator (?:) is a shorthand form of the if-else statement.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even number\n", num) : printf("%d is odd number\n", num);
    return 0;
}