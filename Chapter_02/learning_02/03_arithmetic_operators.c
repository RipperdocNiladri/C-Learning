#include <stdio.h>

int main() {
    int x = 9, y = 5;
    
    printf("The sum of %d and %d is %d\n", x, y, x + y);

    printf("The difference between %d and %d is %d\n", x, y, x - y);

    printf("The product of %d and %d is %d\n", x, y, x * y);

    printf("The quotient when %d is divided by %d is %d\n", x, y, x / y);

    printf("The remainder when %d is divided by %d is %d\n", x, y, x%y);

    // % is the moduler division operator which gives the remainder of a division operation.
    // % sign can't be used with float or double data types.
    // sign is same as of numerator (-5%2= -1)
    int i = -17, h = 3;
    float m = i / (float)h;
    float n = (float)(i % h);
    printf("The quotient when %d is divided by %d is %.2f\n", i, h, m);
    printf("The remainder when %d is divided by %d is %.2f\n", i, h, n);

    return 0;
}