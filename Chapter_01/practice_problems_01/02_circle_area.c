#include <stdio.h>

int main() {
    float radius, area, circumference, diameter;
    const float PI = 3.14;

    printf("Enter the radius of your circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("Area of your circle is: %.2f\n", area);

    circumference = 2 * PI * radius;
    printf("Circumference of your circle is: %.2f\n", circumference);

    diameter = 2 * radius;
    printf("Diameter of your circle is: %.2f\n", diameter);

    return 0;
}