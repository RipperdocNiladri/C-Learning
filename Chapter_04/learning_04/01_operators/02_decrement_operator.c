// The decrement operator (--) decreases a variable by 1.
// i--; is equivalent to: i = i - 1;

#include <stdio.h>

int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    i--; // You can also write it as: --i;

    printf("The decremented value is: %d", i);

    return 0;
}