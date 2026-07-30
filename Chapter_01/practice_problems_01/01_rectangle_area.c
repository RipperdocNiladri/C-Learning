#include <stdio.h>

int main() {
    int length, breadth, area;

    printf("Enter the length of your rectangle:");
    scanf("%d", &length);

    printf("Enter the breadth of your rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    printf("The area of your rectangle is: %d\n", area);
    return 0;
}