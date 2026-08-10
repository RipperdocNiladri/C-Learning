// Write a C program to swap two numbers without using a temporary variable.
#include <stdio.h>

int main()
{
     int a, b;
     printf("enter the value of a: ");
     scanf("%d", &a);
     printf("enter the value of b: ");
     scanf("%d", &b);

     printf("So a=%d, b=%d\n", a, b);

     // Swapping logic
     a = a + b;
     b = a - b;
     a = a - b;

     printf("Swapped a=%d, b=%d\n", a, b);

     return 0;
}