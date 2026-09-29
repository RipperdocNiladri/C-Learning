// Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main() {
    int num, i;
    int factorial = 1;
    printf("Enter a non-negative integer (0 to 12): ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } 
    else if (num > 12) {
        printf("Error: Input too large. Standard 'int' will overflow above 12.\n");
    } 
    else {
        for (i = 1; i <= num; ++i) {
            factorial *= i; 
        }
        printf("Factorial of %d = %d\n", num, factorial);
    }
    return 0;
}

