#include <stdio.h>

int main()
{
    printf("Wheather your number is divisible by 7 or not\n");
    int a;
    printf("Enter your number: ");
    scanf("%d", &a);
    printf("The remainder when %d is divided by 7 is %d\n", a, a % 7);
    // If the remainder is 0, then the number is divisible by 7
    return 0;
}