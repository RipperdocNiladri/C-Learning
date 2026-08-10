#include <stdio.h>

int main()
{
    int a = 10;
    int b = a++;

    // b gets 10
    // then a becomes 11

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    int c = 10;
    int d = c--;

    // d gets 10
    // then c becomes 9

    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}