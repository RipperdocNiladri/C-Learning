#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18 && age <= 60) // && is AND operator ( Both conditions must be true for the overall condition to be true)
    {
        printf("You are eligible for the job.\n");
    }
    else
    {
        printf("You are not eligible for the job.\n");
    }

    return 0;
}