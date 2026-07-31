#include <stdio.h>

int main() {
    // Operator Precedence in C
    // 1st priority operators *,/,%
    // 2nd priority operators +,-
    // 3rd priority operators =

    int a = 2, b = 5;
    int c = 2*a - 9*b; // (2*2) - (9*5) = 4 - 45 = -41
    printf("c = %d\n", c);

    // Operator Associativity in C
    int m = 2, n = 5, d = 2;
    int e = m*n/d; // (m*n)/d = (2*5)/2 = 10/2 = 5
    printf("e = %d\n", e);
    
    int x = 8, y = 4, z = 2, f = x/y*z; // (x/y)*z = (8/4)*2 = 2*2 = 4
    printf("f = %d\n", f);
    
    int g = 5*x/3*y + 6*z; // ((5*x)/3)*y + (6*z) = ((5*8)/3)*4 + (6*2) = (40/3)*4 + 12 = 13*4 + 12 = 52 + 12 = 64
    printf("g = %d\n", g);

    // Use Parenthesis for better experience 😎
    return 0;
}