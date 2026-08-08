#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age%2==0)
    {
        printf("Your age is even.\n");
    }
    else
    {
        printf("Your age is odd.\n");
    }
    return 0;
}