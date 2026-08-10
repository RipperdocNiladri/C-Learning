#include <stdio.h>

int main() {
    // for (initialization; condition; increment)
    for (int i = 1; i <= 10; i++) 
    {
        printf("%d\n", i);
    }

    for (int j = 1; j <= 5; j++)
        {
            printf("-");
        }
    printf("\n");

    // for (initialization; condition; decrement)
    for (int i = 10; i > 0; i--) 
    {
        printf("%d\n", i);
    }
    return 0;
}