#include <stdio.h>

int main() {
    float bytes, kilobytes, megabytes, gigabytes;

    printf("Enter the number of gigabytes: ");
    scanf("%f", &gigabytes);

    megabytes = gigabytes * 1024;
    kilobytes = megabytes * 1024;
    bytes = kilobytes * 1024;

    printf("Storage in different units:\n");
    printf("Gigabytes: %.2f\n", gigabytes);
    printf("Megabytes: %.2f\n", megabytes);
    printf("Kilobytes: %.2f\n", kilobytes);
    printf("Bytes: %.2f\n", bytes);

    return 0;
}