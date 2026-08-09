// Write a program to determine whether a student has passed or failed.
// To pass, a student requires a total of 40% and at least 33% in each subject.
// Assume there are 3 subjects and take the marks as input from the user.

#include <stdio.h>

int main() {
    int A, B, C;
    printf("Enter your marks out of 100 for three subjects:\n");
    printf("subject A: ");
    scanf("%d", &A);
    printf("subject B: ");
    scanf("%d", &B);
    printf("subject C: ");
    scanf("%d", &C);

    int total = A + B + C;
    float percentage = (total / 300.0) * 100;

    if (percentage >= 40 && A >= 33 && B >= 33 && C >= 33)
    {
        printf("Congratulations! You have passed.\n");
    }
    else
    {
        printf("Sorry! You have failed. Better luck next time.\n");
    }
    return 0;
}