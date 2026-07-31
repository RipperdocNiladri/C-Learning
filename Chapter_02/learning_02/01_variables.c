#include <stdio.h>

int main() {
    int i = 10, p = 2;
    float j = i;
    int a, b, c, d;
    a = b = c = d = 20;
    printf("The value of i is %d and value of j is %.2f\n", i, j);
    int j1 = p + j - i;
    printf("The value of j1 is %d\n", j1);
    printf("The value of a is %d, b is %d, c is %d, and d is %d\n", a, b, c, d);
    return 0;
}