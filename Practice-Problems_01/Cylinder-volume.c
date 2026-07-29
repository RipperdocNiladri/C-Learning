#include <stdio.h>

int main() {
    float radius, height, volume, LSA, TSA;
    const float PI = 3.14;

    printf("Enter the radius of your cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of your cylinder: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;
    printf("Volume of your cylinder is: %.2f\n", volume);

    LSA = 2 * PI * radius * height;
    printf("Lateral Surface Area of your cylinder is: %.2f\n", LSA);

    TSA = 2 * PI *radius * (radius + height);
    printf("Total Surface Area of your cylinder is: %.2f\n", TSA);

    return 0;
}