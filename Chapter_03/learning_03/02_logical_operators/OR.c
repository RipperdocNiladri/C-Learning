#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 18 || age >= 60) // || is OR operator ( If any one of the condition is true, then the overall condition will be true)
    {
        printf("Your ticket is free.\n");
    }
    else
    {
        printf("You are not eligible for a free ticket.\n");
    }

    return 0;
}