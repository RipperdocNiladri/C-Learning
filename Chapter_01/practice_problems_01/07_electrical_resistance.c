#include <stdio.h>

int main() {
    float resistance, voltage, current;

    printf("Enter voltage (V): ");
    scanf("%f", &voltage);

    printf("Enter current (I): ");
    scanf("%f", &current);

    resistance = voltage / current;
    printf("Electrical Resistance (R) is: %.2f ohms\n", resistance);

    return 0;
}