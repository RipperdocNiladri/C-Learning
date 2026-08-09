// Calculate income tax paid by an employee to the government as per the slabs mentioned below:
// Income Slab	Tax
// 2.5L - 5.0L	5%
// 5.0L - 10.0L	20%
// Above 10.0L	30%
// Note that there is no tax below 2.5L (i.e. 0% tax). Take income amount as an input from the user.

#include <stdio.h>

int main() {
    float income;
    printf("Enter your income (in Lacs): ");
    scanf("%f", &income);

    float tax = 0.0;
    if (income > 10) {
        tax = (income - 10) * 0.30 + (5 * 0.20) + (2.5 * 0.05);
    } else if (income > 5) {
        tax = (income - 5) * 0.20 + (2.5 * 0.05);
    } else if (income > 2.5) {
        tax = (income - 2.5) * 0.05;
    }

    printf("The income tax to be paid is: %.3f Lacs\n", tax);

    return 0;
}