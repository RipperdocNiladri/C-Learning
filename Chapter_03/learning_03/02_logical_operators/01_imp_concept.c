// In C, 0 means false, while any non-zero value means true.
// Logical operators produce 0 or 1 as their result.
#include <stdio.h>

int main()
{
    if (0)
    {
        printf("false");
    }
    if (5)
    {
        printf("true");
    }
    return 0;
}