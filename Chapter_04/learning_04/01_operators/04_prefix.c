#include <stdio.h>

int main()
{
    int a = 10;
    int b = ++a;

    // a becomes 11
    // then b gets 11

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    int c = 10;
    int d = --c;

    // c becomes 9
    // then d gets 9

    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}