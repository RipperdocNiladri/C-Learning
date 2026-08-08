#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (!(age <= 18)) // ! is NOT operator ( If the condition is true, then the overall condition will be false and vice versa)
    {
        printf("You are eligible for the job.\n");
    }
    else
    {
        printf("You are not eligible for the job.\n");
    }
    return 0;
}