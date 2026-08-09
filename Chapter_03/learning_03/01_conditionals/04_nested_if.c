#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    int id;
    printf("Choose your room between 1 and 2: ");
    scanf("%d", &id);

    if (age >= 18)
    {
        if (id == 1)
        {
            printf("Enter room 1\n");
        }
        else if (id == 2)
        {
            printf("Enter room 2\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    else
    {
        printf("You are not allowed to enter\n");
    }
    return 0;
}