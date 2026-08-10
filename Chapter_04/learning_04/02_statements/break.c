#include <stdio.h>

int main() {
    for (int i = 1; i < 1000; i++) {
        printf("%d\n", i);
        if (i == 10) {
            break;
        }
    }
    return 0;
}