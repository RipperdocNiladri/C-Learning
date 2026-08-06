#include <stdio.h>

int main() {
    const float PI = 3.14159;
    float radius;

    printf("Enter sphere radius: ");
    scanf("%f", &radius);

    float volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("Volume of sphere is %.2f m^3\n", volume);
    
    float surface = 4.0 * PI * radius * radius;
    printf("Surface Area of the sphere is %.2f m^2\n", surface);

    return 0;
}