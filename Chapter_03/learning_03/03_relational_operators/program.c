#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;

    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);

    // 10 > 20 → 0 (false) 
    // 10 < 20 → 1 (true) 
    // 10 >= 20 → 0 (false) 
    // 10 <= 20 → 1 (true) 
    // 10 == 20 → 0 (false) 
    // 10 != 20 → 1 (true)

    return 0;
}