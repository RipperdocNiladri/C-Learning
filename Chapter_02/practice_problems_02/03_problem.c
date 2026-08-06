#include <stdio.h>

int main() {
     int a, b, c;
     printf("enter the value of a: ");
     scanf("%d", &a);
     printf("enter the value of b: ");
     scanf("%d", &b);
     
     printf("So a=%d, b=%d\n", a, b);
     
     // Swapping logic
     c = a;
     a = b;
     b = c;
     
     printf("Swapped a=%d, b=%d\n", a, b);
    
     return 0;

}