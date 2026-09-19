// BMI Calculator

#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    return 0;
}