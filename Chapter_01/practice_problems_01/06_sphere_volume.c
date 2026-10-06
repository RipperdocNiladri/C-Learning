#include <stdio.h>

int main() {
    float radius, volume, surface;
    const float PI = 3.14159;

    printf("Enter sphere radius: ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * PI * radius * radius * radius;
    printf("Volume of sphere is %.2f m^3\n", volume);
    
    surface = 4.0 * PI * radius * radius;
    printf("Surface Area of the sphere is %.2f m^2\n", surface);

    return 0;
}